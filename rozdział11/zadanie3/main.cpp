#include <iostream>
#include <complex>

int main()
{
    typedef std::complex<double> zesp;
    zesp i (0.0, 1.0);
    std::cout << "Wartosc i^i = " << pow(i, i).real() << "\n";
    return 0;
}
