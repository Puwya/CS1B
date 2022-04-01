#include "../include/header.h"
#include "../include/studentNode.h"

void formatData(StudentNode** head)
{
    StudentNode* node = *head;

    while(node != nullptr)
    {
        if (node->name[node->name.size() - 1] == ' ')
        {
            node->name.substr(0, node->name.size() - 2);
        }

        if (node->major[node->major.size() - 1] == ' ')
        {
            node->major.substr(0, node->major.size() - 2);
        }
        node = node->nextNode;
    }
}