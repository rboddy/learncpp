#include <cmath>
#include <iostream>

int main() {
  // There is no exponent operator in C++. Instead use the pow function

  double x = std::pow(3.0, 4.0);

  std::cout << "Three to the fourth power is " << x << '\n';
}
