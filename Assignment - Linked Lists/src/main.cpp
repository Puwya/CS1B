#include "../include/header.h"


int main() {
   DVD *head = NULL;
   head = readInput();
   subString(head);
   MenuOptions option;
   std::fstream oFile;
   oFile.open("output.txt", std::ios::out);
   std::string strKey {};
   int keyInt {};
   int index;

   do {
      index = 0;
      system("clear");
      dispMenu();

      option = switchValidation();
      switch (option)
      {
         case OutputEntireList:
            std::cout << "\nListing all MOVIES!!\n\n";
            oFile << "All Movies Found:\n";
            outputList(head, oFile, index);
            oFile << "\n";
            break;
         case TitleSearch:
            break;
         case GenreSearch:
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
            break;
         case ActorSearch:
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
            break;
         case YearSearch:
            break;
         case RatingSearch:
            break;
         case Exit:
            break;
         default:
            std::cout << "invalid\n";
            break;
      }
      usleep(1000000);
   } while(option != 0);

   oFile.close();
   return 0;
}