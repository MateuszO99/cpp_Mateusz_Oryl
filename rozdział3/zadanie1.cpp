#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int znajdz_najmniejsza(const vector<int> & v){
    if (v.empty()){
        return INT_MIN;
    }

    int min = v[0];
    int size = v.size();

    for (int i = 1; i < size; i++){
        if (min > v[i]){
            min = v[i];
        }
    }

    return min;
}

//
int main()
{
    vector<int> v;
    v = {12, 1, -7, 44, 0, -8, 0};

    cout << znajdz_najmniejsza(v) << endl;


    return 0;
}
