#include <iomanip>
#include <iostream>

int main() {
  // Floating point are decimals. The following are their types
  float f = 5.5f;
  double d = 5.55555;
  long double ld = 5.55555;

  // It's recommended to avoid using long doubles because they can intro
  // implementation behavior Also, there are commonly rounding errors on floats
  // when they lose precision For example:
  float x = 0.1f;
  std::cout << std::setprecision(17);
  std::cout << x << "\n";

  // The above should print 0.1. But binary stores 0.1 as an infinite number. So
  // if you show more than 6-9 significant digits, you'll see a loss in
  // precision
}
