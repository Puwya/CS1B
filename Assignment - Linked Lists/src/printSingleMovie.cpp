#include "../include/header.h"

void printSingleMovie(DVD* node, std::fstream &oFile) {
   std::string line;
   std::string word;
   const int maxLineLength = 75;
   oFile << std::left;
   oFile << "***************************************************************************\n";
   oFile << "Title: " << node->title << "\n";
   oFile << "---------------------------------------------------------------------------\n";
   oFile << "Year: " << node->year << "        " << "Rating: " << node->rating << "\n";
   oFile << "---------------------------------------------------------------------------\n";
   oFile << std::setw(18) << "Leading Actor:" << std::setw(25) << node->leadActor << "Genre 1: " << node->genre << "\n";
   oFile << "Supporting Actor: " << std::setw(25) << node->subActor << "Genre 2: " << node->altGenre << "\n";
   oFile << "---------------------------------------------------------------------------\n";
   oFile << "PLOT:\n";
   for (int i = 0; i < node->synopsis.length(); i++) {
      if (node->synopsis.at(i) != ' ')
         word.push_back(node->synopsis.at(i));
      else if (word.length() + line.length() > maxLineLength) {
         oFile << line << "\n";
         line.clear();
         line += word;
         word.clear();
      }else {
         line += word + ' ';
         word.clear();
      }
      if (i + 1 == node->synopsis.length()) {
         line += word;
         oFile << line << "\n";
      }
   }
   oFile << "***************************************************************************\n\n";
   oFile << std::right;
}