#include "../include/header.h"

MenuOptions switchValidation() {
   int choice;
   bool inputValidated = false;
   do {
      try {
         std::cout << "Enter an option (0 to exit): ";
         std::cin >> choice;
         if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(10, '\n');
            throw(true);
         }
         inputValidated = true;
      }
      catch(bool invalid) {
         std::cout << "Please enter a number!\n";
      }
   } while (!inputValidated);
   
   return static_cast <MenuOptions> (choice);
}