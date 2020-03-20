#include <iostream>

unsigned silnia(unsigned n)
{
    if (n == 0)
        return 1;
    else
        return n * silnia(n-1);
}

int main()
{
    for (int i=0; i < 5; ++i)
        std::cout << i << "!=" << silnia(i) << "\n";
    /* Gdy podamy za argument -1 pojawi się komunikat 'The program has unexpectedly finished.'
    ponieważ unsigned nie może być ujemny */
}
