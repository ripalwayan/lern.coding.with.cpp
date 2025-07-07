#include <iostream>

template<typename A, typename B>
A print(A a, B b) {
  return (a > b) ? a : b;
}

int main() {
  std::cout << print(10, 10.2) << std::endl;

  return 0;
}