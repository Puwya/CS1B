#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

/*******************************************************************************
 * heading
 ------------------------------------------------------------------------------- 
 * FUNCTION: this function prints out heading
 * @param
 * RETURNS - void
 ******************************************************************************/
void heading();

/*******************************************************************************
 * gcd
 ------------------------------------------------------------------------------- 
 * FUNCTION: This is a recursive function that takes in two values and finds the
 * greatest common divisor for them
 * @param m value being divided
 * @param n value to divide by
 * RETURNS - int
 ******************************************************************************/
int gcd(int m, int n);

#endif // HEADER_H_

/*******************************************************************************
 * AUTHOR      : Carlos Aguilera
 * STUDENT ID  : 1152562
 * LAB #11     : Recursion GCD
 * CLASS       : CS1B
 * SECTION     : M-W
 * DUE DATE    : 04.25.22
 ******************************************************************************/

/******************************************************************************
 * GCD Recursion
 * ----------------------------------------------------------------------------
 * PROGRAM: This program is a GCD calculator using recursion its fairly simple
 * so ill let you go through the code
 * ----------------------------------------------------------------------------
 ******************************************************************************/

#include "../include/header.h"

int main() {
  std::fstream oFile;
  int m, n;
  oFile.open("OutputFile.txt", std::ios::out);

  heading();
  for (int i = 0; i < 4; i++) {
    std::cout << std::left;
    std::cout << std::setw(26) << "Enter the first integer:";
    std::cin >> m;
    std::cout << std::setw(26) << "Enter the second integer:";
    std::cin >> n;
    std::cout << "\n";
    std::cout << std::right;
    oFile << "The GCD for " << m << " & " << n << " = " << gcd(m, n) << "\n";
  }
  std::cout << "Thank you for using my GCD calculator!\n";
  oFile.close();
  return 0;
}

#include "../include/header.h"

void heading() {

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
	const int LAB_NUM       = 11;
	const char LAB_NAME[]   = "Recursion GCD";

	std::cout << std::left;
	std::cout << "****************************************************\n";
	std::cout << "*   PROGRAMMED BY : " << PROGRAMMER << std::endl;
	std::cout << "*   " << std::setw(14) <<"CLASS" << ": " << CLASS << std::endl;
	std::cout << "*   " << std::setw(14) <<"SECTION" << ": " << SECTION << std::endl;
	std::cout << "*   LAB #" << std::setw(9) << LAB_NUM << ": " << LAB_NAME << std::endl;
	std::cout << "****************************************************\n\n";
	std::cout << std::right;
}