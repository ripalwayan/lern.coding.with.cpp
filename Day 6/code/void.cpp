#include <iostream>
using namespace std;

int kuadrat(int x) {
  int y;
  y = x * x;
  return y;
}

void dokumentasi(int a) {
  cout << "[!] Hasil : " << a << endl;
}

int main() {
  int input, hasil;

  cout << "[+] Masukkan nilai : "; cin >> input;
  hasil = kuadrat(input);
  dokumentasi(hasil);
  return 0;
}