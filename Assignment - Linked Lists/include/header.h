#ifndef HEADER_H_
#define HEADER_H_
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

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
void outputList(DVD *head, std::fstream &oFile);
void multiMovieHeader(std::fstream &oFile);
void subString(DVD *head);

#endif