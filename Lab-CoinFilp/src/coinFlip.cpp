#include "stdlib.h"
#include "time.h"

bool coinFlip()
{
    srand(time(NULL));
    return static_cast<bool>(rand() % 2);
}