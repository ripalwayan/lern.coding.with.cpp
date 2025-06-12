#include <iostream>

int tambah( int a, int b) {
  return a+b;
}

int kurang( int a, int b) {
  return a-b;
}

int kali( int a, int b) {
  return a*b;
}

int bagi( int a, int b) {
  return a/b;
}

int matematika( int result) {
  return result;
}

int main() {
  std::cout << matematika(tambah(2, 8)) << std::endl;
  return 0;
}