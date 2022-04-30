#ifndef HEADER_H_
#define HEADER_H_
#include <iostream>
#include <iomanip>
#include <cstdlib> 
#include <string> 
#include <chrono> 
#include <ctime> 
using namespace std;

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

/*******************************************************************************
 * 
 ------------------------------------------------------------------------------- 
 * FUNCTION:
 * @param
 * RETURNS - 
 ******************************************************************************/
void printHeading();

/*******************************************************************************
 * 
 ------------------------------------------------------------------------------- 
 * FUNCTION:
 * @param
 * RETURNS - 
 ******************************************************************************/
void iterativeFactorial(long long &n);

/*******************************************************************************
 * 
 ------------------------------------------------------------------------------- 
 * FUNCTION:
 * @param
 * RETURNS - 
 ******************************************************************************/
long long recursiveFactorial(long long n);

/*******************************************************************************
 * 
 ------------------------------------------------------------------------------- 
 * FUNCTION:
 * @param
 * RETURNS - 
 ******************************************************************************/
long long recursiveFib(long long series);

/*******************************************************************************
 * 
 ------------------------------------------------------------------------------- 
 * FUNCTION:
 * @param
 * RETURNS - 
 ******************************************************************************/
void iterativeFib(const int &series);

/*******************************************************************************
 * 
 ------------------------------------------------------------------------------- 
 * FUNCTION:
 * @param
 * RETURNS - 
 ******************************************************************************/
long long recursiveFibRaw(long long series);

/*******************************************************************************
 * 
 ------------------------------------------------------------------------------- 
 * FUNCTION:
 * @param
 * RETURNS - 
 ******************************************************************************/
void iterativeFibRaw(const int &series);

/*******************************************************************************
 * 
 ------------------------------------------------------------------------------- 
 * FUNCTION:
 * @param
 * RETURNS - 
 ******************************************************************************/
void iterativeFactorialRaw(long long &n);

/*******************************************************************************
 * 
 ------------------------------------------------------------------------------- 
 * FUNCTION:
 * @param
 * RETURNS - 
 ******************************************************************************/
long long recursiveFactorialRaw(long long n);

/*******************************************************************************
 * 
 ------------------------------------------------------------------------------- 
 * FUNCTION:
 * @param
 * RETURNS - 
 ******************************************************************************/
void factorialPerformance(long long n);

/*******************************************************************************
 * 
 ------------------------------------------------------------------------------- 
 * FUNCTION:
 * @param
 * RETURNS - 
 ******************************************************************************/
void fibonacciPerformance(long long n);

/*******************************************************************************
 * 
 ------------------------------------------------------------------------------- 
 * FUNCTION:
 * @param
 * RETURNS - 
 ******************************************************************************/
void switchLoop();

/*******************************************************************************
 * 
 ------------------------------------------------------------------------------- 
 * FUNCTION:
 * @param
 * RETURNS - 
 ******************************************************************************/
void validation(long long &n);

#endif // HEADER_H_

#include "../include/header.h"
/*******************************************************************************
 * AUTHOR      : Carlos Aguilera
 * STUDENT ID  : 1152562
 * LAB #4      : Recursion Performance
 * CLASS       : CS1B
 * SECTION     : M-W
 * DUE DATE    : 05.03.22
 ******************************************************************************/

/******************************************************************************
 * Title:
 * ----------------------------------------------------------------------------
 * PROGRAM:
 * 
 * ----------------------------------------------------------------------------
 ******************************************************************************/

int main() {
  printHeading();
  switchLoop();
  return 0;
}

#include "../../include/header.h"

istream &operator>>(istream &is, MenuOption &choice) {
  int temp;
  bool validated = false;
  do {
    try {
      printMenu();
      is >> temp;
      if (is.fail()) {
        is.clear();
        is.ignore(1000, '\n');
        throw true;
      }
      validated = true;
    }catch(bool invalid) {
      cout << "Please enter a NUMBER! TRY AGAIN\n";
    }
  }while (!validated);
  choice = MenuOption(temp);
  return is;
}

void switchLoop() {
  MenuOption choice = Exit;
  long long n = 0;
  long long result;
  do {
    // PROCESSING: prints menu and validates operator overloading
    cin >> choice;
    // PROCESSING: switch statement on choice
    switch (choice) {
      case Exit: {
        break;
      }
      case DisplayFactorial: {
        cout << "\nEnter number to get the Factorial of: ";
        validation(n);
        cout << "[ ";
        result = recursiveFactorial(n);
        cout << "]\n";
        cout << "Factorial of " << n << " is: " << result << "\n\n";
        break;
      }
      case DisplayFibonacci: {
        cout << "\nEnter number for series of Fibonacci: ";
        validation(n);
        cout << "[ ";
        result = recursiveFib(n);
        cout << "]\n";
        cout << "Fibonacci series of " << n << " is: " << result << "\n\n";
        break;
      }
      case FactorialPerformance: {
        cout << "\nEnter number for comparsion of Factorial: ";
        validation(n);
        factorialPerformance(n);
        break;
      }
      case FibonacciPerformance: {
        cout << "\nEnter number for comparison of Fibonacci: ";
        validation(n);
        fibonacciPerformance(n);
        break;
      }
      default: {
        cout << "Enter a number between 0 and 4!\n";
        break;
      }
    }
  }while (choice != Exit);
  
}

#include "../../include/header.h"

