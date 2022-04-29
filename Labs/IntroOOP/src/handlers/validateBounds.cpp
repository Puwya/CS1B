#include "../../include/header.h"

int validateBounds(const MenuOption &menuOption, const int MIN, const int MAX,
               const std::string &option, const bool &initialized) {
  int validate;
  do {
    validate = validation(menuOption, MIN, MAX, option, initialized);
    if (validate < MIN || validate > MAX) {
      std::cout << "\n**** The number " << validate << " is an invalid entry ****\n";
      std::cout << "**** Please input a number between " << MIN << " and " << MAX << " ****\n\n";
    }
  } while (validate < MIN || validate > MAX);
  return validate;
}