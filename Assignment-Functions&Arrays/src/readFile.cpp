#include "main.hpp"

void readFile(std::string inputFileName, size_t sizeofArray, std::string arrayofNames[], int arrayofIDs[], double arrayofBalances[])
{
	std::fstream inFile;
	inFile.open(inputFileName, std::ios::in);
	for(size_t i {0}; i < sizeofArray; i++)
	{
		if(i != 0)
			inFile.ignore(10,'\n');
		std::getline(inFile, arrayofNames[i]);
		inFile >> arrayofIDs[i] >> arrayofBalances[i];
	}
	inFile.close();
}