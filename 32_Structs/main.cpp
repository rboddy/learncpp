// This lesson is on structs. I've always compared structs to JSON objects or
// dictionaries, but they clearly have some key differences

#include <iostream>

struct Employee {
  // Data members (not properties)
  int id{};
  int age{};
  double wage{};
};

struct Car {
  int32_t year;
  double price;
  int doors;
};

struct Rectangle {
  double length{};
  double width{};
};

std::ostream& operator<<(std::ostream& out, const Car& c) {
  out << "year: " << c.year << " price: " << c.price << " doors: " << c.doors;
  return out;
}

int main() {
  // I think it makes more logical sense to value initialize with braces here.
  Employee ryan{};
  std::cout << "This employee's age is " << ryan.age << '\n';
  // This will print 0. We can set values the same way we access them:
  ryan.age = 30;
  std::cout << "This employee's age is " << ryan.age << '\n';

  // The car struct above is not value initialized, so when we create one, we
  // should initialize each of its members. To do this, you can use copy-list or
  // list initialization. Prefer list, as shown below:

  Car sedan{2021, 25000.00, 4};

  // Unlike a JSON object, a struct cannot be printed directly. We can overload
  // the output operator like we did with enums to do so

  std::cout << sedan << '\n';

  // Note, practiving operator overloading helps to understand it quite a bit.

  // Structs can also be const or constexpr as shown here:

  const Rectangle unit{1.0, 1.0};

  // Note, you can also initalize with default members. I'm not going to show
  // this here, because it's very straight forward. Also remember that a struct
  // is a class type, so it should be passed by reference to functions. They can
  // be returned by value to avoid dangling references

  // This last point is important because you're going to see it a lot. You can
  // use the dot operator to access members from a struct or a reference to a
  // struct, but not from a pointer to a struct. However, the arrow operator in
  // CPP is a member selector from pointer, as shown here:

  Employee joe{1, 32, 65000.00};
  ++joe.age;                     // Works, you are accessing the struct itself
  joe.wage = 68000.00;           // Works, same as above
  Employee* ptr{&joe};           // Create a pointer to Joe
  std::cout << ptr->id << '\n';  // Works to print the id of Joe without having
                                 // to uses the dereference operator
}
