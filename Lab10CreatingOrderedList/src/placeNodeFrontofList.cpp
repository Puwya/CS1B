#include "../include/header.h"

void placeNodeFrontofList(Node* &head, Node* &currNode, Node* &node) {
  node->prev = currNode;
  currNode->next = node;
  currNode->prev = nullptr;
  head = currNode;
}