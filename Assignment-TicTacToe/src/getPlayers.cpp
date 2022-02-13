#include "main.hpp"

void getPlayers(std::string &playerX, std::string &playerO)
{
    std::cout << "Enter name for player with token X: ";
    std::getline(std::cin, playerX);
    std::cout << "Enter name for player with token O: ";
    std::getline(std::cin, playerO);
}