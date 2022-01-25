/*****************************************************************************
 * AUTHOR      : Carlos Aguilera
 * STUDENT ID  : 1152562
 * LAB #       : 1
 * CLASS       : CS1B
 * SECTION     : M-W
 * DUE DATE    : 02.02.22
 ****************************************************************************/

#include "main.hpp"

/****************************************************************************
 * Title: Functions & Arrays
 * --------------------------------------------------------------------------
 * This program will output the class heading
 * --------------------------------------------------------------------------
 * INPUT:
 *
 * OUTPUT:
 ***************************************************************************/

int main()
{
	heading();

	std::string inputFileName {}, outputFileName {}, temp {};
	std::cout << "What input file would you like to use? ";
	std::cin >> inputFileName; //reads input for what file to read from
	std::cout << "What output file would you like to use? ";
	std::cin >> outputFileName; // reads input for what file to write to

	size_t sizeofArray {0};
	std::fstream inFile;
	inFile.open(inputFileName, std::ios::in); //file is in read only mode
	while(getline(inFile, temp))//stores line in temporary string
		++sizeofArray;// a loop that gets the number of lines in the file
	sizeofArray /= 2;// works for the type of formatting that the input file has if format changes then bugs could occur
	inFile.close();

	std::string arrayofNames[sizeofArray];
	int arrayofIDs[sizeofArray];
	double arrayofBalances[sizeofArray];

	readFile(inputFileName, sizeofArray, arrayofNames, arrayofIDs, arrayofBalances);//reads file and sets values in the arrays

	char selection {};
	do
	{
		std::cout << "\nMenu Options\n\n"
				<< "1 - Find the larger balance\n"
				<< "2 - Find the smaller balance\n"
				<< "3 - Obtain the sum of all balances\n"
				<< "4 - Obtain the average of all balances\n"
				<< "5 - Find Person\n"
				<< "0 - Exit\n"
		        << "Enter an option (0 to exit): ";
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