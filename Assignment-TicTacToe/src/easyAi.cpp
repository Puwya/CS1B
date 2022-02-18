#include "main.h"

bool easyAi(char boardAr[][3], const char token)
{
    while(true)
    {
        int row {rand() % 3};
        int col {rand() % 3};
        if(isspace(boardAr[row][col])) {
            for(size_t i {3}; i > 0; i--)
            {
                system("clear");
                displayBoard(boardAr);
                if(i == 3)
                    std::cout << "Thinking.\n";
                else if(i == 2)
                    std::cout << "Thinking..\n";
                else if(i == 1)
                    std::cout << "Thinking...\n";
                usleep(150000);
            }
            boardAr[row][col] = token;
            return true;
        }
    }
}