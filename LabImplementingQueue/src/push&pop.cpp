#include "../include/header.h"

void enqueue(Person** head, Person** tail, int &size)
{
    Person* node = nullptr;

    node = new Person;
    std::cout << std::left;
    std::cout << "\nWho would you like to add?\n\n";

    std::cout << std::setw(14) << "Enter Name:";
    std::getline(std::cin, node->name);

    std::cout << "Enter Gender: ";
    std::cin.get(node->gender);
    std::cin.ignore(100,'\n');

    std::cout << std::setw(14) << "Enter Age:";
    std::cin >> node->age;
    std::cin.ignore(100,'\n');
    std::cout << std::right;


    if (*head != nullptr) {
        (*tail)->nextNode = node;
        *tail = node;
        (*tail)->nextNode = nullptr;
    }else {
        *tail = node;
        (*tail)->nextNode = nullptr;
        *head = *tail;
    }
    ++size;
}

void pop(Person** head, int &size)
{
    Person* node = nullptr;
    node = *head;

    if (*head != nullptr)
    {
        std::cout << std::left;
        std::cout << "\nDEQUEUEING\n";
        std::cout << std::setw(8) << "Name:" << node->name << "\n";
        std::cout << std::setw(8) << "Gender:" << node->gender << "\n";
        std::cout << std::setw(8) << "Age:" << node->age << "\n";
        std::cout << std::right;

        *head = node->nextNode;
        delete node;
        --size;
    }else
        std::cout << "Can't dequeue from an empty stack!\n";
}