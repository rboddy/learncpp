#include <ios>
#include <iostream>

int main() {
  // This lesson is on booleans. They are pretty straight forward like in other
  // langs, But you should be aware that they are stored in memory as 0 and 1
  // since they are integral types
  std::cout << true << "\n";
  std::cout << false << "\n";

  // If you'd like to change this behavior, you can use a modifier from iostream
  std::cout << std::boolalpha;
  std::cout << true << "\n";
  std::cout << false << "\n";
}
