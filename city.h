#pragma once
#include <cstdlib>
#include <time.h>
#include <iostream>
#include <string>
#include <windows.h>
#include "pokemon.h"

const std::string promptPallet = R"(
****************Pallet City*******************
*                                            *
* Where do you want to go?                   *
*                                            * 
* (1) - Talk to mom                          *
* (2) - Talk to Professor Oak                *
* (3) - To Route 1                           *
*                                            *
**********************************************)";

const std::string promptRoute1 = R"(
****************Route 1***********************
*                                            *
* Where do you want to go?                   *
*                                            * 
* (1) - Hunt Pokemon                         *
* (2) - Go to Viridian City                  *
* (3) - Go to Pallet City                    *
*                                            *
**********************************************)";

class city
{
public:
	void pallet() {
		//std::cout << promptPallet;

        while (true)
        {
           // system("CLS");

            std::cout << promptPallet;
            char c;
            std::cin >> c;


            if (toupper(c) == '1')
            {
                std::cout << "Breve dica da mae\n";
            }

            else if (toupper(c) == '2')
            {
                std::cout << "Breve dica do prof\n";

            }

            else if (toupper(c) == '3')
            {
                std::cout << "Voce iniciou sua jornada para a Route 1.\n";
                route1();

            }

            else
                std::cout << "Please enter a valid selection.\n";
            system("PAUSE");

        }
	}
	void route1() {
        while (true)
        {
            // system("CLS");

            std::cout << promptRoute1;
            char c;
            std::cin >> c;


            if (toupper(c) == '1')
            {
                std::cout << "Breve sistema de cacar pokemon\n";
            }

            else if (toupper(c) == '2')
            {
                viridian();

            }

            else if (toupper(c) == '3')
            {
                std::cout << "Voce retornou para Pallet.\n";
                pallet();

            }

            else
                std::cout << "Please enter a valid selection.\n";
            system("PAUSE");

        }
	}
    void viridian() {

        std::cout << "Soon Viridian City.\n";
    
    }
};

