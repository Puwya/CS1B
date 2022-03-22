#include "../include/header.h"

void switchOption(const MenuOptions &option, DVD* head, std::fstream &oFile) {
   int index = 0;
   switch (option) {
      case OutputEntireList:
         std::cout << "\nCOMPLETE MOVIE LISTING!\n\n";
         oFile << "All Movies Found:\n";
         outputList(head, oFile, index);
         oFile << "\n";
         break;
      case TitleSearch:
         titleSearch(head, oFile);
         break;
      case GenreSearch:
         genreSearch(head, oFile, index);
         break;
      case ActorSearch:
         actorSearch(head, oFile, index);
         break;
      case YearSearch:
         yearSearch(head, oFile, index);
         break;
      case RatingSearch:
         ratingSearch(head, oFile, index);
         break;
      case Exit:
         std::cout << "\nThank You!!\n";
         break;
      default:
         std::cout << "Enter A Valid Option\n";
         break;
   }

}

void titleSearch(DVD* head, std::fstream &oFile) {
   std::string strKey;
   std::cout << "Which Title are you looking for? ";
   std::cin.ignore(1000, '\n');
   std::getline(std::cin, strKey);
   titleSearchLogic(head, oFile, strKey);
}

void genreSearch(DVD* head, std::fstream &oFile, int &index) {
   std::string strKey;
   std::cout << "\nWhich Genre are you looking for? ";
   std::cin.ignore(1000, '\n');
   std::getline(std::cin, strKey);
   std::cout << "\nSearching for the genre " << strKey << "\n";
   searchKeyLogic(head, oFile, strKey, index);
   if (index == 0)
      std::cout << "Sorry, no movies for the genre " << strKey << " were found.\n";
   else {
      std::cout << "Found " << index << " movies for the genre " << strKey << "!\n";
      oFile << "\n";
   }
}

void actorSearch(DVD* head, std::fstream &oFile, int &index) {
   std::string strKey;
   std::cout << "\nWhich Actor are you looking for? ";
   std::cin.ignore(1000, '\n');
   std::getline(std::cin, strKey);
   std::cout << "\nSearching for the actor " << strKey << "\n";
   searchKeyLogic(head, oFile, strKey, index);
   if (index == 0)
      std::cout << "Sorry, no movies for the actor " << strKey << " were found.\n";
   else {
      std::cout << "Found " << index << " movies for the actor " << strKey << "!\n";
      oFile << "\n";
   }
}

void yearSearch(DVD* head, std::fstream &oFile, int &index) {
   int keyInt;
   yearValidation(keyInt);
   std::cout << "\nSearching for the year " << keyInt << "\n";
   searchKeyLogic(head, oFile, keyInt, index);
   if (index == 0)
      std::cout << "Sorry, no movies for the year " << keyInt << " were found.\n";
   else {
      std::cout << "Found " << index << " movies for the year " << keyInt << "!\n";
      oFile << "\n";
   }
}

void ratingSearch(DVD* head, std::fstream &oFile, int &index) {
   int keyInt;
   ratingValidation(keyInt);
   std::cout << "\nSearching for the rating " << keyInt << "\n";
   searchKeyLogic(head, oFile, keyInt, index);
   if (index == 0)
      std::cout << "Sorry, no movies for the rating " << keyInt << " were found.\n";
   else {
      std::cout << "Found " << index << " movies for the rating " << keyInt << "!\n";
      oFile << "\n";
   }
}