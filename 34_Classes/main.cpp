// This lesson is on classes. I'm going to use the same file for most of the
// class sections, though some may be broken out into other directories
#include <iostream>

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
}
