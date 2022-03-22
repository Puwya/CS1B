#include "../include/header.h"

void multiMoviePrint(std::fstream &oFile, DVD* node, int &index) {
   ++index;
   oFile << std::left;
   if (index <= 10) {
      if(index == 1) {
         oFile << "MOVIE #"  << std::setw(50) << "  TITLE" << "YEAR " << "RATING  "  << std::setw(18) << "GENRE" << std::setw(18) << "ALT GENRE" << std::setw(20) << "LEAD ACTOR" << "SUPPORTING ACTOR\n";
         oFile << "------- ------------------------------------------------ ---- ------ ----------------- ----------------- ------------------- -------------------\n";
      }
      oFile << "   " << std::setw(6) << index  << std::setw(48);

      if (node->title.size() > 47) {
         oFile << (node->title.substr(0, 44)) + "...";
      }else
         oFile << node->title;

      oFile << std::setw(8) << node->year << std::setw(5) << node->rating << std::setw(18) << node->genre << std::setw(18) << node->altGenre << std::setw(20);

      if (node->leadActor.size() > 18) {
         oFile << (node->leadActor.substr(0, 15)) + "...";
      }else
         oFile << node->leadActor;

      if (node->subActor.size() > 18) {
         oFile << (node->subActor.substr(0, 15)) + "...";
      }else
         oFile << node->subActor;
      oFile << "\n";
      if (index == 10)
         oFile << "...\n";
      oFile << "\n";
   }

   oFile << std::right;
}