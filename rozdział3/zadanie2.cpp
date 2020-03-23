#include <iostream>
#include <vector>

using namespace std;

void zeruj(vector<double> & v){
    int size = v.size();
    for (int i = 0; i < size; i++)
        v[i] *= 0;
}

int main()
{
    const int size = 10;
    vector<double> v(size);

    for (int i = 0; i < size; i++){
        v[i] = static_cast<double>(i+1);
        cout << v[i] << endl;
    }

    zeruj(v);
    cout << "Wektor został wyzerowany" << endl;

    for (int i = 0; i < size; i++){\
        cout << v[i] << endl;
    }
//
    return 0;
}
