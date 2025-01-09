#include <bitset>
#include <iostream>

int main() {
  // This lesson is about bit manipulation. Most fundamental types require a
  // minimum of 8 bits (a byte). However, with booleans, that can be a waste. So
  // CPP provides ways manipulate bits in memory with bit flags. Since we're not
  // using list assignment like learncpp, this example may vary a little
  std::bitset<8> myBitset;
  std::cout << myBitset << '\n';
  // The above will print 8 bits, all set to 0. But what if we want to change
  // one to on at position 3.
  myBitset.set(3);

  // Now the bitset will be 00001000
  std::cout << myBitset << '\n';

  // Remember that bitsets are indexed right to left and start at 0. So setting
  // 7 does the following
  myBitset.set(7);
  std::cout << myBitset << '\n';

  // But what if we don't want the first (7th) bit to be 1. We can use reset
  myBitset.reset(7);
  std::cout << myBitset << '\n';

  // What if you just want to flip the bit? Well, ,that's pretty simple too
  myBitset.flip(4);
  std::cout << myBitset << '\n';
}
