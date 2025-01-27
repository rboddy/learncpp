// this file will intentionally cause a stack overflow. Run at your own risk
#include <iostream>

int main() {
  int stack[10000000];
  std::cout << "hi" << stack[0];  // we'll use stack[0] here so the compiler
                                  // won't optimize the array away

  return 0;
}
