#include "main.hpp"

int searchName(std::string inputName, size_t sizeofArray, std::string arrayofNames[])
{
    for(size_t i {0}; i < sizeofArray; i++)
    {
        if(inputName == arrayofNames[i])
            return i;
    }
    return -1;
}