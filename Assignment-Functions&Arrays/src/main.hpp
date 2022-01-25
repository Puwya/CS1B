#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

void heading();
void readFile(std::string inputFileName, size_t sizeofArray, std::string arrayofNames[], int arrayofIDs[], double arrayofBalances[]);
int largestBalanceIndex(size_t sizeofArray, double arrayofBalances[]);
int smallestBalanceIndex(size_t sizeofArray, double arrayofBalances[]);
double sumofBalances(size_t sizeofArray, double arrayofBalances[]);
