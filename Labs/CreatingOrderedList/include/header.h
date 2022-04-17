#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

struct Node {
 public:
  std::string name;
  char gender;
  int age;
  Node* next;
  Node* prev;
  // Constructors
  Node() : next(nullptr), prev(nullptr) {}
};

enum Menu {
  Exit = 0,
  CreateList,
  DisplayList,
  IsEmpty,
  SearchName,
  RemoveNode,
  ClearList
};

void createList(Node* &head, Node* &tail);
void readInput(Node* &node, std::fstream &inFile);
void handleNodeFront(Node* &head, Node* &currNode, Node* &node);
void handleNodeBack(Node* &tail, Node* &currNode, Node* &node);
void insertNode(Node* &node, Node* &currNode);
void handleNodePlacement(Node* &head, Node* &tail, Node* &node, Node* &currNode);
void displayHeader();
void handleDisplayList(Node* &head);
void displayMenu();
bool isListEmpty(Node* &head);
bool searchName(Node* &head, std::string searchKey);
void removeNode(Node* &head, Node* &tail, std::string searchKey);
void clearList(Node* &head, Node* &tail);
#endif // HEADER_H_