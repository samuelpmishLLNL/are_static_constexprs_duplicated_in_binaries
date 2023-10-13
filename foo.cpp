#include "mylib.hpp"

int foo(int i) { 
  int total = 0;
  for (auto value : mydata) {
    total += i * (value - 1);
  }
  return total;
}
