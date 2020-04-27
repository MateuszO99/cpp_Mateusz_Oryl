#include <iostream>
#include <cmath>

using namespace std;

class Complex{
    friend std:: ostream& operator<<(std:: ostream &result, Complex const &c){
        if (c.im < 0)
            result << c.re << c.im << "i" << endl;
        else
            result << c.re << "+" << c.im << "i" << endl;
        return result;
    }

    friend std:: istream& operator>>(std:: istream &result, Complex &c){
        cout << "Podaj część rzeczywistą: " << endl;
        result >> c.re;
        cout << "Podaj część urojoną: ";
        result >> c.im;
        return result;
    }

public:
    double re, im;

    Complex(double r=0, double i=0){
        re = r;
        im = i;
    }

    Complex operator+ (Complex const& c) const{
        Complex result;
        result.re = re + c.re;
        result.im = im + c.im;
        return result;
    }

    Complex operator- (Complex const& c) const{
        Complex result;
        result.re = re - c.re;
        result.im = im - c.im;
        return result;
    }

    Complex operator* (Complex const& c) const{
        Complex result;
        result.re = re * c.re - im * c.im;
        result.im = re * c.im + im * c.re;
        return result;
    }

    Complex operator/ (Complex const& c) const{
        Complex result;
        double num = pow(c.re, 2) + pow(c.im, 2);
        result.re = (re * c.re + im * c.im) / num;
        result.im = (re * (-c.im) + im * c.re) / num;
        return result;
    }

    ~Complex() = default;
};

int main()
{
    Complex c1(1, 3);
    Complex c2;

    cout << "Podaj liczbę zespoloną: ";
    cin >> c2;

    cout << c1 + c2;
    cout << c1 - c2;
    cout << c1 * c2;
    cout << c1 / c2;


    return 0;
}