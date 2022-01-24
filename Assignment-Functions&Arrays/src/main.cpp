/*****************************************************************************
 * AUTHOR      : Carlos Aguilera
 * STUDENT ID  : 1152562
 * LAB #       : 
 * CLASS       : CS1B
 * SECTION     : M-W
 * DUE DATE    : 
 ****************************************************************************/

#include "main.hpp"

/****************************************************************************
 * Title:
 * --------------------------------------------------------------------------
 * This program will output the class heading
 * --------------------------------------------------------------------------
 * INPUT:
 *
 * OUTPUT:
 ***************************************************************************/

int main() {
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
	const int LAB_NUM       = 1;
	const char LAB_NAME[]   = "Functions & Arrays";

	char selection {};
	std::string inputFileName {}, outputFileName {}, temp {};
	size_t sizeofArray {0};


	/************************************************************************
	 * OUTPUT - Class Heading
	 ***********************************************************************/
	std::cout << std::left;
	std::cout << "****************************************************\n";
	std::cout << "*   PROGRAMMED BY : " << PROGRAMMER << std::endl;
	std::cout << "*   " << std::setw(14) <<"CLASS" << ": " << CLASS << std::endl;
	std::cout << "*   " << std::setw(14) <<"SECTION" << ": " << SECTION << std::endl;
	std::cout << "*   LAB #" << std::setw(9) << LAB_NUM << ": " << LAB_NAME << std::endl;
	std::cout << "****************************************************\n\n";
	std::cout << std::right;
	/************************************************************************/

	std::cout << "What input file would you like to use? ";
	std::cin >> inputFileName;
	std::cout << "What output file would you like to use? ";
	std::cin >> outputFileName;

	std::fstream inFile;
	inFile.open(inputFileName, std::ios::in);
	while(getline(inFile, temp))
		++sizeofArray;
	sizeofArray /= 2;
	inFile.close();

	std::string arrayofNames[sizeofArray];
	int arrayofIDs[sizeofArray];
	double arrayofBalances[sizeofArray];
	readFile(inputFileName, sizeofArray, arrayofNames, arrayofIDs, arrayofBalances);


	do
	{
		displayMenu();
		std::cout << "Enter an option (0 to exit): ";
		std::cin >> selection;

		switch (selection)
		{
			case '1': {
				break;
			}
			case '2': {
				break;
			}
			case '3': {
				break;
			}
			case '4': {
				break;
			}
			case '5': {
				break;
			}
			case '0': {
				break;
			}
			default: {
				std::cout << "Invalid input!\n";
				break;
			}
		}
	} while (selection != '0');
	
}