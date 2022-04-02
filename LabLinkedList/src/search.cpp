#include "../include/header.h"
#include "../include/studentNode.h"

void search(StudentNode* &head)
{
    std::string key;
    StudentNode* node = head;
    bool found = false;

    std::cout << "Enter name of student to search: ";
    std::getline(std::cin, key);

    while (node != nullptr && !found)
    {
        if (node->name == key)
        {
            std::cout << std::left;
            std::cout << "\nFOUND\n--------";
            std::cout << std::setw(9) << "\nName:" << node->name << "\n";
            std::cout << std::setw(8) << "Age:" << node->age << "\n";
            std::cout << std::setw(8) << "Major:" << node->major << "\n";
            std::cout << std::setw(8) << "GPA:" << node->gpa << "\n\n";
            std::cout << std::right;

            found = true;
        }else
            node = node->nextNode;
    }
    if (!found)
        std::cout << "Student was not found!\n";
}