#include "../include/header.h"
#include "../include/studentNode.h"

void formatData(StudentNode** head)
{
    StudentNode* node = *head;

    while(node != nullptr)
    {
        if (node->name[node->name.size() - 1] == ' ')
        {
            node->name = node->name.substr(0, node->name.size() - 1);
        }

        if (node->major[node->major.size() - 1] == ' ')
        {
            node->major = node->major.substr(0, node->major.size() - 1);
        }
        node = node->nextNode;
    }
}