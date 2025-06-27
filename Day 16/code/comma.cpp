#include <iostream>
using namespace std;

void coutPlus(int a, int b) {
  cout << (a+b) << endl;
}

void coutBiasa(int a) {
  cout << a << endl;
}

int main() {
  int a, b, c, d;

  a = (b = 4, c = 6, coutBiasa(b), coutBiasa(c), coutPlus(b,c), (b+c));

  cout << a << endl;
  return 0;
}