#include <cstdlib>
#include <time.h>
#include <iostream>
#include <string>
#include <windows.h>
#include "city.h"
#include "util.h"

const std::string prompt = R"(
**********POKEMOM ULTRA demake***************
*                                            *
* (P) - Play                                 *
* (Q) - Quit program                         *
*                                            *
**********************************************)";



int main()
{
    
    std::cout << prompt;

    while (true)
    {
        system("CLS");

        std::cout << prompt;
        char c;
        std::cin >> c;


        if (toupper(c) == 'P' && 'p')
        {
            util intro;
            intro.intro();
        }

        else if (toupper(c) == 'Q' && 'q')
        {
            break;

        }
       
        else
            std::cout << "Please enter a valid selection.\n";
        system("PAUSE");

    }

}



