// A range based for loop is simply a foreach, will I will demonstrate here
#include <iostream>
#include <vector>

int main() {
  std::vector primes{1, 2, 3, 5, 7};

  for (auto num : primes) {
    std::cout << num << ' ';
  }
  // I added the block scoping above. Unblocked code feels unnatural to me
  // without at least a colon
  std::cout << '\n';
}
