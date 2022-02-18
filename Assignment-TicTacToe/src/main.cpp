/*****************************************************************************
 * AUTHOR      : Carlos Aguilera
 * STUDENT ID  : 1152562
 * LAB #       : 
 * CLASS       : CS1B
 * SECTION     : M-W
 * DUE DATE    : 
 ****************************************************************************/

#include "main.h"

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
    std::string playerX {"PlayerX"};
    std::string playerO {"PlayerO"};
    char menuChoice {};
    do
    {
        system("clear");
        displayHeader();
        displayInstructions();
        std::cout << "Main Menu\na. Exit\nb. Set Player Names\nc. Play in Two Player Mode\nd. Play in One Player Mode\nEnter Choice: ";
        std::cin.get(menuChoice);
        std::cin.ignore(10, '\n');

        switch(menuChoice)
        {
            case 'a': 
                system("clear");
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
                std::string difficultyInput {};

                do
                {
                    system("clear");
                    displayBoard(boardAr);
                    getAndCheckInp(difficultyInput, menuChoice, boardAr, token, playerX, playerO);
                    whoWon = checkWin(boardAr);
                    switchToken(token);
                } while (whoWon != 't' && whoWon != 'X' && whoWon != 'O');
                displayWinner(boardAr, whoWon, playerX, playerO);
                break;
            }
            case 'd':
            {
                system("clear");
                char boardAr[3][3];
                initBoard(boardAr);
                char whoWon {};
                char token {'X'};
                std::string difficultyInput {"Easy"};

                std::cout << "Select what difficultly you want the AI to be!\n";
                std::cout << "Easy\nNormal\nHard\nEnter String: ";
                std::getline(std::cin, difficultyInput);

                do
                {
                    system("clear");
                    displayBoard(boardAr);
                    getAndCheckInp(difficultyInput, menuChoice, boardAr, token, playerX, playerO);
                    whoWon = checkWin(boardAr);
                    switchToken(token);
                } while (whoWon != 't' && whoWon != 'X' && whoWon != 'O');
                displayWinner(boardAr, whoWon, playerX, playerO);
                break;
            }
        }

    }while(menuChoice != 'a');
}