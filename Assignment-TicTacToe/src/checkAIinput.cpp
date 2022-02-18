#include "main.h"
#include <time.h>
#include <stdlib.h>

bool checkAiInput(const std::string difficulty, char boardAr[][3], const char token)
{
    srand(time(NULL));

    if(difficulty == "Easy")
        return easyAi(boardAr, token);
    else if(difficulty == "Normal") {
        if(winningNormalAi(boardAr, token))
            return true;
        else if(normalAi(boardAr, token))
            return true;
        else
            return easyAi(boardAr, token);
    }


}