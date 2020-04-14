#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    int const N = 8500000;
    clock_t start, end;
    start = clock();

    for (unsigned n = 1; n <= N; ++n){
        int * p = new int[n];
        delete [] p;
    }
    end = clock() - start;
    cout << ((double)end)/CLOCKS_PER_SEC << endl;
    cout << "Pojedyncze wykonanie: " << ((double)end)/CLOCKS_PER_SEC / 8500000.0 << endl;

    clock_t start1, end1;
    int num = 1;
    start1 = clock();

    for (unsigned n = 1; n <= N; ++n){
        num++;
    }
    end1 = clock() - start1;
    cout << ((double)end1)/CLOCKS_PER_SEC << endl;
    cout << "Pojedyncze wykonanie: " << ((double)end1)/CLOCKS_PER_SEC / 8500000.0 << endl;

    return 0;
}
