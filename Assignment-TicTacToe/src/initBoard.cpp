#include "main.hpp"

void initBoard(char boardAr[][3])
{
    for(size_t row {0}; row < 3; row++)
        for(size_t col {0}; col < 3; col++)
            boardAr[row][col] = ' ';
}