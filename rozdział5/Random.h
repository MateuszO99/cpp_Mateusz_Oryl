#include <ctime>
#include <cassert>
#include <climits>
#include <cmath>

#ifndef ROZDZIAL5_RANDOM_H
#define ROZDZIAL5_RANDOM_H


class Random {
    int _fn;
public:
    Random(int f1 = time(0));
    double operator() ();
};

#endif //ROZDZIAL5_RANDOM_H
