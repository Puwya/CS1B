#include "../../include/header.h"

void placeNodeBack(Node* &tail, Node* &currNode, Node* &node) {
  tail = currNode;
  node->next = tail;
  tail->prev = node;
}