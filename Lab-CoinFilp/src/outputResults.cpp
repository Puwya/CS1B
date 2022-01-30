#include "main.hpp"

void outputResults(size_t totalFlipCount, size_t averageHeadFlip)
{

    std::cout << "It took you " << totalFlipCount << " tosses to get 3 heads in a row.\n";
    std::cout << "On average you flipped heads " << averageHeadFlip << "% "<< "of the time\n";
}