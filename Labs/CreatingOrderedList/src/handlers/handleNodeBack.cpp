#include "../../include/header.h"

void handleNodeBack(Node* &tail, Node* &currNode, Node* &node) {
  tail = currNode;
  node->next = tail;
  tail->prev = node;
}