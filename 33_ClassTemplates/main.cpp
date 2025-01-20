// This lesson is on using class templates to make class types more flexible /
// reusable
#include <iostream>

template <typename T>
struct Pair {
  T first{};
  T second{};
};

int main() {
  Pair<int> p1{5, 6};
  std::cout << p1.first << ' ' << p1.second << '\n';

  Pair<double> p2{1.2, 2.4};
  std::cout << p2.first << ' ' << p2.second << '\n';
}
