#include "../../include/header.h"

void findNodePlacement(Node* &head, Node* &tail, Node* &node, Node* &currNode) {
  bool placed = false;
  node = head;
  while (!placed) {
    if (currNode->name.compare(node->name) < 0) {
      placed = true;
      if (node->prev == nullptr) {
        placeNodeFrontofList(head, currNode, node);
      }else {
        insertNode(node, currNode);
      }
    }else if (node->next == nullptr) {
      placeNodeBackofList(tail, currNode, node);
      placed = true;
    }else {
      node = node->next;
    }
  }
}