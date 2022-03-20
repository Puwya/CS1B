#include "../include/header.h"

DVD *readInput() {
   DVD *head = NULL;
   DVD *node = new DVD;
   std::fstream inFile;
   std::string temp;

   inFile.open("../build/AS5 - BigInFile.txt", std::ios::in);

   while (inFile) {
      std::getline(inFile, node -> title);
      std::getline(inFile, node -> leadActor);
      std::getline(inFile, node -> subActor);
      std::getline(inFile, node -> genre);
      std::getline(inFile, node -> altGenre);
      inFile >> node -> year >> node -> rating;
      inFile.ignore(10000, '\n');
      std::getline(inFile, node -> synopsis);
      std::getline(inFile, temp);
      
      node -> nextNode = head;
      head = node;
      node = new DVD;
   }
   inFile.close();
   delete node;
   return head;
}