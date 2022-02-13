#include "main.hpp"

void displayWinner(const char boardAr[][3], const char &whoWon, const std::string &playerX, const std::string &playerO)
{
    if(whoWon == 'X')
    {
        for(size_t i {5}; i > 0; i--)
        {
            system("clear");
            displayBoard(boardAr);
            std::cout << "Congratulations " << playerX << " for winning!!!\n";
            std::cout << "In "<< i << " seconds you will be sent back to the main menu.\n";
            usleep(ONE_SECONDS);
        }
    }else if(whoWon == 'O') 
    {
        for(size_t i {5}; i > 0; i--)
        {
            system("clear");
            displayBoard(boardAr);
            std::cout << "Congratulations " << playerO << " for winning!!!\n";
            std::cout << "In "<< i << " seconds you will be sent back to the main menu.\n";
            usleep(ONE_SECONDS);
        }
    }else if(whoWon == 'T')
    {
        for(size_t i {5}; i > 0; i--)
        {
            system("clear");
            displayBoard(boardAr);
            std::cout << "TIE Game " << playerX << " & " << playerO << " Goodluck next time!!!\n";
            std::cout << "In "<< i << " seconds you will be sent back to the main menu.\n";
            usleep(ONE_SECONDS);
        }
    }
}