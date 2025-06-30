#include <iostream>
#include <fstream>
using namespace std;

int daftarOption() {
  int input;
  system("cls");
  cout << "[?] Daftarkan minuman!\n" << endl;
  cout << "[1] Buat daftar \n[2] Tampilkan daftar \n[3] Perbarui daftar" << endl;
  cout << "[4] Hapus daftar \n[5] Daftar selesai\n" << endl;
  cout << "[?] : "; cin >> input;
  return input;
}

void daftar(string a) {
  system("cls");
  cout << "[1] " << a << endl;
}

void akhirProgram() {
  system("cls");
  cout << "[!] Program selesai!!\n" << endl;
}

enum opsi{CREATE = 1, READ, UPDATE, DELETE, FINISH};

int main() {
  int option = daftarOption(); string daftarLagi;
  while(option != FINISH) {
    switch(option) {
      case CREATE:
        daftar("Buat daftar");
        break;
      case READ:
      case UPDATE:
      case DELETE:
      default:
        break;
    }
  
    label_continue:
    cout << "[!] Daftar lagi (Y/n): "; cin >> daftarLagi;
    if (daftarLagi == "y" | daftarLagi == "Y") {
      option = daftarOption();
    } else if (daftarLagi == "n" | daftarLagi == "N") {
      break;
    } else {
      goto label_continue;
    }
  }

  akhirProgram();

  return 0;
}