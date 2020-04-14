#include <iostream>
#include <string.h>
#include <stdio.h>

int main()
{
    char haslo[8];
    strcpy(haslo,"Ta.jnE!");
    for( ; ; )
    {
        std::cout << "podaj hasło: ";
        char tmp[8];
        std::cin >> tmp;
        if ( strcmp(tmp, haslo) == 0)
            break;
        std::cout << "przykro mi, haslo jest niepoprawne!\n";

    }
    std::cout << "witaj w systemie! \n";
    /* Program działa poprawnie po mimo wpisania przykładu z książki 
    nie udało mi się zrobić błędu w programie. Być może problem już 
    został naprawiony albo zależy od kompliatora lub systemu. */
    return 0;
}
