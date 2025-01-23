// The classes file was getting a little unruly, so I'm going to make a new one
// to cover the topic of friendship

#include <iostream>

class Accumulator {
 private:
  int m_value{0};

 public:
  void add(int value) { m_value += value; }

  // Here is where we declare friendship for a member function
  friend void print(const Accumulator& accumulator);

  // And a friend class
  friend class AccumulatorFriend;
};

void print(const Accumulator& accumulator) {
  std::cout << accumulator.m_value
            << '\n';  // has access to this private member
}

class AccumulatorFriend {
 public:
  void displayAccum(const Accumulator& accumulator) {
    std::cout << accumulator.m_value << '\n';
  }
};

int main() {
  Accumulator acc{};
  acc.add(5);
  print(acc);

  // If you run this, you should get 5
  // And the same goes for friend classes
  AccumulatorFriend accf{};
  accf.displayAccum(acc);
}
