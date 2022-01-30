#include "main.hpp"

size_t averageLogic(size_t totalHeadCount, size_t totalFlipCount)
{
    return double(totalHeadCount)/totalFlipCount * 100;
}