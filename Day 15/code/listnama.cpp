#include <iostream>
#include <cctype>
using namespace std;

void systemClear() {
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}

struct laptop {
  string nama;
  string mobo;
  string cpu;
  string gpu;
  string storage;
  string memory;
};

void myLaptop(string nama, string mobo, string cpu, string gpu, string storage, string memory) {
  laptop myLaptop;

  myLaptop.nama = nama;
  myLaptop.mobo = mobo;
  myLaptop.cpu = cpu;
  myLaptop.gpu = gpu;
  myLaptop.storage = storage;
  myLaptop.memory = memory;

  cout << "[*] Nama Laptop : " << myLaptop.nama << endl;
  cout << "[*] MainBoard : " << myLaptop.mobo << endl;
  cout << "[*] Proseccor : " << myLaptop.cpu << endl;
  cout << "[*] Gpu : " << myLaptop.gpu << endl;
  cout << "[*] Storage : " << myLaptop.storage << endl;
  cout << "[*] Memory : " << myLaptop.memory << endl;
}

int main() {
  string opsi;
  string nama, mobo, cpu, gpu, storage, memory;

  systemClear();

  cout << "[?] Program data laptop" << endl;
  cout << "[?] Apakah anda tertarik (Y/n) : "; getline(cin,opsi);

  while (true) {
    if(opsi == "y" or opsi == "Y") {
      systemClear();
      cout << "[?] Nama laptop anda : ";  getline(cin,nama);
      systemClear();
      cout << "[?] Mobo laptop anda : "; getline(cin,mobo);
      systemClear();
      cout << "[?] Cpu laptop anda : ";  getline(cin,cpu);
      systemClear();
      cout << "[?] Gpu laptop anda : ";  getline(cin,gpu);
      systemClear();
      cout << "[?] Storage laptop anda : ";  getline(cin,storage);
      systemClear();
      cout << "[?] Memory laptop anda : "; getline(cin,memory);
      systemClear();
      cout << "[!] Data laptop anda" << endl;
      myLaptop(nama, mobo, cpu, gpu, storage, memory);
      
      cout << "\n[?] Anda mau menginput ulang (Y/n) : "; getline(cin,opsi);
      if(opsi == "Y" or opsi == "y") {
        continue;
      } else {
        systemClear();
        break;
      }

    } else {
      break;
    }

  }


  return 0;
}