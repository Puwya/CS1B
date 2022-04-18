#include "../../include/header.h"

bool searchName(Node* &head, std::string searchKey) {
  Node* node = head;
  if (isListEmpty(node)) {
    std::cout << "Can't search an empty list\n";
    return false;
  }
  std::cout << "\nSearching for " << searchKey << "...\n\n";
  while (node != nullptr) {
    if (node->name == searchKey) {
      std::cout << std::left;
      std::cout << std::setw(10) << "Name:" << node->name << "\n";
      std::cout << std::setw(10) << "Gender:" << node->gender << "\n";
      std::cout << std::setw(10) << "Age:" << node->age << "\n\n";
      std::cout << std::right;
      return true;
    }
    node = node->next;
  }
  return false;
}