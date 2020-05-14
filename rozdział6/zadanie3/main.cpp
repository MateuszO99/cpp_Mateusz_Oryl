#include <iostream>
#include "stos.h"

int main()
{
    Stos stos;
    stos.push(11);
    stos.push(22);
    stos.push(33);
    stos.push(44);

    std::cout << stos;
}
