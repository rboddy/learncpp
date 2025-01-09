#include <iostream>

int main() {
  // The following is an if statement. Note: Different syntax from an if block
  int x;
  std::cout << "Enter a number \n";
  std::cin >> x;
  if (x == 4)
    std::cout << "X is 4" << "\n";
  else
    std::cout << "X is not 4" << "\n";
}
