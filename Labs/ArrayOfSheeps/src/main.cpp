#include "../include/header.h"
#include "../include/Sheep.h"
#include "../include/SheepList.h"

/*******************************************************************************
 * AUTHOR      : Carlos Aguilera
 * STUDENT ID  : 1152562
 * LAB #       : 
 * CLASS       : CS1B
 * SECTION     : M-W
 * DUE DATE    : 
 ******************************************************************************/

/******************************************************************************
 * Title:
 * ----------------------------------------------------------------------------
 * PROGRAM:
 * 
 * ----------------------------------------------------------------------------
 ******************************************************************************/

int main() {
  SheepList sheeplist;
  Sheep sheep("Bobby", 9);
  sheeplist.addSheep(sheep);
  Sheep s("Carlos", 2);
  sheeplist.addSheep(s);
  Sheep sh("LOSSS", 5);
  sheeplist.addSheep(sh);
  Sheep she("Brownie", 7);
  sheeplist.addSheep(she);
  sheeplist.size();
  std::cout << sheeplist.find("Brownie", 7) << '\n';
  std::cout << sheeplist.find("Brownie", 4) << '\n';
  std::cout << sheeplist.find("Bwnie", 4) << '\n';

  std::cout << sheeplist << "\n";
  return 0;
}