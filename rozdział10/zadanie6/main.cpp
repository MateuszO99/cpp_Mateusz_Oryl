#include <iostream>
#include <vector>

template<typename T>
void zamien(std::vector<T> & x, std::vector<T> & y){
    x.swap(y);
}

int main()
{
    std::vector<double> x = {12.2, 5.3};
    std::vector<double> y = {10.0, 3.1};

    std::cout << "Wartosci wektora x:" << "\n";
    for (int i = 0; i < 2; i++){
        std::cout << x[i] << "\n";
    }

    std::cout << "Wartosci wektora y:" << "\n";
    for (int i = 0; i < 2; i++){
        std::cout << y[i] << "\n";
    }

    zamien(x, y);

    std::cout << "Wartosci wektora x po zmianie:" << "\n";
    for (int i = 0; i < 2; i++){
        std::cout << x[i] << "\n";
    }

    std::cout << "Wartosci wektora y po zmianie:" << "\n";
    for (int i = 0; i < 2; i++){
        std::cout << y[i] << "\n";
    }

    return 0;
}
