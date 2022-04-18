#include "../../include/header.h"

void validateInput(Menu &choice) {
  int n;
  bool valid = false;
  do {
    try {
      std::cout << "Enter a command (0 to exit): ";
      std::cin >> n;
      if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        throw true;
      }
      choice = static_cast<Menu>(n);
      valid = true;
    }catch (bool invalid) {
      std::cout << "**** Please input a NUMBER between 0 and 6 ****\n";
    }
  } while (!valid);
  return;
}