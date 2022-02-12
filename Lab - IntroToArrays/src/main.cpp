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
const int AR_SIZE {10};
int main()
{
    printHeading();

    std::string names[AR_SIZE];
    for(size_t i {0}; i < AR_SIZE; i++)
    {
        std::cout << "Enter name #" << i+1 << ": ";
        std::cin >> names[i];
    }

    std::string inputName {};
    do
    {
        int inputNameInstances {0};
        std::cout << "\nWho do you want to search for(enter done to exit)? ";
        std::cin >> inputName;

        if(inputName != "done")
        {
            for(auto name : names)
                if(inputName == name)
                    ++inputNameInstances;

            std::cout << "There are " << inputNameInstances << " of the name " << inputName << ".\n\n";
        }

    } while (inputName != "done");

    std::cout << "Thank you for using my program!\n";
    return 0;
}