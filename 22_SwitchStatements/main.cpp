#include <iostream>

int main() {
  // This lesson is about switch statments, which we all know and love

  std::cout << "Enter 1, 3, or 5: \n";

  int x;

  std::cin >> x;

  switch (x) {
  case 1:
    std::cout << "One\n";
    break;
  case 3:
    std::cout << "Three\n";
    break;
  case 5:
    std::cout << "Five\n";
    break;
  default:
    std::cout << "That isn't an option\n";
    break;
  }

  // One thing to remember is that in CPP, switches only evaluate integrals
}
