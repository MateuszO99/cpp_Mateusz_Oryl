#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v {2, 3, -1, 0, 10, 4};

    for (unsigned i = 0; i < v.size(); i++){
        std::cout << v[i] << "\n";
    }

    std::cout << "\n";

    //v.pop_back(); zamiast v.erase(v.end() - 1)
    //v.push_back(7); zamiast v.insert(v.end(), 7);
    //std::cout << v.back() << "\n"; zamiast std::cout << v[v.size() - 1] << "\n";
    //std::cout << v.back() << "\n"; zamiast std::cout << *(v.end() - 1) << "\n";
    //std::cout << v.front() << "\n"; zamiast //std::cout << *(v.begin()) << "\n";
    //v.empty() zamiast v.begin() == v.end()

    for (unsigned i = 0; i < v.size(); i++){
        std::cout << v[i] << "\n";
    }

    return 0;
}
