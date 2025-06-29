#include <iostream>
#include <fstream>
using namespace std;

struct Minuman {
  string nama;
  string rasa;
  string kemasan;
  int harga;
};

void outputMinuman(string nama, string rasa, string kemasan, int harga) {
  cout << "\n[*] Nama minuman \t: " << nama << endl;
  cout << "[*] Rasa minuman \t: " << rasa << endl;
  cout << "[*] Kemasan minuman \t: " << kemasan << endl;
  cout << "[*] Harga minuman \t: " << harga << ".Rp" << endl;
}

int main() {
  Minuman Nescafe, Fanta;
  Nescafe.nama = "Nescafe";
  Nescafe.rasa = "Latte";
  Nescafe.kemasan = "Bagus";
  Nescafe.harga = 10000;

  Fanta.nama = "Fanta";
  Fanta.rasa = "Strowbary";
  Fanta.kemasan = "Bagus";
  Fanta.harga = 6000;
  
  fstream fileWrite, fileRead;

  fileWrite.open("database.bin", ios::out | ios::in | ios::binary);
  fileWrite.write(reinterpret_cast<char*>(&Nescafe), sizeof(Nescafe));
  fileWrite.write(reinterpret_cast<char*>(&Fanta), sizeof(Fanta));
  fileWrite.close();

  Minuman output, output2;

  fileRead.open("database.bin", ios::out | ios::in | ios::binary);
  fileRead.read(reinterpret_cast<char*>(&output), sizeof(output));
  fileRead.read(reinterpret_cast<char*>(&output2), sizeof(output2));
  outputMinuman(output.nama, output.rasa, output.kemasan, output.harga);
  outputMinuman(output2.nama, output2.rasa, output2.kemasan, output2.harga);

  fileRead.close();

  return 0;
}