#include <iostream>

template<typename T>
T suma(T tab[], unsigned N){
    T result = 0;
    for (unsigned i = 0; i < N; i++)
        result += tab[i];
    return result;
}

int main()
{
    unsigned const N = 5;
    int tab[N];
    for (unsigned i = 0; i < N; i++)
        tab[i] = i + 1;

    unsigned sum = suma(tab, N);
    std::cout << sum << "\n";

    return 0;
}
