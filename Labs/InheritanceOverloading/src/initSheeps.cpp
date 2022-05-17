#include "../include/Livestock.h"

void initSheeps(Livestock &livestock) {
  livestock.m_SheepLivestock.push_back(Sheep("Carlos", 3, kCarpet, kBlack));
  livestock.m_SheepLivestock.push_back(Sheep("Loss", 7, kLong, kWhite));
  livestock.m_SheepLivestock.push_back(Sheep("Conser", 2, kFine, kBlack));
}
