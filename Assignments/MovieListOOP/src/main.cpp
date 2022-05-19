#include "../include/DVDnode.h"
#include "../include/MovieList.h"
#include "../include/StackList.h"
#include <iostream>

int main() {
  StackList list;
  if (list.IsEmpty())
    std::cout << "is empty\n";
  std::cout << "Stack count: " << list.Size();
  list.Push(DVDNode());
  list.Push(DVDNode());
  list.Push(DVDNode());
  std::cout << "Stack count: " << list.Size();
  list.Push(DVDNode());
  list.Push(DVDNode());
  list.Push(DVDNode());
  if (list.IsEmpty())
    std::cout << "is empty\n";
  std::cout << "Stack count: " << list.Size();
  return 0;
}