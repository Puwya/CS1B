#include "../../include/header.h"

void placeNodeFront(Node* &head, Node* &currNode, Node* &node) {
  node->prev = currNode;
  currNode->next = node;
  head = currNode;
}