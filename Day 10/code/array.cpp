#include <iostream>
#include <array>
using namespace std;

array < string, 5 > daftarSekolah;
int jumlahGuru, jumlahSiswa, jumlahSiswi, JumlahFasilitas;
int pilihan;

void dataSekolah(string a) {
  cout << "[!] Jumlah guru di " << a << "\t\t: "; cin >> jumlahGuru;
  cout << "[!] Jumlah siswa di " << a << "\t\t: "; cin >> jumlahSiswa;
  cout << "[!] Jumlah siswi di " << a << "\t\t: "; cin >> jumlahSiswi;
  cout << "[!] Jumlah fasilitas di " << a << " \t: "; cin >> JumlahFasilitas;
}

void hasilInput(string a) {
  cout << "\n[!] Jumlah " << endl;
  cout << "[!] Guru di " << a << "\t\t: " << jumlahGuru << endl;
  cout << "[!] Siswa di " << a << "\t\t: " << jumlahSiswa << endl;
  cout << "[!] Siswi di " << a << "\t\t: " << jumlahSiswi << endl;
  cout << "[!] Fasilitas di " << a << "\t: " << JumlahFasilitas << endl;
}

int main() {
  cout << "[1] SMAN 1 Tikke Raya\n[2] SMAN 1 Medan\n[3] SMAN 1 Palu\n[4] SMAN 1 Pasangkayu" << endl;
  cout << "[+] Pilih sekolah : "; cin >> pilihan;
  daftarSekolah[0] = "SMAN 1 Tikke Raya";

  for (int i = 0; i <= daftarSekolah.size(); i++) {
    if (pilihan == 1) {
      dataSekolah(daftarSekolah[0]);
      hasilInput(daftarSekolah[0]);
      break;
    } else if ( pilihan == 2) {
      dataSekolah(daftarSekolah[1]);
      hasilInput(daftarSekolah[1]);
    } else if ( pilihan == 3) {
      dataSekolah(daftarSekolah[2]);
      hasilInput(daftarSekolah[2]);
    } else if ( pilihan == 4) {
      dataSekolah(daftarSekolah[3]);
      hasilInput(daftarSekolah[3]);
    } else if ( pilihan == 5) {
      dataSekolah(daftarSekolah[4]);
      hasilInput(daftarSekolah[4]);
    } else {
      cout << "[!] 404 Not Found" << endl;
    }
    
  }
}