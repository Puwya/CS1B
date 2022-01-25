#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

void heading();
void readFile(std::string inputFileName, size_t sizeofArray, std::string arrayofNames[], int arrayofIDs[], double arrayofBalances[]);
int balanceIndex(char selection, size_t sizeofArray, double arrayofBalances[]);
double sumofBalances(size_t sizeofArray, double arrayofBalances[]);
