#include "../include/SheepLinkedList.h"

SheepLinkedList::~SheepLinkedList() {
  Sheep* node = head;
  if (node != nullptr) {
    while (node != nullptr) {
      head = node->next;
      delete node;
      node = head;
    }
  }
  sheepCount = 0;
}

void SheepLinkedList::addSheep(const std::string &name, const unsigned int &age) {
  Sheep* node = tail;
  if (node != nullptr) {
    node = new Sheep(name, age);
    tail->next = node;
    tail = node;
  } else {
    head = new Sheep(name, age);
    tail = head;
  }
  ++sheepCount;
}

void SheepLinkedList::clear() {
  Sheep* node = head;
  if (node == nullptr) {
    std::cout << "The list is empty!\n";
    return;
  }
  while (node != nullptr) {
    head = node->next;
    delete node;
    node = head;
  }
  sheepCount = 0;
}

void SheepLinkedList::listOneSheep(const Sheep* node) const {
  std::cout << "NAME           AGE\n";
  std::cout << "-------------- ---\n";
  std::cout << std::left;
  std::cout << std::setw(16) << node->m_Name;
  std::cout << node->m_Age << '\n';
  std::cout << std::right;
}

bool SheepLinkedList::find(const std::string name, const unsigned int &age) const {
  Sheep* node = head;
  bool found = false;
  if (node != nullptr) {
    while (!found && node != nullptr) {
      if (node->m_Name == name && node->m_Age == age) {
        listOneSheep(node);
        return true;
      }
      node = node->next;
    }
  } else {
    std::cout << "There are no sheep to be found!\n";
  }
  return false;
}

void SheepLinkedList::firstSheep() const {
  Sheep* node = head;
  if (node != nullptr) {
    listOneSheep(node);
  } else {
    std::cout << "Nobody is in front - the list is empty!\n";
  }
}

std::ostream &operator<<(std::ostream &os, const SheepLinkedList &sheepList) {
  Sheep* node = sheepList.head;
  if (node != nullptr) {
    os << "NAME           AGE\n";
    os << "-------------- ---\n";
    std::cout << std::left;
    while (node != nullptr) {
      std::cout << std::setw(16) << node->getName();
      std::cout << node->getAge();
      std::cout << ((node->next == nullptr) ? ' ' : '\n');
      node = node->next;
    }
    std::cout << std::right;
  } else {
    std::cout << "The list is empty!";
  }
  return os;
}