#ifndef _HEADER_H_
#define _HEADER_H_
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include "studentNode.h"

void readData(StudentNode** head);
void heading();
void formatData(StudentNode** head);
void dispList(StudentNode* &head);
void pop(StudentNode** head);
void search(StudentNode* &head);
void average(StudentNode** head);

#endif