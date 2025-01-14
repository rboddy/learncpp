#include <cstdlib>
#include <iostream>

void unreachable() { std::cout << "This function can't be reached \n"; }

void cleanup() { std::cout << "Saving the player state!\n"; }

int main() {
  // This lesson is on halts, which is the termination of a program. We can call
  // the same function that is called implicitly at the end of main any time
  // like so.

  std::cout << "We are going to exit this program in a moment...\n";

  // We can also tell CPP what to do right before exit is called like so:
  std::atexit(cleanup);

  std::exit(0);

  unreachable();

  // For the most part, halts should be avoided, but they are there as an option
}
