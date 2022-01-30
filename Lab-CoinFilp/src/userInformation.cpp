#include "main.hpp"
#include <string>

void userInformation()
{
    std::string userName {};
    std::cout << "What is your name? ";
    std::getline(std::cin, userName);
    userName = userName.substr(userName.find(' ') + 1, userName.size());

    char userGender {};
    std::cout << "What is your gender (m/f): ";
    std::cin.get(userGender);
    std::cin.ignore(100,'\n');

    std::cout << "\n\nTry to get 3 heads in a row. Good luck ";
    if(userGender == 'm' || userGender == 'M')
        std::cout << "Mr. " << userName << "\n\n";
    else if(userGender == 'f' || userGender == 'F')
        std::cout << "Mrs. " << userName << "\n\n";
    else
        std::cout << userName << "\n\n";
}