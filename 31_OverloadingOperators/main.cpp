// Because we can't return a string from an enumerator by default, we have a
// case where overloading the output operator would be handy. This is an example
// of doing that
#include <iostream>
#include <ostream>
#include <string_view>

enum Color {
  black,
  red,
  blue,
};

// We define a constexpr function that returns a string_view pointing to a
// C-style string literal. We then switch the input that is an enumerator to
// return the actual string of the input

constexpr std::string_view getColorName(Color color) {
  switch (color) {
    case black:
      return "black";
    case red:
      return "red";
    case blue:
      return "blue";
    default:
      return "???";
  }
}

// Now, we can teach the output operator how to print a color. As a note,
// ostream is the type of cout, cerr, etc.
std::ostream& operator<<(std::ostream& out, Color color) {
  out << getColorName(color);
  return out;
}

int main() {
  Color shirt = blue;
  std::cout << "Your shirt is " << shirt << '\n';

  // Now when you run this, instead of returning the integral of the enumerator,
  // it will return the string
}
