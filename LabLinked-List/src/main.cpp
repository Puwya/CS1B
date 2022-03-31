#include "../include/header.h"
#include "../include/studentNode.h"

int main() {
	StudentNode* head = nullptr;
	readData(&head);
	StudentNode* node = head;
	while (node != nullptr) {
		std::cout <<  node->name << "\n";
		std::cout << node->age << "\n";
		std::cout << node->major << "\n";
		std::cout << node->gpa << "\n\n";

		node = node->nextNode;
	}
	return 0;
}