#include <iostream>
using namespace std;

void kuadrat(int *x) {
  *x = (*x) * (*x);
}

int main() {
  int a;
  cout << "[+] Masukkan angka : "; cin >> a;
  cout << "[=] Nilai anddres a adalah \t: " << &a << endl;
  cout << "[=] Nilai a \t\t\t: " << a << endl;
  kuadrat(&a);
  cout << "[=] Kuadrat dari a adalah \t: " << a << endl;

  return 0;
}