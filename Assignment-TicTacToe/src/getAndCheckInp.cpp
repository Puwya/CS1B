#include "main.hpp"

void getAndCheckInp(const char menuChoice, char boardAr[][3], const char token, const std::string &playerX, const std::string &playerO)
{
    int row {};
    int col {};
    bool updatedBoard {false};

    do
    {
        if(token == 'X') {
            std::cout << playerX << "'s turn! What's your play? ";
            std::cin >> row >> col;
            --row;
            --col;
        }else if(menuChoice != 'd' && token == 'O') {
            std::cout << playerO << "'s turn! What's your play? ";
            std::cin >> row >> col;
            --row;
            --col;
        }else {
            updatedBoard = checkAIinput(boardAr, token);
        }
        
        if(menuChoice != 'd' || token == 'X')
        {
            if(isspace(boardAr[row][col])) {
                boardAr[row][col] = token;
                updatedBoard = true;
            }else {
                system("clear");
                std::cout << "Spot is taken on the board! Retry.\n";
                displayBoard(boardAr);
            }
        }
    }while(!updatedBoard);
}