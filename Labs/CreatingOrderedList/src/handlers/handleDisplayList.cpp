#include "../../include/header.h"

void handleDisplayList(Node* &head) {
  int count = 1;
  Node* node = head;

  if (!isListEmpty(node)) {displayHeader();}
  while (node != nullptr) {
    std::cout << std::right;
    std::cout << std::setw(4) << count;
    std::cout << std::left;
    std::cout << "    " << std::setw(30) << node->name << std::setw(7);
    std::cout << node->gender << std::setw(4) << node->age << "\n";
    ++count;
    node = node->next;
  }
}