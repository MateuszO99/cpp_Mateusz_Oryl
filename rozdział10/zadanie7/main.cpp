#include <iostream>
#include "stos.h"

int main()
{
    Stos<int> stos;
    for (int i = 1; i <= 50; i++)
    {
        if (i % 3 == i % 5)
            stos.push(i);
    }
    while (!stos.empty())
    {
    std::cout << stos.top() << " ";
    stos.pop();
    }
}
