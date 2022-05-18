#include "../../include/main.h"

unsigned int caseValidation(const MenuType &menuType, const int &MIN, const int &MAX);
void changeAnimalAge(Livestock &livestock);

void switchLoop(Livestock &livestock, MenuOptions &choice, MenuType &menuType) {
  choice = MenuOptions(caseValidation(menuType, 0, ((menuType == kMain) ? 4 : 1)));
  switch (choice) {
    case kExit: {
      break;
    }
    case kInitializeAnimals: {
      livestock.clear();
      initPigs(livestock);
      initSheeps(livestock);
      menuType = kMain;
      break;
    }
    case kReInitializeSheep: {
      livestock.clearSheep();
      initSheeps(livestock);
      break;
    }
    case kReInitializePig: {
      livestock.clearPig();
      initPigs(livestock);
      break;
    }
    case kChangeAge: {
      changeAnimalAge(livestock);
      break;
    }
    case kDisplayAnimals: {
      livestock.print();
      break;
    }
    default: {
      break;
    }
  }
}

unsigned int caseValidation(const MenuType &menuType, const int &MIN, const int &MAX) {
  bool validated = false;
  unsigned int choice;
  do {
    try {
      menu(menuType);
      std::cin >> choice;
      if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        throw true;
      }
      if (choice < MIN || choice > MAX)
        throw true;
      validated = true;
    } catch(...) {
      std::cout << "ERROR:\n";
    }
  } while (!validated);
  if (menuType == kMain && choice != 0)
    ++choice;
  return choice;
}

void changeAnimalAge(Livestock &livestock) {
  AnimalMenu choice = AnimalMenu(caseValidation(kAnimal, 0, 2));
  if (choice == kAnimalExit) {
    return;
  } else if (choice == kSheep) {
    for (int i = 0; i < livestock.m_SheepLivestock.size(); ++i) {
      std::cout << i+1 << ". " << livestock.m_SheepLivestock[i].getName() << "\n";
    }
    unsigned int index = caseValidation(kChoosingAnimal, 0, livestock.m_SheepLivestock.size()) - 1;
    livestock.m_SheepLivestock[index].setAge(caseValidation(kChoosingAge, 0, 10));
  } else if (choice == kPig) {
    for (int i = 0; i < livestock.m_PigLivestock.size(); ++i) {
      std::cout << i+1 << ". " << livestock.m_PigLivestock[i].getName() << "\n";
    }
    unsigned int index = caseValidation(kChoosingAnimal, 0, livestock.m_PigLivestock.size()) - 1;
    livestock.m_PigLivestock[index].setAge(caseValidation(kChoosingAge, 0, 10));
  }
}