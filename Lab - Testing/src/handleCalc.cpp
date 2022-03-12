#include "../include/main.h"

void handleCalc(const size_t numOfSheeps, const size_t numOfChocolateBars) {
   for (size_t i {4}; i > 0; i--) {
      if (numOfSheeps == 0 || numOfSheeps > numOfChocolateBars) {
         handleOutput(numOfChocolateBars);
         i = 1;
      } else if (numOfChocolateBars >= (numOfSheeps * i)) {
         size_t remainder {numOfChocolateBars - (numOfSheeps * i)};
         handleOutput(remainder, i);
      }
   }
}