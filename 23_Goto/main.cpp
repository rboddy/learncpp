#include <cmath>
#include <iostream>

int main() {
  // This lesson is about the goto statement, which is demonstrated here:

  double x = 0.0;
tryAgain:
  std::cout << "Enter a non-negative number: ";
  std::cin >> x;

  if (x < 0.0)
    goto tryAgain;

  std::cout << "The square root of " << x << " is " << std::sqrt(x) << '\n';

  // As you can see by running this, goto allows us to go backwards or forwards
  // in the execution path
}
