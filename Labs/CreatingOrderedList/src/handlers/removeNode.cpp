#include "../../include/header.h"

void removeNode(Node* &head, Node* &tail, std::string searchKey) {
  Node* node = head;
  std::cout << "\nSearching for " << searchKey << "...\n\n";
  while (node != nullptr) {
    if (node->name == searchKey) {
      if (node->prev == nullptr) {
        head = node->next;
        node->next->prev = nullptr;
      }else if (node->next == nullptr) {
        tail = node->prev;
        node->prev->next = nullptr;
      }else {
        node->prev->next = node->next;
        node->next->prev = node->prev;
      }
      std::cout << "Removing " << node->name << "\n\n";
      delete node;
      return;
    }
    node = node->next;
  }
  std::cout << "I'm sorry, \"" << searchKey << "\" was NOT found!\n";
  return;
}