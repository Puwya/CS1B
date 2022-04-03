#include "../include/header.h"
#include "../include/studentNode.h"

int main() 
{
	heading();
	StudentNode* head = nullptr;
    std::map<std::string, StudentNode> studentData;
	readData(&head, studentData);//a ptr to ptr for accesses the ptr in main

	search(head, studentData);
	pop(&head, studentData);
	average(&head);
	dispList(head);

	return 0;
}