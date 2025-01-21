// This lesson is on classes. I'm going to use the same file for most of the
// class sections, though some may be broken out into other directories
#include <iostream>

#include "game.h"

class Employee {
 public:
  int m_id{};
  int m_age{};
  double m_wage{};

  void printId() { std::cout << m_id << '\n'; }
};

// Below is a class with a constant member function
class Date {
 public:
  int year{};
  int month{};
  int day{};

  void print() const {
    std::cout << year << '/' << month << '/' << day << '\n';
  }
};

class Character {
  // not needed explicitly, but it's good to have
 private:
  int m_health{10};
  double m_speed{100.00};
  double m_jumpHeight{10.0};

 public:
  int getHealth() const { return m_health; }
  void setHealth(int health) { m_health = health; }

  double getSpeed() const { return m_speed; }
  void setSpeed(double speed) { m_speed = speed; }

  double getJumpHeight() const { return m_jumpHeight; }
  void setJumpHeight(double jumpHeight) { m_jumpHeight = jumpHeight; }
};

class Foo {
 private:
  int m_x{};
  int m_y{};

  // Constructor below with member initializer list
 public:
  Foo(int x, int y) : m_x{x}, m_y{y} { std::cout << "Foo constructed \n"; }
};

void printEmployeeId(const Employee& employee) {
  std::cout << employee.m_id << '\n';
};

int main() {
  Employee employee{69, 42, 100000.00};
  printEmployeeId(employee);

  // The above function is fine, but it means that the function and class
  // connection have to be inferred. A member function would work better

  employee.printId();

  // The below is an example of making a class object constant
  const Date today{2025, 1, 20};
  today.print();

  // Since class members are private by default, and should usually remain that
  // way, we can use getters and setters to work with them:

  Character c{};
  c.setSpeed(200.00);
  std::cout << "The players speed is " << c.getSpeed() << '\n';

  // We can't implement classes as aggregators due to private members. However,
  // we can use constructors
  Foo foo{6, 7};  // is NOT an aggregate. This calls foos constructor

  // Because classes become unruly, it's common to define them in header files,
  // as shown here:

  std::string title = "The Best Game Ever";

  Game game{14.99, 'M', title};
  game.print();
}
