/*****************************************************************************
 * AUTHOR      : Carlos Aguilera
 * STUDENT ID  : 1152562
 * LAB #7      : Testing 
 * CLASS       : CS1B
 * SECTION     : M-W
 * DUE DATE    : 03.14.22
 ****************************************************************************/

/****************************************************************************
 * Title: Testing
 * --------------------------------------------------------------------------
 * FUNCTION:
 * --------------------------------------------------------------------------
 * Data Table
 * ----------
 ***************************************************************************/

#include "../include/main.h"

int main() {
   heading();

   size_t numOfSheeps {};
   size_t numOfChocolateBars {};

   for (size_t i {0}; i < 3; i++) {
      handleInput(numOfSheeps, numOfChocolateBars);
      handleCalc(numOfSheeps, numOfChocolateBars);
   }
   return 0;
}