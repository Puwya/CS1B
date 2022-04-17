#include "../include/header.h"

int main() {
  Node* head = nullptr;
  Node* tail = nullptr;
  createList(head, tail);
  Node* node = head;

  while (node->next != nullptr) {
    std::cout << node->name << "\n";
    node = node->next;
  }
  return 0;
}