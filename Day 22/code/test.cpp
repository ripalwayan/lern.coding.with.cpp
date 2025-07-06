#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void program_di_akhiri();
void buatfile(fstream &file);
void menu();

int main() {
  fstream file;
  buatfile(file);
  int option = menu();

  return 0;
}

void program_di_akhiri() {
  cout << "[!] Program di akhiri!" << endl;
}
void buatfile(fstream &file) {
  string choice; bool kondisi = 1;
  file.open("file.bin", ios::out | ios::in | ios::binary);
  system("cls");
  if (file.is_open()) {
    while(kondisi) {
      continue_buatfile:
      system("cls");
      cout << "[!] File di temukan!" << endl;
      cout << "[?] Lanjut? [Y/n] : "; getline(cin, choice);
      if (choice == "y" | choice == "Y") {
        kondisi = 0;
      } else if (choice == "n" | choice == "N") {
        system("cls");
        program_di_akhiri();
        exit(0);
      } else {
        goto continue_buatfile;
      }
    }
  } else {
    while(kondisi) {
      continue_buatfile_2:
      cout << "[!] File tidak ditemukan!" << endl;
      cout << "[?] Mau membuat file baru? [Y/n] : "; getline(cin, choice);
      if (choice == "y" | choice == "Y") {
        file.open("file.bin", ios::trunc | ios::out | ios::in | ios::binary);
        continue_buatfile_3:
        system("cls");
        cout << "[!] File berhasil di buat" << endl;
        cout << "[?] Lanjut? [Y/n] : "; getline(cin, choice);
        if (choice == "y" | choice == "Y") {
          kondisi = 0;
        } else if (choice == "n" | choice == "N") {
          system("cls");
          program_di_akhiri();
          exit(0);
        } else {
          goto continue_buatfile_3;
        }
      } else if (choice == "n" | choice == "N") {
        system("cls");
        program_di_akhiri();
        exit(0);
      } else {
        goto continue_buatfile_2;
      }
    }
  }
}
int menu() {
  int choice;
  system("cls");
  cout << "[!] Program buat file, tulis file, tampilkan file dan hapus file!\n" << endl;
  cout << "[1] Buat file \n[2] Tulis file \n[3] Tampilkan file \n [4] Hapus file" << endl;
  cout << " >> "; cin >> choice;
  return choice;
}
void tulisfile(fstream &file, string input) {
  file.write(reinterpret_cast<char*>(&input), )
}