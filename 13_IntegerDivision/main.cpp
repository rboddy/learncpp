#include <iostream>

int main() {
  // this lesson is about integer division that produces a fraction
  // to do so, you need to use static_cast<> as follows
  constexpr int x = 7;
  constexpr int y = 4;

  std::cout << "int/int = " << x / y << '\n';
  std::cout << "double / int = " << static_cast<double>(x) / y << '\n';
  std::cout << "int / double = " << x / static_cast<double>(y) << '\n';
  std::cout << "double / dobule = "
            << static_cast<double>(x) / static_cast<double>(y) << '\n';

  // If you run this, you'll see that as long as one of the operands is a
  // double, it will create floating point division
}
