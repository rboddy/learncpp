#include <iostream>

int main() {
  // this lesson is about chars
  char firstInitial = 'R';
  std::cout << "Your first initial is " << firstInitial << '\n';
  // Chars are always 1 byte in size, unlike integrals, even though they are
  // stored as numbers
  // There are also escape characters like newline, tab, and special characters,
  // but apparently there is also an alert? Let's try that
  std::cout << "This will beep \a";
  // Note, this weirdly won't work if you run it from the terminal inside neovim
}
