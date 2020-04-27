#include <iostream>

class Samochod
{
public:
    Samochod (int n)
            : _kola (n) , _sruby (4*n)  // Koło nie zostało jeszcze zainicjowane, więc podajemy jako argument _sruby n, zamiast _kolo
    {
        std::cout << "Samochod z " << _kola <<  " kolami i "
                  << _sruby << " srubami\n";
    }
private:
    int _sruby;
    int _kola;

};

int main()
{
    Samochod s4 (4);
    Samochod s12 (12);
}