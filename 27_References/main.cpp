#include <iostream>

int main() {
  // this lesson is on references, which are very important
  int x = 5;    // This is a regular int
  int &ref = x; // ref is an lvalue reference that can be used as an alias for x

  std::cout << x << '\n';
  std::cout << ref << '\n';

  // these are different from pointers. Pointers return the memory address of a
  // variable. References are simple aliases. Changing either the reference or
  // the variable will effect the other, as shown here:
  x = 6;
  std::cout << x << '\n';
  std::cout << ref << '\n';

  // All references must be initialized, and they cannot be reseated (moved to
  // another object) once initialized. They also follow the same scoping rules
  // as variables. We can also create an lvalue reference to const using the
  // const keyword:

  const int y = 7;
  const int &constRef = y;

  // Even better yet, we can create a constant reference to a non-constant
  // variable:

  int z = 10;
  const int &constZRef = z;
}
