#include "main.h"
#include <time.h>
#include <stdlib.h>

bool checkAiInput(const std::string difficulty, char boardAr[][3], const char token)
{
    srand(time(NULL));

    if(difficulty == "Easy")
        return easyAi(boardAr, token);
    else if(difficulty == "Normal");

}