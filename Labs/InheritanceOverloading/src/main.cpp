#include "../include/Sheep.h"
#include "../include/Livestock.h"

void initPigs(Livestock &livestock) {
  livestock.m_PigLivestock.push_back(Pig("Carlos", 9, kCorkscrew));
  livestock.m_PigLivestock.push_back(Pig("Loss", 4, kCorkscrew));
  livestock.m_PigLivestock.push_back(Pig("Conser", 8, kCorkscrew));
}

void initSheeps(Livestock &livestock) {
  livestock.m_SheepLivestock.push_back(Sheep("Carlos", 3, kCarpet, kBlack));
  livestock.m_SheepLivestock.push_back(Sheep("Loss", 7, kLong, kWhite));
  livestock.m_SheepLivestock.push_back(Sheep("Conser", 2, kFine, kBlack));
}

int main() {
  Livestock livestock;
  initPigs(livestock);
  initSheeps(livestock);
  livestock.print();
  return 0;
}