#include <iostream>
#include <array>
using namespace std;

string sapaan[4][4] = {
  "hallo", "hay", "hi", "yoo", "hey", "hello", "bonjour", "apakabar"
};

int main() {
  int pilihanSapaan;
  cout << "[?] Sapah aku dong!" << endl;
  cout << "[1] " << sapaan[0][0] << "\n[2] " << sapaan[0][1] << "\n[3] " << sapaan[0][2] << "\n[4] " << sapaan[0][3] << endl;
  cout << "[5] " << sapaan[1][0] << "\n[6] " << sapaan[1][1] << "\n[7] " << sapaan[1][2] << "\n[8] " << sapaan [1][3] << endl;
  cout << "[+] Pilih sapaan : "; cin >> pilihanSapaan;
  if(pilihanSapaan == 5) {
    cout << "[!] " << sapaan[1][0] << " juga!!" << endl;
  } else {
    cout << "[!] Hallo juga!!" << endl;
  }

  return 0;
}