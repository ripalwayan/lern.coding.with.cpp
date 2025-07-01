#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <limits>
using namespace std;

struct minuman{
  char nama[50];
  char rasa[50];
  char desain[50];
  int harga;
  int pk;
};

void writeDaftar(fstream &database, int posisi, minuman &inputMinuman) {
  database.seekp((posisi - 1)*sizeof(minuman), ios::beg);
  database.write(reinterpret_cast<char*>(&inputMinuman), sizeof(minuman));
}

int getDaftar(fstream &database) {
  int start, end;
  database.seekg(0, ios::beg);
  start = database.tellg();
  database.seekg(0, ios::end);
  end = database.tellg();
  return (end - start)/sizeof(minuman);
}

minuman readDaftar(fstream &database, int posisi) {
  minuman readMinuman;
  database.seekg((posisi - 1)*sizeof(minuman), ios::beg);
  database.read(reinterpret_cast<char*>(&readMinuman), sizeof(minuman));
  return readMinuman;
}

void addDaftarminuman(fstream &database) {
  int size = getDaftar(database);
  minuman inputMinuman, lastMinuman;
  if(size == 0) {
    inputMinuman.pk = 1;
  } else {
    lastMinuman = readDaftar(database, size);
    inputMinuman.pk = lastMinuman.pk + 1;
  }
  
  string temp;
  cout << "[?] Nama minuman \t: "; getline(cin, temp); strcpy(inputMinuman.nama, temp.c_str());
  cout << "[?] Rasa minuman \t: "; getline(cin, temp); strcpy(inputMinuman.rasa, temp.c_str());
  cout << "[?] Desain minuman \t: "; getline(cin, temp); strcpy(inputMinuman.desain, temp.c_str());
  cout << "[?] Harga minuman \t: "; cin >> inputMinuman.harga;
  writeDaftar(database,size + 1,inputMinuman);
}

void tampilkanDaftar(fstream &database) {
  int size = getDaftar(database);
  minuman showMinuman;
  cout << "No\tNama\t\tRasa\t\tDesain\t\tHarga" << endl;
  for(int i = 1; i <= size; i++) {
    showMinuman = readDaftar(database, i);
    cout << i << "\t";
    cout << showMinuman.nama << "\t\t";
    cout << showMinuman.rasa << "\t\t";
    cout << showMinuman.desain << "\t\t";
    cout << showMinuman.harga << endl;
  }
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
        daftar("Tampilan daftar");
        tampilkanDaftar(database);
        break;
      case UPDATE:
      case DELETE:
      default:
        break;
    }
  
    label_continue:
    cout << "[!] Menu daftar (Y/n): "; cin >> daftarLagi;
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