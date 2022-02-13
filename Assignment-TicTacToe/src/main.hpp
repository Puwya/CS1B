#pragma once
#include <iostream>
#include <iomanip>
#include <string>

void displayBoard(const char boardAr[][3]);
void displayHeader();
void displayInstructions();
void initBoard(char boardAr[][3]);
void getPlayers(std::string &playerX, std::string &playerO);