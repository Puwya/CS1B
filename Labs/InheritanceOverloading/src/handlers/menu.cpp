#include "../../include/main.h"

void menu(const MenuType &menu) {
  if (menu == kEntry) {
    std::cout << "1 - Initialize Animals\n";
    std::cout << "0 - Exit\n";
    std::cout << "Enter selection: ";
    return;
  }
  if (menu == kMain) {
    std::cout << "1 - Re-Initialize Sheep\n";
    std::cout << "2 - Re-Initialize Pigs\n";
    std::cout << "3 - Change Age\n";
    std::cout << "4 - Display\n";
    std::cout << "0 - Exit\n";
    std::cout << "Enter selection: ";
    return;
  }
  if (menu == kAnimal) {
    std::cout << "1 - Sheep\n";
    std::cout << "2 - Pig\n";
    std::cout << "0 - Exit\n";
    std::cout << "Enter selection: ";
    return;
  }
  if (menu == kChoosingAnimal) {
    std::cout << "Enter selection: ";
    return;
  }
  if (menu == kChoosingAge) {
    std::cout << "Enter Age: ";
    return;
  }
}