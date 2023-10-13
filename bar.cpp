#include "mylib.hpp"

int bar(int i) { 
  int total = 0;
  for (auto value : mydata) {
    total += value * i;
  }
  return total;
}
