// This lesson is on vectors, which is the primary array class in C++
#include <iostream>
#include <vector>

int main() {
  std::vector<int> empty{};  // Vector containing 0 int elements
  std::vector<int> primes{2, 3, 5, 7};
  std::cout << "The first prime is " << primes[0] << '\n';

  std::vector<int> data(10);  // Vector with 10 elements initialized to 0
  // You can make a vector const, but you can't make it constexpr. To do so,
  // you'll need an std::array
}
