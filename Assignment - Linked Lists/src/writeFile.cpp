#include "../include/header.h"

void writeFile(DVD *head) {

   std::fstream oFile;
   oFile.open("oFile.txt", std::ios::out);
   DVD *node = head;
   while(node != NULL) {
      oFile << node -> title;
      oFile << node -> leadActor;
      oFile << node -> subActor;
      oFile << node -> genre;
      oFile << node -> altGenre;
      oFile << node -> year << "\n";
      oFile << node -> rating << "\n";
      oFile << node -> synopsis;
      oFile << "\n\n";

      node = node->nextNode;
   }
   oFile.close();
}