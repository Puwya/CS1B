#include "../../include/header.h"

void readInput(Node* &node, std::fstream &inFile) {
  std::string temp;

  std::getline(inFile, node->name);
  if (node->name[node->name.size() - 1] == ' ') {
    node->name = node->name.substr(0, node->name.find_last_of(' '));
  }
  inFile.get(node->gender);
  inFile.ignore(1000, ' ');
  inFile >> node->age;
  inFile.ignore(1000, '\n');
  std::getline(inFile, temp);

  std::cout << "Adding : " << node->name << "\n";
}