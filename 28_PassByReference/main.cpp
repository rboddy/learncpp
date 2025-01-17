#include <iostream>
#include <string>

void printValue(std::string &y) { std::cout << y << '\n'; }

void printConstValue(const std::string &y) { std::cout << y << '\n'; }

int main() {
  // This lesson is about passing by reference. As we learned earlier, passing
  // by value can lead to expensive copies of class types like std::string.
  // However, if we pass by reference, meaning we swap our function parameters
  // to references, then there is no longer a need to copy the object. You can
  // see an example of this here.

  std::string x = "Hello World!";
  printValue(x);

  // However, once you pass by a non-const reference, functions can modify the
  // orginal object. This is probably not something that's always desired, so
  // that's where passing by const reference is handy. This is shown here:

  std::string y = "Hello Constant World!";
  printConstValue(y);

  // Generally, you should pass fundamental types by value, and class types by
  // reference, preferring passing by constant reference whenever possible
}