void validation(long long &n) {
  bool validated = false;
  do {
    try {
      cin >> n;
      if (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        throw true;
      }else if (n < 0) {
        cout << "Enter positive number!\n";
        cout << "Try Again: ";
        continue;
      }
      validated = true;
      return;
    }catch(bool invalid) {
      cout << "Please enter a NUMBER!\n";
      cout << "Try Again: ";
    }
  }while (!validated);
}

#include "../../include/header.h"

void iterativeFactorial(long long &n) {
  long long nFactored = n;
  cout << "[";
  for (int i = 1; i < n; i++) {
    nFactored *= i;
    cout << nFactored << ((i + 1 < n) ? ", " : "");
  }
  cout << "]\n";
}

long long recursiveFactorial(long long n) {
  if (n == 1) {
    return n;
  }
  n *= recursiveFactorial(n - 1);
  cout << n << " ";
  return n;
}

void iterativeFactorialRaw(long long &n) {
  long long nFactorial = n;
  for (int i = 1; i < n; i++) {
    nFactorial *= i;
  }
}

long long recursiveFactorialRaw(long long n) {
  if (n == 1) {
    return n;
  }
  return n * recursiveFactorialRaw(n - 1);
}

#include "../../include/header.h"

long long recursiveFib(long long series) {
  if (series <= 1) {
    return series;
  }
  long long n = recursiveFib(series - 1) + recursiveFib(series - 2);
  cout << n << " ";
  return n;
}

void iterativeFib(const int &series) {
  int curr = 0, prev = 1, next = 0;
  cout << "[";
  for (int i = 0; i <= series; i++) {
    cout << curr << ((i + 1 <= series) ? "," : "");
    next = curr + prev;
    curr = prev;
    prev = next;
  }
  cout << "]\n";
}

long long recursiveFibRaw(long long series) {
  if (series <= 1) {
    return series;
  }
  return recursiveFibRaw(series - 1) + recursiveFibRaw(series - 2);
}

void iterativeFibRaw(const int &series) {
  int curr = 0, prev = 1, next = 0;
  for (int i = 0; i <= series; i++) {
    next = curr + prev;
    curr = prev;
    prev = next;
  }
}

#include "../../include/header.h"

void factorialPerformance(long long n) {
  high_resolution_clock::time_point start = high_resolution_clock::now(); 
  for (int i = 0; i < 500000000; i++)
    recursiveFactorialRaw(n);
  high_resolution_clock::time_point end = high_resolution_clock::now(); 
  duration<double> recursiveTime =  end - start;

  start = high_resolution_clock::now(); 
  for (int i = 0; i < 500000000; i++)
    iterativeFactorialRaw(n);
  end = high_resolution_clock::now(); 
  duration<double> iterationTime = end - start;
 
  cout << "Factorial Recursive in seconds: " << recursiveTime.count() << "\n";
  cout << "Factorial Iterative in seconds: " << iterationTime.count() << "\n\n";
}

#include "../../include/header.h"

void fibonacciPerformance(long long n) {
  high_resolution_clock::time_point start = high_resolution_clock::now(); 
  for (int i = 0; i < 1000000; i++)
    recursiveFibRaw(n);
  high_resolution_clock::time_point end = high_resolution_clock::now(); 
  duration<double> recursiveTime =  end - start;

  start = high_resolution_clock::now(); 
  for (int i = 0; i < 1000000; i++)
    iterativeFibRaw(n);
  end = high_resolution_clock::now(); 
  duration<double> iterationTime = end - start;
 
  cout << "Fibonacci Recursive in seconds: " << recursiveTime.count() << "\n";
  cout << "Fibonacci Iterative in seconds: " << iterationTime.count() << "\n\n";
}

#include "../../include/header.h"

void printMenu() {
  cout << "MENU OPTIONS\n\n";
  cout << "1 - Calculate and Display Factorial of a Number\n";
  cout << "2 - Calculate and Display Fibonacci Series of a Number\n";
  cout << "3 - Compare Performance for Factorial Implementations\n";
  cout << "4 - Compare Performance for Fibonacci Series Implementations\n";
  cout << "0 - EXIT\n";
  cout << "Enter an option (0 to exit): ";
  return;
}

#include "../../include/header.h"

void printHeading() {
	/***********************************************************************
	 * CONSTANTS
	 * ---------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 * ---------------------------------------------------------------------
	 * PROGRAMMER : Programmer's Name
	 * CLASS      : Student's Course
	 * SECTION    : Class Days and Times
	 * LAB_NUM    : Lab Number (specific to this lab)
	 * LAB_NAME   : Title of the Lab
	 **********************************************************************/
	const char PROGRAMMER[] = "Carlos Aguilera";
	const char CLASS[]      = "CS1B";
	const char SECTION[]    = "MW: 7:30p - 9:50p";
	const int  LAB_NUM      = 4;
	const char LAB_NAME[]   = "Recursion Performance";

	cout << left;
	cout << "****************************************************\n";
	cout << "*   PROGRAMMED BY : " << PROGRAMMER << endl;
	cout << "*   " << setw(14) <<"CLASS" << ": " << CLASS << endl;
	cout << "*   " << setw(14) <<"SECTION" << ": " << SECTION << endl;
	cout << "*   LAB #" << setw(9) << LAB_NUM << ": " << LAB_NAME << endl;
	cout << "****************************************************\n\n";
	cout << right;
}