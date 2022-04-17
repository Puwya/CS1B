#include "../../include/header.h"

void createList(Node* &head, Node* &tail) {
  // Creating input file
  std::fstream inFile;
  inFile.open("inFile.txt", std::ios::in);

  if (!inFile.eof()) {
    Node* node = new Node;
    head = tail = node;
    readInput(node, inFile); 
    
    Node* currNode = nullptr;
    while (!inFile.eof()) {
      currNode = new Node;
      readInput(currNode, inFile);
      findNodePlacement(head, tail, node, currNode);
    }
  }
  inFile.close();
}