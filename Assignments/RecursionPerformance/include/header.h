#ifndef HEADER_H_
#define HEADER_H_
#include <iostream>
#include <iomanip>

enum MenuOption {
  Exit = 0,
  DisplayFactorial,
  DisplayFibonacci,
  FactorialPerformance,
  FibonacciPerformance
};
/*******************************************************************************
 * 
 ------------------------------------------------------------------------------- 
 * FUNCTION:
 * @param
 * RETURNS - 
 ******************************************************************************/
void printMenu();
void printHeading();
void iterativeFactorial(long long &n);
long long recursiveFactorial(long long n);
long long recursiveFib(long long series);
void iterativeFib(const int &series);
long long recursiveFibRaw(long long series);
void iterativeFibRaw(const int &series);
void iterativeFactorialRaw(long long &n);
long long recursiveFactorialRaw(long long n);

#endif // HEADER_H_