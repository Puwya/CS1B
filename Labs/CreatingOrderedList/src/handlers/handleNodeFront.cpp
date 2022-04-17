#include "../../include/header.h"

void handleNodeFront(Node* &head, Node* &currNode, Node* &node) {
  node->prev = currNode;
  currNode->next = node;
  head = currNode;
}