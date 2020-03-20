#include <iostream>
#include <cmath>
#include <ctime>

int fibo1(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibo1(n-1) + fibo1(n-2);
}

int fibo2(int n){
    double number = sqrt(5.0);
    return round((1/number)*(pow(2/(number-1), n) - pow(-2/(number+1), n)));
}

void wypisz(int num){
    for (int i=1; i<=48; i++){
        if (num == 1)
            std::cout << "F" << i << " = " << fibo1(i) << std::endl;
        else if (num == 2)
            std::cout << "F" << i << " = " << fibo2(i) << std::endl;
    }
}

int main()
{
    std::cout << "Funkcja fibo1:" << std::endl;
    clock_t start = clock();
    wypisz(1);
    clock_t time = clock() - start;
    std::cout << "Czas działania:" << time << std::endl;

    std::cout << "Funkcja fibo2:" << std::endl;
    clock_t start2 = clock();
    wypisz(2);
    clock_t time2 = clock() - start2;
    std::cout << "Czas działania:" << time2 << std::endl;
}
