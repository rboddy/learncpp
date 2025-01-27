// While you will usually use vectors in CPP, std::arrays are better for
// constexpr
#include <array>
#include <iostream>
#include <vector>

void passByRef(const std::array<int, 5>& arr) { std::cout << arr[0] << '\n'; }

int main() {
  std::array<int, 5> a{};  // An array of 5 ints
  std::vector<int> b(5);   // A vector of 5 ints
  // Above example is of the difference in array and vector declaration.

  // Arrays length must be set with an integer literal or a constexpr
  constexpr int len{8};
  std::array<int, len> c{};

  // Unless you need a constexpr container, you should prefer vector
  // You should pass arrays by const ref, but CTAD doesn't work for function
  // parameters, so you have to be explicit about type and size in the function
  // signature
  std::array arr{9, 7, 5, 3, 1};
  passByRef(arr);
}
