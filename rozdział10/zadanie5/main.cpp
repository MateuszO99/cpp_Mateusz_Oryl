#include <iostream>

template<typename T>
void zamien(T & x, T & y){
    T z = x;
    x = y;
    y = z;
}

int main()
{
    double x = 12.2;
    double y = 5.3;

    std::cout << "Wartosc x: " << x << "\n";
    std::cout << "Wartosc y: " << y << "\n";

    zamien<double>(x, y);

    std::cout << "Wartosc x po zamianie: " << x << "\n";
    std::cout << "Wartosc y po zamianie: " << y << "\n";

    return 0;
}
