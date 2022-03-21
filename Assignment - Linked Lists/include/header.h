#ifndef HEADER_H_
#define HEADER_H_
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <unistd.h>

struct DVD {
   std::string title;
   std::string leadActor;
   std::string subActor;
   std::string genre;
   std::string altGenre;
   int year;
   int rating;
   std::string synopsis;
   DVD *nextNode;
};
enum MenuOptions { Exit = 0, OutputEntireList, TitleSearch, GenreSearch, ActorSearch, YearSearch, RatingSearch};
DVD *readInput();
void dispMenu();
MenuOptions switchValidation();
void searchKeyLogic(DVD *head, std::fstream &oFile, const int &key, int &index);
void searchKeyLogic(DVD *head, std::fstream &oFile, const std::string &key, int &index);
void outputList(DVD *head, std::fstream &oFile, int &index);
void multiMoviePrint(std::fstream &oFile, DVD* node, int &index);
void switchOption(const MenuOptions &option, DVD* head, std::fstream &oFile);
void subString(DVD *head);

#endif