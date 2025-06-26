#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

const size_t arrayNilai = 10;
void arrayPrint( array <int, arrayNilai> &nilai) {
  cout << "[!] Nilai Array : ";
  for(int &x : nilai) {
    cout << x << " ";
  }
  cout << endl;
}

int main() {
  int cariAngka;
  bool cari;
  array <int, arrayNilai> angka = {9,0,8,7,3,4,6,5,1,2};

  cout << "[?] Cari angka : "; cin >> cariAngka;

  sort(angka.begin(), angka.end());
  arrayPrint(angka);

  cari = binary_search(angka.begin(), angka.end(), cariAngka);
  if (cari) {
    cout << "[*] Ketemu nih " << cariAngka << endl;
  } else {
    cout << "[!] Tidak ada" << endl;
    
  }
  return 0;
}