#include <iostream>
using namespace std;

int tambah(float a, float b) {
  return a + b;
}

int kurang(float a, float b) {
  return a - b;
}

int kali(float a, float b) {
  return a * b;
}

int bagi(float a, float b) {
  if (b == 0) {
    return 0;
  }
  return a / b;
}

int sisabagi(int a, int b) {
  if (b == 0) {
    return 0;
  }
  return a % b;
}

int main() {

  int nilaisatu;
  int nilaidua;
  int pilihan;

  cout << "[!] kalkulator matematika\n"; cout << "\n" ; cout << "[!] pilih opsi\n\n";
  cout << "[1] pertambahan \n[2] pengurangan \n[3] perkalian \n[4] pembagian \n[5] sisa bagi\n\n";
  cout << "[+] masukkan opsi : "; cin >> pilihan;

  if (pilihan == 1) {
    cout << "[+] masukan nilai pertama : "; cin >> nilaisatu; cout << "\n[+] masukka nilai kedua : "; cin >> nilaidua;
    cout << "[=] hasil : " << tambah(nilaisatu, nilaidua) << endl;

  } else if (pilihan == 2) {
    cout << "[+] masukan nilai pertama : "; cin >> nilaisatu; cout << "\n[+] masukka nilai kedua : "; cin >> nilaidua;
    cout << "[=] hasil : " << kurang(nilaisatu, nilaidua) << endl;

  } else if (pilihan == 3) {
    cout << "[+] masukan nilai pertama : "; cin >> nilaisatu; cout << "\n[+] masukka nilai kedua : "; cin >> nilaidua;
    cout << "[=] hasil : " << kali(nilaisatu, nilaidua) << endl;

  } else if (pilihan == 4) {
    cout << "[+] masukan nilai pertama : "; cin >> nilaisatu; cout << "\n[+] masukka nilai kedua : "; cin >> nilaidua;
    cout << "[=] hasil : " << bagi(nilaisatu, nilaidua) << endl;

  } else if (pilihan == 5) {
    cout << "[+] masukan nilai pertama : "; cin >> nilaisatu; cout << "\n[+] masukka nilai kedua : "; cin >> nilaidua;
    cout << "[=] hasil : " << sisabagi(nilaisatu, nilaidua) << endl;
  }

  return 0;
}