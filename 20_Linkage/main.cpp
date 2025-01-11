#include <iostream>

static int gLocalIntMain = 8;

static int returnANumber() { return 5; }

int main() {
  // This lesson is about internal linkage. By default, global vars have
  // external linkage, meaning they are accessible in other files. By using the
  // static keyword, we ensure the global int declared above only has linkage in
  // this file. Further more, I can't access the identifier from other. You get
  // a compile error about scope if you try
  std::cout << gGlobalInt << '\n';
}

// You can also make functions static. This function will not be accessible
// anywhere else
