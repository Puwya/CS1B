#include "../include/SheepList.h"

void SheepList::addSheep(const Sheep &newSheep) {
  if (sheepCount <= ARRAY_SIZE) {
    sheepArray[sheepCount].setName(newSheep.getName());
    sheepArray[sheepCount].setAge(newSheep.getAge());
    ++sheepCount;
  }else {
    std::cout << "List is full sorry!\n";
  }
}
void SheepList::clear() {
  for (int i = 0; i < sheepCount; ++i) {
    sheepArray[i].setName("");
    sheepArray[i].setAge(0);
  }
  sheepCount = 0;
}

void SheepList::size() const { 
  std::cout << "There are " << sheepCount << " sheep in the list!\n"; 
}
bool SheepList::find(const std::string name, const unsigned int &age) const {
  bool found = false;
  int i = 0;
  while (!found && i < sheepCount) {
    if (sheepArray[i].getName() == name && sheepArray[i].getAge() == age) {
      listOneSheep(i);
      return true;
    }
    ++i;
  }
  return false;
}
void SheepList::listOneSheep(const int &index) const {
  std::cout << "NAME           AGE\n";
  std::cout << "-------------- ---\n";
  std::cout << std::left;
  std::cout << std::setw(16) << sheepArray[index].getName();
  std::cout << sheepArray[index].getAge() << '\n';
  std::cout << std::right;
}
void SheepList::firstSheep() const {
  listOneSheep(0);
  std::cout << "Is at the front of the list.\n";
}

std::ostream &operator<<(std::ostream &os, const SheepList &sheepList) {
  if (sheepList.sheepCount > 0) {
    os << "NAME           AGE\n";
    os << "-------------- ---\n";
    std::cout << std::left;
    for (int i = 0; i < sheepList.sheepCount; ++i) {
      std::cout << std::setw(16) << sheepList.sheepArray[i].getName();
      std::cout << sheepList.sheepArray[i].getAge();
      std::cout << ((i + 1 < sheepList.sheepCount) ? '\n' : ' ');
    }
    std::cout << std::right;
  } else {
    std::cout << "The list is empty!";
  }
  return os;
}