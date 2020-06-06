#include <iostream>
#include <vector>

template<typename T>
class Matrix{
    std::vector<std::vector<T>>vec;
public:
    Matrix(T n = 1){
        vec.resize(n);
        for (T i=0; i < vec.size(); ++i)
            vec[i].resize(i+1);

        for (T i=0; i < vec.size(); ++i){
            for (T j=0; j <= i; ++j)
                vec[i][j] = (i+1)*(j+1);
        }
    }

    T operator () (T i, T j) const {
        if (i < j){
            return vec[j][i];
        }
        return vec[i][j];
    }

    T& operator () (T i, T j){
        if (i < j){
            return vec[j][i];
        }
        return vec[i][j];
    }
};

int main() {
    int n = 3;
    Matrix<int> m(n);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
            std::cout << m(i, j) << " ";
        std::cout << "\n";
    }

    return 0;
}
