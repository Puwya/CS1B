#include "../include/header.h"

int main() {
   std::string outputFile;
   DVD *head = NULL;
   head = readInput();
   subString(head);
   MenuOptions option;
   std::fstream oFile;
   std::cout << "Which output file would you like to use(type d for default file)? ";
   std::getline(std::cin, outputFile);
   if (outputFile == "d")
      outputFile = "output.txt";
   oFile.open(outputFile, std::ios::out);

   do {
      dispMenu();
      option = switchValidation();
      switchOption(option, head, oFile);
   } while(option != 0);

   oFile.close();
   return 0;
}