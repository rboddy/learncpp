#include <iostream>

void print(double x) { std::cout << x << "\n"; }

void printInt(int x) { std::cout << x << "\n"; }

int main() {
  // This lesson is about implicit and explicit type conversion
  // We've already seen implicit before
  int x = 5;
  print(x);
  // The above works, even though we pass an int where the compiler is expected
  // a double This is called implicit type conversion The value is not being
  // manipulated. It is being used to create a new double However, int to double
  // works. Double to int will too, but it will drop the decimal Which isn't
  // ideal, but if we wante to do it anyways and not generate warnings We would
  // use explicit type conversion with a static cast
  printInt(static_cast<int>(5.5));
  // The above will print 5 after dropping the decimal, and the compiler won't
  // complain
  // This comes in handy for converting signed and unsigned integers to each
  // other
}
