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

            if(inputNameInstances > 1)
                std::cout << "There are " << inputNameInstances << " instances of the name " << inputName << ".\n";
            else if(inputNameInstances == 1)
                std::cout << "There are one instance of the name " << inputName << ".\n";
            else if(inputNameInstances == 0)
                std::cout << inputName << "'s name does not exist in the list.\n";
        }

    } while (inputName != "done");

    std::cout << "Thank you for using my program!\n";
    return 0;
}