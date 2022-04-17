#include "../../include/header.h"

void insertNode(Node* &node, Node* &currNode) {
  node->prev->next = currNode;
  currNode->prev = node->prev;
  node->prev = currNode;
  currNode->next = node;
}