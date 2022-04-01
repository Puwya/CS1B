#include "../include/header.h"
#include "../include/studentNode.h"

int main() 
{
	heading();
	StudentNode* head = nullptr;
	readData(&head);//a ptr to ptr for accesses the ptr in main
	formatData(&head);

	StudentNode* node = head;
	while (node != nullptr)
	{
		std::cout << node->name << "\n";
		std::cout << "------------------\n";
		std::cout << node->age << "\n";
		std::cout << node->major << "\n";
		std::cout << node->gpa << "\n\n";
		node = node->nextNode;
	}

	return 0;
}