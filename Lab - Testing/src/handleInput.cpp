#include "../include/main.h"

void handleInput(size_t &numOfSheeps, size_t &numOfChocolateBars) {
   bool inputValidated = false;
   do {
      try {
         std::cout << "Enter number of Sheep: ";
         std::cin >> numOfSheeps;
         if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(10, '\n');
            throw(true);
         }
         std::cout << "Enter number of Chocolate Bars: ";
         std::cin >> numOfChocolateBars;
         if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(10, '\n');
            throw(true);
         }
         inputValidated = true;
      }
      catch(bool invalid) {
         std::cout << "Input was invalid try again!!\n";
         usleep(2000000);
         system("clear");
      }
   }while(!inputValidated);
}