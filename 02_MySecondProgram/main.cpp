#include <iostream>
using namespace std;

int main() {
  // the following is an example of using cin to capture input
  cout << "Enter your name: ";

  string name{};

  cin >> name;

  cout << "Your name is " << name << '\n';
}
