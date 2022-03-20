#include "../include/header.h"

int main() {
   DVD *head = NULL;
   head = readInput();
   subString(head);
   MenuOptions option;
   std::fstream oFile;
   oFile.open("output.txt", std::ios::out);

   do {
      dispMenu();

      option = switchValidation();
      switch (option)
      {
         case OutputEntireList:
            outputList(head, oFile);
            break;
         case TitleSearch:
            break;
         case GenreSearch:
            break;
         case ActorSearch:
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
   } while(option != 0);

   oFile.close();
   return 0;
}