#include <cstdint>
#include <iostream>

int main() {
  // This file is meant to show all the different kind of integers that we can
  // use
  short s;      // Short that uses a minimum of 16 bits
  int i;        // Integer that uses a minimum of 16 bits
  long l;       // Long that uses a minimum of 32 bits
  long long ll; // Long that uses a minimum of 64 bits

  // You can also use the signed prefix, but you really don't need to, it's
  // redundant
  signed int si;

  // Assigning a value to an integer that is outside of the range of numbers
  // that can fit inside it's minimum bits creates an overflow. Calculations
  // that lead to an overflow introduce integer overflow. Both result in
  // undefined behavior
  int x{2'147'483'647};
  x = x + 1;
  std::cout << x << "\n";

  // You can also use unsigned integers, though you probably shouldn't
  unsigned int ui;

  // C++ has fixed width variables to avoid any wasted memory or confusion
  std::int8_t fwsi;  // Fixed width, signed, 8 bit int
  std::uint8_t fwui; // Fixed width, unsigned, 8 bit int
  // You can use the above syntax with 8, 16, 32, and 64 bit integers
  // A downside of this is that on most systems 8 bit fixed width ints behave
  // like a char. So at a minimum, you'll want to use 16 bit ints
  // Also, some CPUs are faster at processing different bit length integers,
  // like 64 over 32 to get around this, we can use fast and least integral
  // types
  std::int_fast32_t fastInt;   // Will use the fastest available int
  std::int_least32_t leastInt; // Will use the smallest avaialble int

  // LearnCPP.com lists not using fast or least width integrals as best practice
}
