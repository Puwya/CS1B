#include "../../include/header.h"

void iterativeFactorial(long long &n) {
  long long nFactored = n;
  for (int i = 1; i < n; i++) {
    nFactored *= i;
  }
  n = nFactored;
}

long long recursiveFactorial(long long n) {
  if (n == 1) {
    return n;
  }
  return n * recursiveFactorial(n - 1);
}