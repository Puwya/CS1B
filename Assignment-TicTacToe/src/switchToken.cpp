#include "main.h"

void switchToken(char &token)
{
    if(token == 'X')
        token = 'O';
    else if(token == 'O')
        token = 'X';
}