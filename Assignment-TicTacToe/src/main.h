#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <unistd.h>

const unsigned int ONE_SECOND {1000000};

void displayBoard(const char boardAr[][3]);
void displayHeader();
void displayInstructions();
void initBoard(char boardAr[][3]);
void setPlayerNames(std::string &playerX, std::string &playerO);
void getAndCheckInp(const std::string difficulty, const char menuChoice, char boardAr[][3], const char token, const std::string &playerX, const std::string &playerO);
void switchToken(char &token);
char checkWin(char boardAr[][3]);
void displayWinner(const char boardAr[][3], const char &whoWon, const std::string &playerX, const std::string &playerO);
bool checkAiInput(const std::string difficulty, char boardAr[][3], const char token);
bool easyAi(char boardAr[][3], const char token);
bool normalAi(char boardAr[][3], const char token);
void thinking(char boardAr[][3]);
bool winningNormalAi(char boardAr[][3], const char token);
bool winningHardAi(char boardAr[][3], const char token);
bool hardAi(char boardAr[][3], const char token);