#include "../include/Livestock.h"

void initPigs(Livestock &livestock) {
  livestock.m_PigLivestock.push_back(Pig("Carlos", 9, kCorkscrew));
  livestock.m_PigLivestock.push_back(Pig("Loss", 4, kCurlLeft));
  livestock.m_PigLivestock.push_back(Pig("Conser", 8, kCurlUp));
}