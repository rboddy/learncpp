#include <iostream>

int main() {
  // This lesson is about the comma operator
  int x = 2;
  int y = 1;

  std::cout << (++x, ++y) << '\n';
  // Run this and see what happens
  // for the most part, we can avoid the comma operator outside of for loops
  // The comma operator differs from the comma separator that is used for
  // function args
}
