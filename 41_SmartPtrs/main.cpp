// this lesson is on smart pointers, which are classes that are defined to
// contain pointers so that their destructors can take care of deleting and
// deallocation of that memory
#include <iostream>

template <typename T>
class Auto_ptr2 {
  T* m_ptr{};

 public:
  Auto_ptr2(T* ptr = nullptr) : m_ptr(ptr) {}
  ~Auto_ptr2() { delete m_ptr; }
  // A copy contructor that implements move semantics instead of a copy
  Auto_ptr2(Auto_ptr2& a) {
    m_ptr = a.m_ptr;
    a.m_ptr = nullptr;
  }
  // An assignment operator that implements move semantics
  Auto_ptr2& operator=(Auto_ptr2& a)  // note: not const
  {
    if (&a == this) return *this;

    delete m_ptr;     // make sure we deallocate any pointer the destination is
                      // already holding first
    m_ptr = a.m_ptr;  // then transfer our dumb pointer from the source to the
                      // local object
    a.m_ptr = nullptr;  // make sure the source no longer owns the pointer
    return *this;
  }
  T& operator*() const { return *m_ptr; }
  T* operator->() const { return m_ptr; }
  bool isNull() const { return m_ptr == nullptr; }
};

class Resource {
 public:
  Resource() { std::cout << "Resource acquired\n"; }
  ~Resource() { std::cout << "Resource destroyed\n"; }
};

int main() {
  Auto_ptr2<Resource> res1(new Resource());
  Auto_ptr2<Resource> res2;

  std::cout << "Res1 is " << (res1.isNull() ? "null\n" : "not null\n");
  std::cout << "Res2 is " << (res2.isNull() ? "null\n" : "not null\n");

  res2 = res1;

  std::cout << "Ownership transferred\n";

  std::cout << "Res1 is " << (res1.isNull() ? "null\n" : "not null\n");
  std::cout << "Res2 is " << (res2.isNull() ? "null\n" : "not null\n");
}
