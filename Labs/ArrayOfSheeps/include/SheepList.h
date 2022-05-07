#ifndef FARM_LIST_H_
#define FARM_LIST_H_
#include "Sheep.h"

const int ARRAY_SIZE = 50;

class SheepList {
 private:
  Sheep sheepArray[ARRAY_SIZE];
  int sheepCount;
 public:
  SheepList();
  ~SheepList();

  void addSheep(const Sheep &newSheep);
  void clear();

  void size() const;
  bool find() const;
  void list() const;
  void firstSheep() const;
};
#endif // FARM_LIST_H_