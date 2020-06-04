#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <map>

typedef std::map<int, int> SLOWNIK;

struct Sum {
    void operator()(int n) { sum += n; }
    int sum{0};
};

struct Slownik {
    SLOWNIK slownik;
    void operator()(int i) { ++slownik[i]; }
    void result(){
        for (auto j:slownik){
            std::cout << j.first << " - " << j.second << "\n";
        }
    }
};

int main() {
    int i;
    std::string line;
    std::vector<int> vec;
    std::fstream file;
    file.open("dane.txt", std::ios::in);

    if (!file.good()){
        std::cout << "Nie mozna otworzyc pliku\n";
    }

    while (std::getline(file, line)){
        std::istringstream(line) >> i;
        vec.push_back(i);
    }

    std::cout << "Obecny rozmiar wektora: " << vec.size() << "\n";
    std::cout << "Obecny fizyczny rozmiar wektora: " << vec.capacity() << "\n";
    std::cout << "Pierwsza wartość: " << vec.front() << "\n";
    std::cout << "Ostatnia wartość: " << vec.back() << "\n";

    auto is_even = [](int e) { return e % 2 == 0; };
    std::cout << "Liczba parzystych elementów wektora: "
              << std::count_if(vec.begin(), vec.end(), is_even) << "\n";

    Sum s = std::for_each(vec.begin(), vec.end(), Sum());

    std::cout << "Suma wszystkich elementów wekotra: " << s.sum << "\n";

    std::sort(vec.begin(), vec.end());

    Slownik a = std::for_each(vec.begin(), vec.end(), Slownik());
    a.result();


    file.close();
    return 0;
}
