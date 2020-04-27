#include "Random.h"

Random::Random(int f1)
:_fn(f1)
{
    assert(f1 > 0 && f1 < (pow(2, 31) - 1));
}

double Random::operator()()
{
    long long num = _fn;
    num *= 16807;
    num %= INT_MAX;
    _fn = static_cast<int>(num);
    return double(num) / double(INT_MAX - 1);
}