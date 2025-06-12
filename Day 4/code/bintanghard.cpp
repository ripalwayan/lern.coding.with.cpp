#include <iostream>
using namespace std;

string bintang(int w) {
    return string(w, '*');
  }

int main() {
  int n, nbaru;
  cout << "[+] Masukkan nilai : "; cin >> n;
  nbaru = n - 1;

  cout << "[1] Pola\n";
  for(int i = 1; i <= n; i++) {
    for(int j = n; j >= i; j--) {
      cout << "*";
    }
    for(int k = 1; k < (2*i - 1); k++) {
      cout << "-";
    }
    for(int h = n; h >= i; h--) {
      cout << "*";
    }

  cout << endl;
  }

  for(int i = 1; i <= nbaru; i++) {
    for(int j = 1; j <= i; j++) {
      cout << "*";
    }
    for(int k = n; k >= (2*i - nbaru); k--) {
      cout << "-";
    }
    for(int h = 1; h <= i; h++) {
      cout << "*";
    }

  cout << endl;
  }
  int nkali = n * 2;
  string hasil = bintang(nkali);
  cout << hasil << endl;

  return 0;
}