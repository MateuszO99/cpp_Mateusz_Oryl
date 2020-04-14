#include <iostream>

int main()
{
    double tab[10];
    double x;
    std::cout << &x << "\t" << &tab[-1] << "\n";

    /* Podanie do tablicy argumentu z poza zakresu doprowadziło nas do adresu zmiennej x. */
}
