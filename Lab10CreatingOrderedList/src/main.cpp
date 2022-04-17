#include "../include/header.h"

int main() {
  Node* head = nullptr;
  Node* tail = nullptr;
  createList(head, tail);
  Node* node = head;

  do {
    node = node->next;
    std::cout << node->name << "\n";
  }while (node->next != nullptr);
  return 0;
}