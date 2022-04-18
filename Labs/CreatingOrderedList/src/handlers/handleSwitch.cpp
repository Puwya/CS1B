#include "../../include/header.h"

void handleSwitch(Node* &head, Node* &tail) {
  Menu choice = Exit;
  do {
    displayMenu();
    validateInput(choice);
    switch (choice) {
      case Exit: {
        break;
      }
      case CreateList: {
        if (head == nullptr) {
          createList(head, tail);

        }else {
          std::cout << "List is already made\n";
        }
        break;
      }
      case DisplayList: {
        if (isListEmpty(head)) {
          std::cout << "Yes, the list is empty.\n";
        }else {
          handleDisplayList(head);
        }
        break;
      }
      case IsEmpty: {
        if (isListEmpty(head)) {
          std::cout << "Yes, the list is empty.\n";
        }else {
          std::cout << "No, The list is NOT empty.\n";
        }
        break;
      }
      case SearchName: {
        std::string searchKey;
        if (!isListEmpty(head)) {
          std::cout << "Who would you like to search for? ";
          std::cin.ignore(1000, '\n');
          std::getline(std::cin, searchKey);
          if (!searchName(head, searchKey)) {
            std::cout << "I'm sorry, \"" << searchKey << "\" was NOT found!\n";
          }
        }else {
          std::cout << "Can't search an empty list\n";
        }
        break;
      }
      case RemoveNode: {
        std::string searchKey;
        if (!isListEmpty(head)) {
          std::cout << "Who would you like to remove for? ";
          std::cin.ignore(1000, '\n');
          std::getline(std::cin, searchKey);
          removeNode(head, tail, searchKey);
        }else {
          std::cout << "Can't remove an empty list\n";
        }
        break;
      }
      case ClearList: {
        clearList(head, tail);
        break;
      }
      default: {
        std::string number;
        number = std::to_string(choice);
        std::cout << std::left;
        std::cout << "**** The number ";
        std::cout << number << " is an invalid entry";
        std::cout << std::right;
        std::cout << std::setw(11 - number.size())
                  << "****\n";
        std::cout << "**** Please input a number between 0 and 6 ****\n";
        break;
      }
    }
  } while (choice != Exit);
  return;
}