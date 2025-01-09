#include <iostream>

int main() {
  // this is a single line comment
  std::cout << "Hello World!";
  /* And this is
  a multi line
  comment */

  // We can mark unused variables to be ignored by the compiler as of C++17
  [[maybe_unused]] char zed{'z'};

  // The following is a variable
  // int x = 0; // This is copy initialization
  int x{0}; // This is direct list initialiation
  return x;
}
