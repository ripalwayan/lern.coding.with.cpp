#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  string kata = "hallo everyone"; int angka;
  angka = kata.find("hallo");
  cout << kata.substr(angka, 5) << endl;

  return 0;
}