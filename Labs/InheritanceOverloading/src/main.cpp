#include "../include/main.h"
#include <map>

int main() {
  Livestock livestock;
  initPigs(livestock);
  initSheeps(livestock);
  livestock.print();
  return 0;
}