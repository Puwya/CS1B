#include "../include/header.h"

void readInput(Node* &node, std::fstream &inFile) {
  std::string temp;

  std::getline(inFile, node->name);
  inFile.get(node->gender);
  inFile.ignore(1000, ' ');
  inFile >> node->age;
  inFile.ignore(1000, '\n');
  std::getline(inFile, temp);

  std::cout << "Adding : " << node->name << "\n";
}