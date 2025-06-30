#include <iostream>
#include <fstream>
#include <cstdlib>
#include <limits>
using namespace std;

struct minuman{
  string nama;
  string rasa;
  string desain;
  int harga;
  int pk;
};

void addDaftarminuman(fstream &database) {
  minuman inputMinuman;
  inputMinuman.pk = 1;
  cout << "[?] Nama minuman \t: "; getline(cin, inputMinuman.nama);
  cout << "[?] Rasa minuman \t: "; getline(cin, inputMinuman.rasa);
  cout << "[?] Desain minuman \t: "; getline(cin, inputMinuman.desain);
  cout << "[?] Harga minuman \t: "; cin >> inputMinuman.harga;
}

int daftarOption() {
  int input;
  system("cls");
  cout << "[?] Daftarkan minuman!\n" << endl;
  cout << "[1] Buat daftar \n[2] Tampilkan daftar \n[3] Perbarui daftar" << endl;
  cout << "[4] Hapus daftar \n[0] Daftar selesai\n" << endl;
  cout << "[?] : "; cin >> input;
  cin.ignore(numeric_limits<streamsize>::max(),'\n');
  return input;
}

void cekdata(fstream &database) {
  system("cls");
  string opsi; bool kondisi = true;
  database.open("database.bin", ios::out | ios:: in | ios::binary);
  if(database.is_open()) {
    label_continue:
    while(kondisi) {
      system("cls");
      cout << "[!] Data ditemukan" << endl;
      cout << "[?] Lanjut daftar? (Y/n) : "; cin >> opsi;
      if(opsi == "y" | opsi == "Y") {
        kondisi = false;
      } else if(opsi == "n" | opsi == "N") {
        exit(0);
      } else {
        goto label_continue;
      }
    }
    
  } else {
    labelContinue:
    while(kondisi) {
      system("cls");
      cout << "[!] data tidak ditemukan!" << endl;
      cout << "[?] Apakah anda mau membuat file otomatis (Y/n) : "; cin >> opsi;
      if(opsi == "y" | opsi == "Y") {
        database.open("database.bin", ios::trunc | ios::out | ios:: in | ios::binary);
        continueLagi:
        system("cls");
        cout << "[!] Data berhasil dibuat! \n[?] Lanjut daftar (Y/n) : "; cin >> opsi;
        if(opsi == "y" | opsi == "Y") {
          break;
        } else if(opsi == "n" | opsi == "N") {
          exit(0);
        } else {
          goto continueLagi;
        }
      } else if(opsi == "n" | opsi == "N") {
        exit(0);
      } else {
        goto labelContinue;
      }
    }
  }
}

void daftar(string a) {
  system("cls");
  cout << "[!] " << a << " minuman!\n" << endl;
}

void akhirProgram() {
  system("cls");
  cout << "[!] Program selesai!!\n" << endl;
}

enum opsi{CREATE = 1, READ, UPDATE, DELETE, FINISH = 0};

int main() {
  fstream database;
  cekdata(database);
  int option = daftarOption(); string daftarLagi;
  
  while(option != FINISH) {
    switch(option) {
      case CREATE:
        daftar("Buat daftar");
        addDaftarminuman(database);
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