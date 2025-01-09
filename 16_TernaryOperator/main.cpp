#include <iostream>

int main() {
  // I wasn't going to do a whole example on ternaries, but since everyone loves
  // them so much, here it is
  int x = 7;
  int y = 4;

  int max = ((x > y) ? x : y);

  std::cout << max << '\n';
  // the handy thing about the ternary operator is that if-else has block
  // scoping, so your value is destroyed at the end for a var assignment. You
  // can avoid this with ternaries
  // Note: Your second and third operands should be the same type
}
