/*****************************************************************************
 * AUTHOR      : Carlos Aguilera
 * STUDENT ID  : 1152562
 * LAB #       : 
 * CLASS       : CS1B
 * SECTION     : M-W
 * DUE DATE    : 
 ****************************************************************************/
#include "main.hpp"
/****************************************************************************
 * Title:
 * --------------------------------------------------------------------------
 * This program will output the class heading
 * --------------------------------------------------------------------------
 * INPUT:
 *
 * OUTPUT:
 ***************************************************************************/
int main() 
{
    heading();

    std::cout << "Welcome to coin toss! Get 3 heads in a row to win!\n\n";
    userInformation();

    size_t currentHeadCount {0}, totalHeadCount {0}, flipCount {0};
    char flipInitializer {};
    while (currentHeadCount != 3)
    {
        std::cout << "Press <enter> to flip";
        std::cin.get(flipInitializer);

        if(flipInitializer == '\n')
        {
            if(coinFlip()) {
                std::cout << "HEAD\n";
                ++currentHeadCount;
                ++totalHeadCount;
            }else {
                std::cout << "TAIL\n";
                currentHeadCount = 0;
            }
            ++flipCount;
        }else {
            std::cin.ignore(10,'\n');
        }
    }

    std::cout << "It took you " << flipCount << " tosses to get 3 heads in a row\n";
    
}