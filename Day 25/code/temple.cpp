#include <iostream>
#include <string>

void print(int value);
void print(char x);
void print(double value);

int main() {
  print(20);
  print(2.3);
  print('t');

  return 0;
}

void print(int value) {
  std::cout << value << std::endl;
}

void print(char x) {
  std::cout << x << std::endl;
}

void print(double value) {
  std::cout << value << std::endl;
}
