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
    displayHeader();
    displayInstructions();

    std::string playerX {"PlayerX"};
    std::string playerO {"PlayerO"};
    char menuChoice {};
    do
    {
        std::cout << "Main Menu\na. Exit\nb. Set Player Names\nc. Play in Two Player Mode\nd. Play in One Player Mode\nEnter Choice: ";
        std::cin.get(menuChoice);
        std::cin.ignore(10, '\n');

        switch(menuChoice)
        {
            case 'a': 
                std::cout << "BYE!!!\n";
                break;
            case 'b':
                getPlayers(playerX, playerO);
                break;
            case 'c':
            {
                char boardAr[3][3];
                initBoard(boardAr);
                char whoWon {};
                char token {'X'};

                do
                {
                    system("clear");
                    displayBoard(boardAr);
                    getAndCheckInp(boardAr, token, playerX, playerO);
                    whoWon = checkWin(boardAr);
                    switchToken(token);
                } while (whoWon != 't' && whoWon != 'X' && whoWon != 'O');
                displayWinner(boardAr, whoWon, playerX, playerO);
                break;
            }
        }

    }while(menuChoice != 'a');
}