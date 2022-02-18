#include "main.h"

char checkWin(char boardAr[][3])
{
    static int plays {0};
    if(plays > 3)
    {
        if(boardAr[0][0] != ' ' && boardAr[0][0] == boardAr[0][1] && boardAr[0][1] == boardAr[0][2]) {
            plays = 0;
            return boardAr[0][0];
        }
        else if(boardAr[1][0] != ' ' && boardAr[1][0] == boardAr[1][1] && boardAr[1][1] == boardAr[1][2]) {
            plays = 0;
            return boardAr[1][0];
        }
        else if(boardAr[2][0] != ' ' && boardAr[2][0] == boardAr[2][1] && boardAr[2][1] == boardAr[2][2]) {
            plays = 0;
            return boardAr[2][0];
        }
        else if(boardAr[0][0] != ' ' && boardAr[0][0] == boardAr[1][0] && boardAr[1][0] == boardAr[2][0]) {
            plays = 0;
            return boardAr[0][0];
        }
        else if(boardAr[0][1] != ' ' && boardAr[0][1] == boardAr[1][1] && boardAr[1][1] == boardAr[2][1]) {
            plays = 0;
            return boardAr[0][1];
        }
        else if(boardAr[0][2] != ' ' && boardAr[0][2] == boardAr[1][2] && boardAr[1][2] == boardAr[2][2]) {
            plays = 0;
            return boardAr[0][2];
        }
        else if(boardAr[0][0] != ' ' && boardAr[0][0] == boardAr[1][1] && boardAr[1][1] == boardAr[2][2]) {
            plays = 0;
            return boardAr[0][0];
        }
        else if(boardAr[0][2] != ' ' && boardAr[0][2] == boardAr[1][1] && boardAr[1][1] == boardAr[2][0]) {
            plays = 0;
            return boardAr[0][2];
        }
        else if(plays > 7) {
            plays = 0;
            return 't';
        }
    }
    ++plays;
    return 'c';
}