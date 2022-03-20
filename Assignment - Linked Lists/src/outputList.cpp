#include "../include/header.h"

void outputList(DVD *head, std::fstream &oFile) {
   oFile << "All Movies Found:\n";
   multiMovieHeader(oFile);
   DVD *node = head;
   int index = 1;
   oFile << std::left;
   while (node->nextNode != NULL) {
      oFile << "   " << std::setw(6) << index  << std::setw(48);
      oFile << node->title;
      oFile << std::setw(8) << node->year << std::setw(5) << node->rating << std::setw(18) << node->genre << std::setw(18) << node->altGenre << std::setw(20);
      oFile << node->leadActor;
      oFile << node->subActor << "\n";
      node = node->nextNode;
      if (node->title.size() > 47) {
         node->title = node->title.substr(0, 44);
         node->title += "...";
      }else
         node->title = node->title.substr(0, node->title.size() - 1);
      if (node->leadActor.size() > 18) {
         node->leadActor = node->leadActor.substr(0, 15);
         node->leadActor += "...";
      }else
         node->leadActor = node->leadActor.substr(0, node->leadActor.size() - 1);
      if (node->subActor.size() > 18) {
         node->subActor = node->subActor.substr(0, 15);
         node->subActor += "...";
      }else
         node->subActor = node->subActor.substr(0, node->subActor.size() - 1);
      ++index;
   }
   oFile << std::right;
}