#pragma once
#include <iostream>
#include <iomanip>
#include <unistd.h>

void heading();
void handleInput(size_t &numOfSheeps, size_t &numOfChocolateBars);
void handleCalc(const size_t numOfSheeps, const size_t numOfChocolateBars);
void handleOutput(const size_t &remainder, size_t &i);
void handleOutput(const size_t &remainder);