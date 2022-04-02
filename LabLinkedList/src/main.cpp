#include "../include/header.h"
#include "../include/studentNode.h"

int main() 
{
	heading();
	StudentNode* head = nullptr;
	readData(&head);//a ptr to ptr for accesses the ptr in main
	formatData(&head);
	search(head);

	return 0;
}