#include <iostream>

int add(int x, int y) { return x + y; }

double add(double x, double y) { return x + y; }

int main() {
  // This lesson is on function overloading, or defining two functions with the
  // same name and differring params.

  int a = 4;
  int b = 6;

  double c = 4.0;
  double d = 6.0;

  std::cout << add(a, b) << '\n';
  std::cout << add(c, d) << '\n';

  // You can also overload based on the number of parameters, not just the type
}
