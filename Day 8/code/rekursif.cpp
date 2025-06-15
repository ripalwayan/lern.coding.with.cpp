#include <iostream>
using namespace std;

int pangkatFungsi(int a, int b) {
  int hasil = a;
  for( int i = 1; i < b; i++) {
    hasil *= a;
  }
  return hasil;
}

int pangkatRekursif(int a, int b) {
  int hasil;
  if(b == 1) {
    return a;
  } else {
    hasil = a * pangkatRekursif(a,(b - 1));
  }
  
  return hasil;
}

int main() {
  int angka, pangkat;
  cout << "[+] Masukkan angka : "; cin >> angka;
  cout << "[+] Masukkan pangkat : "; cin >> pangkat;
  cout << "[=] Hasil dari " << angka << " pangkat " << pangkat << " : " << pangkatFungsi(angka, pangkat) << endl;
  cout << "[=] Hasil dari " << angka << " pangkat " << pangkat << " : " << pangkatRekursif(angka, pangkat) << endl;

  return 0;
}