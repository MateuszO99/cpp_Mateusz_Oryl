#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n = 1000000;
    double result = 0.0, j = 1;

    for (;j <= n; j++){
        result += 1/((2*j-1)*(2*j-1));
    }

    result *= 8;
    result = pow(result, 0.5);
    cout << "Obliczona wartość: " << result << endl;
    cout << "Wartość pi: " << M_PI << endl;
    cout << "Różnica wartości: " << M_PI - result << endl;

    return 0;
}
