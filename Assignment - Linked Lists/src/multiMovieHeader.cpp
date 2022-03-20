#include "../include/header.h"

void multiMovieHeader(std::fstream &oFile) {
   oFile << std::left;
   oFile << "MOVIE #"  << std::setw(50) << "  TITLE" << "YEAR " << "RATING  "  << std::setw(18) << "GENRE" << std::setw(18) << "ALT GENRE" << std::setw(20) << "LEAD ACTOR" << "SUPPORTING ACTOR\n";
   oFile << "------- ------------------------------------------------ ---- ------ ----------------- ----------------- ------------------- -------------------\n";
   oFile << std::right;
}