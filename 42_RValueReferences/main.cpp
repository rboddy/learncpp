// This lesson is on r value references, and how to use them

#include <iostream>

int main() {
  int x = 5;
  int& lref = x;   // Lvalue reference
  int&& rref = 5;  // RValue reference uses double ampersand

  std::cout << rref << '\n';

  // Almost all the same advantages of l value references apply, so I'm not
  // going to dive any deeper, but I'll revisit this if need be
}
