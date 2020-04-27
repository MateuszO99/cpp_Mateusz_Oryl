#include <iostream>

class Wektor
{
public:
    size_t _rozmiar;
    int *  _ptab;

    Wektor(size_t n)
            : _rozmiar(n), _ptab(new int[n])
    {
        for (size_t i = 0; i < _rozmiar; i++ )
            _ptab[i] = 0;
    }

    ~Wektor() { delete [] _ptab; }

    int & operator[](int n)         { return _ptab[n]; }
    int   operator[](int n) const   { return _ptab[n]; }

    void operator= (Wektor const& wek)
    {
        if (this == &wek)
            return;

        if(this->_rozmiar != wek._rozmiar)
        {
            delete [] _ptab;
            this->_rozmiar = wek._rozmiar;
            this->_ptab = new int [this->_rozmiar];
        }
        for (size_t i = 0; i < this->_rozmiar; i++)
            this->_ptab[i] = wek._ptab[i];
    }
};

int main()
{
    Wektor v(10);

    for (int i = 0; i < 10; i++)
        std:: cout << "Wartosc v[" << i << "] = " << v[i] << std:: endl;

    return 0;
}