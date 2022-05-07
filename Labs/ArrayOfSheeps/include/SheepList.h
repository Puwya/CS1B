#ifndef SHEEP_LIST_H_
#define SHEEP_LIST_H_
#include "header.h"
#include "Sheep.h"

const int ARRAY_SIZE = 50;

class SheepList {
 protected:
  int sheepCount;
 private:
  Sheep sheepArray[ARRAY_SIZE];
  friend std::ostream &operator<<(std::ostream &os, const SheepList &sheepList);
  void listOneSheep(const int &index) const;
 public:
  SheepList() : sheepCount(0) {}
  ~SheepList() {}

  void addSheep(const Sheep &newSheep);
  void clear();

  void size() const;
  bool find(const std::string name, const unsigned int &age) const;
  void firstSheep() const;
};
#endif // SHEEP_LIST_H_