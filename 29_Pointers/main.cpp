#include <iostream>

int main() {
  // This lesson is on pointers. Master these, and you master the universe. We
  // start by using ampersand to get the memory address of a variable:
  int x = 5;
  std::cout << &x << '\n';
  // this prints the address of the variable. Note that this is the same symbol
  // used by references, but it means something else in other contexts. To get
  // the value stored at an address, we use the dereference operator

  std::cout << *(&x) << '\n';
  // When the ampersand us unary and comes before a variable, it is the
  // dereference operator. When it comes attached to a type, it is a pointer to
  // that type, as shown here: Reference
  int& ref = x;
  // Pointer
  int* ptr = &x;

  // You can then dereference the pointer to access the value at that address
  std::cout << *ptr << '\n';
}
