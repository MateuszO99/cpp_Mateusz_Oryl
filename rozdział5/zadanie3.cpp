#include <iostream>
#include "Random.h"

using namespace std;

int main()
{
    Random number;
    for (int i = 0; i < 100; i++)
    {
        cout << number() << endl;
    }
}