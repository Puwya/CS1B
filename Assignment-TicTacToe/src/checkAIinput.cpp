#include "main.hpp"
#include <time.h>
#include <stdlib.h>

bool checkAIinput(char boardAr[][3], const char token)
{
    srand(time(NULL));

    while(true)
    {
        int row {rand() % 3};
        int col {rand() % 3};
        if(isspace(boardAr[row][col])) {
            boardAr[row][col] = token;
            return true;
        }
    }

}