#include "../include/header.h"
#include "../include/Animal.h"
/*******************************************************************************
 * AUTHOR      : Carlos Aguilera
 * STUDENT ID  : 1152562
 * LAB #12     : Introduction OOP
 * CLASS       : CS1B
 * SECTION     : M-W
 * DUE DATE    : 05.02.22
 ******************************************************************************/

/******************************************************************************
 * Title: Introduction OOP
 * ----------------------------------------------------------------------------
 * PROGRAM:
 * 
 * ----------------------------------------------------------------------------
 ******************************************************************************/

int main() {
  heading();
  bool initialized = false;
  MenuOption choice = Exit;
  Animal Fluffy("Fluffy", "Sheep", 1, 15000.00f);
  Animal Maa("Maa", "Sheep", 2, 16520.35f);
  Animal Babe("Babe", "Pig", 3, 10240.67f);
  do {
    choice = MenuOption(validation(InitAnimals, 0, ((initialized) ? 4 : 1),
                                   "", initialized));
    if (!initialized && choice >= 2) {
      continue;
    }
    switch (choice) {
      case Exit: {
        break;
      }
      case InitAnimals: {
        if (initialized) {
          char init;
          validateChar(init);
          if (toupper(init) == 'Y') {
            Fluffy.setInitialValues("Fluffy", "Sheep", 1, 15000.00f);
            Maa.setInitialValues("Maa", "Sheep", 2, 16520.35f);
            Babe.setInitialValues("Babe", "Pig", 3, 10240.67f);
            std::cout << "Initializing Fluffy, Maa, & Babe...\n";
          }else {
            std::cout << "Animals have not been re-initialized!\n";
          }
        }
        initialized = true;
        break;
      }
      case ChangeAge: {
        int animalChoice = validateBounds(ChangeAge, 1, 3, "Change Age", true);
        int ageChoice = validateBounds(NEW, 1, 10, "AGE", true);

        break;
      }
      case ChangeValue: {
        int animalChoice = validateBounds(ChangeAge, 1, 3, "Change Value", true);
        int valueChoice = validateBounds(NEW, 0, 400000, "VALUE", true);
        break;
      }
      case Display: {
        Fluffy.display();
        Maa.display();
        Babe.display();
        break;
      }
      default: {
        break;
      }
    }
  }while (choice != 0);
  return 0;
}