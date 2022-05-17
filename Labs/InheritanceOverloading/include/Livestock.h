#ifndef LIVESTOCK_H_
#define LIVESTOCK_H_
#include "Sheep.h"
#include "Pig.h"

class Livestock {
 friend void initPigs(Livestock &livestock);
 friend void initSheeps(Livestock &livestock);
 public:
  Livestock() {}
  ~Livestock() {}

  void print() const;
 private:
  std::vector<Pig> m_PigLivestock;
  std::vector<Sheep> m_SheepLivestock;
};

#endif // LIVESTOCK_H_