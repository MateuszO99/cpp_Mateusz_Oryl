#include <iostream>

using namespace std;

int nwd(int x, int y){
    if (x == 0 or y == 0)
        return -1;

    x = std::abs(x);
    y = std::abs(y);
    while (x != y){
        if (x>y)
            x -= y;
        else
            y -= x;
    }
    return x;
}

int main()
{
    cout << nwd(0, 4) << endl;
}
