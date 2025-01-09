#include <iostream>

int add(int x, int y) {
  // Using cerr to log errors to the console
  std::cerr << "Entered the add function \n";
  return x + y;
}

int main() {
  // we are going to learn about debugging in this lesson
  int z = add(5, 6);
  std::cout << "We added 5 and 6 to get: " << z << std::endl;
}
