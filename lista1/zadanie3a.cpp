#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double t = 1/pow(3, 0.5), result;
    int i = 1;
    result = 6 * pow(2, 0) * t;

    cout << "Wartość przybliżona dla i=0 to: " << result << endl;

    for (; i <= 30; i++){
        t = (pow(t*t+1, 0.5) - 1) / t;
        result = 6 * pow(2, i) * t;
        cout << "Wartość przybliżona dla i=" << i << " to: " << result << endl;
    }

    return 0;
}
