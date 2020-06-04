#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v {2, 3, -1, 0, 10, 4};

    for (std::vector<int>::const_iterator iter = v.begin(); iter != v.end(); ++iter){
        std::cout << *iter << "\n";
    }

    return 0;
}
