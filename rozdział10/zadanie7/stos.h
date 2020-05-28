#ifndef STOS_H
#define STOS_H

#include <cassert>       // <-- definicja assert
#include <cstddef>       // <-- definicja size_t

template<typename T>
struct Ogniwo
{
    Ogniwo (T n, Ogniwo* p)
    : _dane(n), _p_nastepny(p)
    { }

    T         _dane;
    Ogniwo*   _p_nastepny;   // <-- rekurencyjna struktura danych!
};


template<typename T>
class Stos
{
public:
    Stos ();
    Stos (Stos const&);
    ~Stos();

    void push (T i);
    void pop();
    T  top() const;
    T& top();
    bool empty() const;
    size_t size() const;
    Stos<T>& operator=(Stos<T> const&);
private:
    Ogniwo<T>* _pSzczyt;
    size_t  _size;
};


template<typename T>
Stos<T>::~Stos()
{
    while ( !this->empty() )
        this->pop();
}


template<typename T>
inline Stos<T>::Stos()
   : _pSzczyt(0), _size(0)
{ }

template<typename T>
inline void Stos<T>::push (T n)
{
    _pSzczyt = new Ogniwo<T>(n, _pSzczyt);
    _size++;
}

template<typename T>
inline void Stos<T>::pop()
{
    assert ( !empty() );
    Ogniwo<T>* temp = _pSzczyt;
    _pSzczyt = _pSzczyt->_p_nastepny;
    delete temp;
    _size--;
}

template<typename T>
inline T Stos<T>::top() const
{
    assert ( !empty() );
    return _pSzczyt->_dane;
}

template<typename T>
inline T& Stos<T>::top()
{
    assert ( !empty() );
    return _pSzczyt->_dane;
}

template<typename T>
inline bool Stos<T>::empty() const { return  _pSzczyt == 0; }

template<typename T>
inline size_t Stos<T>::size() const { return _size; }

#endif // STOS_H
