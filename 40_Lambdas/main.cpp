// This lesson is on lambda functions. They do the same thing they do in other
// languages, but their syntax is a bit wonky
#include <algorithm>
#include <array>
#include <iostream>
#include <string_view>

int main() {
  // Declare a constexpr array of stringviews
  constexpr std::array<std::string_view, 4> arr{"apple", "banana", "walnut",
                                                "lemon"};
  // Define the function right where we use it
  auto found{std::find_if(arr.begin(), arr.end(), [](std::string_view str) {
    return str.find("nut") != std::string_view::npos;
  })};

  // The function above returns a pointer to a string_view, so here we check if
  // npos ruturned the end of the array. If it didn't, we dereference the
  // pointer to get the value of our string_view
  if (found == arr.end()) {
    std::cout << "No nuts\n";
  } else {
    std::cout << "Found " << *found << '\n';
  }
}
