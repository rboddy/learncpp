#include <iostream>

static int gGlobalInt = 8;

void other() {
  // We are declaring a static global variable in this file. It won't be
  // accessible in main
  std::cout << gGlobalInt << '\n';
}
