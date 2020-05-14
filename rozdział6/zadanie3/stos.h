#if !defined STOS_LISTA_H__
#define STOS_LISTA_H__
// stos liczb typu int oparty na li�cie pojedynczo ��czonej, (c) Z. Koza, 2008

#include <cassert>       // <-- definicja assert
#include <cstddef>       // <-- definicja size_t
#include <iostream>

struct Ogniwo
{
    Ogniwo (int n, Ogniwo* p)
    : _dane(n), _p_nastepny(p)
    { }

    int       _dane;
    Ogniwo*   _p_nastepny;   // <-- rekurencyjna struktura danych!
};


class Stos
{
    friend std:: ostream& operator<<(std:: ostream &result, Stos const &c);

public:
    Stos ();                 // konstruktor domy�lny
    Stos (Stos const&);      // konstruktor kopiuj�cy
    ~Stos();                 // destruktor
    
    void push (int i);       // dok�ada liczb� na szczyt stosu
    void pop();              // zdejmuje liczb� ze szczytu stosu
    int  top() const;        // udost�pnia warto�� liczby na szczycie stosu
    int& top();              // udost�pnia referencj� do liczby na szczycie stosu
    bool empty() const;      // czy stos jest pusty?
    size_t size() const;     // bie��cy rozmiar stosu
    Stos& operator=(Stos const&); // operator przypisania
private:
    Ogniwo* _pSzczyt;        // wska�nik na ogniwo le��ce na szczycie stosu
    size_t  _size;           // rozmiar stosu
};

inline Stos::Stos()
   : _pSzczyt(0), _size(0)
{ }

inline void Stos::push (int n)
{
    _pSzczyt = new Ogniwo(n, _pSzczyt);
    _size++;
}
  
inline void Stos::pop()
{
    assert ( !empty() );
    Ogniwo* temp = _pSzczyt;
    _pSzczyt = _pSzczyt->_p_nastepny;
    delete temp;
    _size--;
}

inline int Stos::top() const
{
    assert ( !empty() );
    return _pSzczyt->_dane;
}

inline int& Stos::top()
{
    assert ( !empty() );
    return _pSzczyt->_dane;
}

inline bool Stos::empty() const { return  _pSzczyt == 0; }

inline size_t Stos::size() const { return _size; }

#endif
