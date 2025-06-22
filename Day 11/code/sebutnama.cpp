#include <iostream>
#include <cstdlib>
#include <array>
using namespace std;

string nama, gelar;
int kelamin;

string panggilan[4][4] = {"Pak", "Mas", "Bang", "Kang", "Buk", "Mbak", "Neng", "Teteh"};

int pemanggilan(int x) {
  if (x == 1) {
    int pilihan;
    cout << "[?] Anda biasanya di panggil apa?" << endl;
    cout << "[1] " << panggilan[0][0] << "\n[2] " << panggilan[0][1] << "\n[3] " << panggilan[0][2] << endl;
    cout << "[4] " << panggilan[0][3] << endl;
    cout << "\n[+] Pilih nomor : "; cin >> pilihan;
    return pilihan;

  } else if (x == 2) {
    int pilihan;
    cout << "[?] Anda biasanya di panggil apa?" << endl;
    cout << "[1] " << panggilan[1][0] << "\n[2] " << panggilan[1][1] << "\n[3] " << panggilan[1][2] << endl;
    cout << "[4] " << panggilan[1][3] << endl;
    cout << "\n[+] Pilih nomor : "; cin >> pilihan;
    return pilihan;

  } else {
    cout << "[?] 404 Noy Found" << endl;
    return 0;
  }
}

void systemClear() {
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}

int main() {
  systemClear();
  cout << "[$] Program sebut nama orang" << endl;
  cout << "[?] Nama Anda : "; cin >> nama;
  systemClear();
  cout << "[!] Masukkan nomor sesuai kelamin anda" << endl;
  cout << "[1] Pria \n[2] Wanita \n\n[+] : "; cin >> kelamin;
  systemClear();
  cout << pemanggilan(kelamin) << endl;
  

  return 0;

}