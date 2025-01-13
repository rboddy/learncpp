#include <iostream>

int generateID() {
  static int s_itemID = 0;
  return s_itemID++;
}

int main() {
  // This lesson is on static local variables. Static operates differently when
  // not used in the global namespace. It moves the local variable from auto
  // duration to static duration. While it's not accessible out of scope, it is
  // kept in memory. This can be handy for generators like the one here:
  int iterator = 0;
  while (iterator <= 10) {
    std::cout << generateID() << '\n';
    iterator++;
  }
}
