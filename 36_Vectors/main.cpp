// This lesson is on vectors, which is the primary array class in C++
#include <iostream>
#include <vector>

void passByRef(const std::vector<int>& arr) { std::cout << arr[0] << '\n'; }

// Better to use a template to deduce type if need be
template <typename T>
void passByRefGeneric(const std::vector<T>& arr) {
  std::cout << arr[0] << '\n';
}

int main() {
  std::vector<int> empty{};  // Vector containing 0 int elements
  std::vector<int> primes{2, 3, 5, 7};
  std::cout << "The first prime is " << primes[0] << '\n';

  std::vector<int> data(10);  // Vector with 10 elements initialized to 0
  // You can make a vector const, but you can't make it constexpr. To do so,
  // you'll need an std::array. You can use the size member function to return
  // the length of a vector  (annoying, they know)
  std::cout << data.size() << '\n';
  // If you want to store this size in a variable with a signed length, you will
  // likely getting a narrowing conversion error, so be sure to static cast this
  int length = static_cast<int>(data.size());

  // While you can use the [] operator to access array elements, it does no
  // bound checking and can lead to undefined behavior. It may be smarter to use
  // the .at() member function, which does bounds checking. However, it is
  // slower, so it may be worth it to do bounds checking first and then just use
  // []. When indexing a vector with a constexpr signed int, you can avoid
  // narrowing conversions
  constexpr int index{3};
  std::cout << primes[index] << '\n';
  // When passing vectors, ensure you pass by ref to avoid expensive copies
  passByRef(primes);
}
