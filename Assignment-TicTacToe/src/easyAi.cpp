#include "main.h"

bool easyAi(char boardAr[][3], const char token)
{
    while(true)
    {
        int row {rand() % 3};
        int col {rand() % 3};
        if(isspace(boardAr[row][col])) {
            thinking(boardAr);
            boardAr[row][col] = token;
            return true;
        }
    }
}