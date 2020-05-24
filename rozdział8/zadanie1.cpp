#include <iostream>
#include <sstream>

void change_to_number(std::istringstream& numbers){
    while(true){
        int number;
        numbers >> number;                       // próba wczytania liczby

        if (numbers){                            // sprawdzenie czy liczba została wczytana
            std::cout << number << "\n";
            continue;
        }
        else if (numbers.eof()){                 // sprawdzenie czy przetworzono cały napis
            break;
        }

        numbers.clear();                         // wyczyszczenie flagi 'fail'
        numbers.get();                           // pobranie ze strumienia znaku, który sprawił kłopot
    }
}

int main()
{
    std::istringstream numbers("44 33 22 11");
    change_to_number(numbers);

    return 0;
}
