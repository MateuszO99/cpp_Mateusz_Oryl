#include <iostream>

using namespace std;

int main()
{
    int result = 1;

    for (int i = 0; i <= 40; i++){
        if (i != 0)
            result *= i;
        cout << i << "! =" << result << endl;
    }

    return 0;
}
