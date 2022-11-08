#pragma once
#include <cstdlib>
#include <time.h>
#include <iostream>
#include <string>
#include <windows.h>
#include "city.h"


const std::string promptIntro = R"(
****************Pallet City*******************
*                                            *
* What Pokemon do you will choose?           *
*                                            * 
* (1) - Bulbassaur                           *
* (2) - Charmander                           *
* (3) - Squirtle                             *
*                                            *
**********************************************)";

class util
{
public:
	int intro() {
		std::cout << "Texto introdutorio\n\n";
		system("pause");
        city pallet;
		//std::cout << promptIntro;
		//system("pause");
        while (true)
        {
            // system("CLS");

            std::cout << promptIntro;
            char c;
            std::cin >> c;


            if (toupper(c) == '1')
            {
                std::cout << "Parabens, voce escolheu o Bulbassaur!\n";
                            
                pallet.pallet();
                return 0;
            }

            else if (toupper(c) == '2')
            {
                std::cout << "Parabens, voce escolheu o Charmander!\n";
                              
                pallet.pallet();
                return 0;

            }

            else if (toupper(c) == '3')
            {
                std::cout << "Parabens, voce escolheu o Squirtle!\n";
                               
                pallet.pallet();
                return 0;

            }

            else
                std::cout << "Please enter a valid selection.\n";
            system("PAUSE");

        }


	}
	int next() {
		std::cout << "Press enter to continue\n";
		
		return 0;
	}
	
};

