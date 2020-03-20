#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n = 1000000, j = 1;
    double result = 0.0, factor = 1;

    for (;j <= n; j++){
        result += factor/(2*j-1);
        factor = -factor;
    }

    result *= 4;
    cout << "Wartość obliczona: " << result << endl;
    cout << "Wartość pi: " << M_PI << endl;
    cout << "Różnica: " << M_PI - result << endl;

    return 0;
}
