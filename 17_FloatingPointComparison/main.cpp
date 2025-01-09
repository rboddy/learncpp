#include <algorithm>
#include <cmath>
#include <iostream>

bool approxEqualRel(double a, double b, double relEps) {
  return (std::abs(a - b) <= (std::max(std::abs(a), std::abs(b)) * relEps));
}

int main() {
  // This lesson 6.7 has an example of using a relative epsilon value to compare
  // floating point numbers
  double x = 0.1;
  double y = 0.1;

  if (approxEqualRel(x, y, 0.001))
    std::cout << "x and y are equal\n";

  // As you can see by running this, despite the fact that x and y are different
  // in memory, they are close enough when compared with a relative epsilon in
  // mind that it returns true
}
