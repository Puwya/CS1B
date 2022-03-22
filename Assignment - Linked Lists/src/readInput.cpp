#include "../include/header.h"

DVD *readInput() {
   DVD *head = NULL;
   DVD *node = new DVD;
   std::fstream inFile;
   std::string temp;
   std::string inputFile;
   std::cout << "Which input file would you like to use(type d for default file)? ";
   std::getline(std::cin, inputFile);
   if (inputFile != "d")
      inputFile = "../build/" + inputFile;
   else
      inputFile = "../build/AS5-BigInFile.txt";

   inFile.open(inputFile, std::ios::in);

   while (!inFile.eof()) {
      std::getline(inFile, node -> title);
      std::getline(inFile, node -> leadActor);
      std::getline(inFile, node -> subActor);
      std::getline(inFile, node -> genre);
      std::getline(inFile, node -> altGenre);
      inFile >> node -> year >> node -> rating;
      inFile.ignore(10000, '\n');
      std::getline(inFile, node -> synopsis);
      std::getline(inFile, temp);
      
      node->nextNode = head;
      head = node;
      node = new DVD;
   }
   inFile.close();
   delete node;
   return head;
}