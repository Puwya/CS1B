#include "main.hpp"

void readFile(std::string inputFileName, size_t sizeofArray, std::string arrayofNames[], int arrayofIDs[], double arrayofBalances[])
{
	std::string fname {}, lname {};
	std::fstream inFile;
	inFile.open(inputFileName, std::ios::in);
	for(size_t i {0}; i < sizeofArray; i++)
	{
		inFile >> fname >> lname;
		arrayofNames[i] = fname + ' ' + lname;
		inFile >> arrayofIDs[i] >> arrayofBalances[i];
	}
	inFile.close();
}