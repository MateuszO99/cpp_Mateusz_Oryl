#include <iostream>
#include <vector>

double operator* (std::vector<double> const& v, std::vector<double> const& w){

    double result;

    for(unsigned i = 0; i < v.size() and i < w.size(); ++i)
        result += v[i] * w[i];

    return result;
}

std::ostream & operator<< (std::ostream & F, std::vector<double> const& v){
	F << "(";
    if (!v.empty())
        F << v[0];
    for (unsigned i = 1; i < v.size(); ++i)
        F << "," << v[i];
    F << ")";
    return F;
}

int main()
{
    std::vector<double> v(4);
    v = {2, 4, 3, 5};

    std::vector<double> w(4);
    w = {1.1, 6, 7, 0};

    std::cout << "v = " << v << std::endl;
    std::cout << "w = " << w << std::endl;
    std::cout << "v * w = " << v * w << std::endl;

    return 0;
}
