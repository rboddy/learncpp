#include <iostream>

template <typename T> T max(T x, T y) { return (x < y) ? y : x; }

// We can also use multiple template parameters
template <typename T, typename U> auto min(T x, U y) { return (x > y) ? y : x; }

// In CPP 20 and higher, you can use the auto keyword as shorthand. I am not
// using CPP 20, so I will comment this out
// auto max(auto x, auto y) { return (x < y) ? y : x; }

int main() {
  // This lesson is on function templates, which leverage generic types
  int a = 5;
  int b = 7;

  std::cout << "The greater of " << a << " and " << b << "is " << max<int>(a, b)
            << '\n';

  // Note that we explicitly give the max function the type used above with the
  // carrot signs. This isn't necessary if the function arguments match, but it
  // is probably good practive to be explicit
}
