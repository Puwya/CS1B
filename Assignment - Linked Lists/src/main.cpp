#include "../include/header.h"

int main() {
   DVD *head = NULL;
   head = readInput();
   subString(head);
   MenuOptions option;
   std::fstream oFile;
   oFile.open("output.txt", std::ios::out);

   do {
      system("clear");
      dispMenu();
      option = switchValidation();
      switchOption(option, head, oFile);
      usleep(1300000);
   } while(option != 0);

   oFile.close();
   return 0;
}