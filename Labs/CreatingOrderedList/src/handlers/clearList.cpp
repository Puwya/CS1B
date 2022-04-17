#include "../../include/header.h"

void clearList(Node* &head, Node* &tail) {
  Node* node = head;
  if (isListEmpty(node)) {
    std::cout << "The list has been cleared!\n";
    return;
  }
  std::cout << "CLEARING LIST:\n";
  while (node != nullptr) {
    std::cout << "Removing " << node->name << "!\n";
    head->prev = nullptr;
    head = node->next;
    delete node;
    node = head;
  }
  tail = nullptr;
}