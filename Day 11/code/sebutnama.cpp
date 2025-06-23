#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
#include <cstdlib>
#include <array>
using namespace std;

string nama;
int kelamin;

string panggilan[4][4] = {"Pak", "Mas", "Bang", "Kang", "Buk", "Mbak", "Neng", "Teteh"};
string gelar[5] = {"H", "Hj", "S.Pd", "S.Fil"};

void systemClear() {
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}

string kapitalHurufPertama(string nama) {
    if (!nama.empty()) {
        nama[0] = toupper(nama[0]);
        transform(nama.begin() + 1, nama.end(), nama.begin() + 1, ::tolower);
    }
    return nama;
}

int main() {
  int pilihanPangilan;
  string pangilanNilai;

  systemClear();
  cout << "[$] Program sebut nama orang" << endl;
  cout << "[?] Nama Anda : "; cin >> nama;
  nama = kapitalHurufPertama(nama);
  nama = " " + nama + " ";

  systemClear();
  cout << "[?] Masukkan nomor sesuai kelamin anda" << endl;
  cout << "[1] Pria \n[2] Wanita \n\n[+] : "; cin >> kelamin;
  systemClear();
  if (kelamin == 1) {
    cout << "[?] Anda biasanya di panggil apa?" << endl;
    cout << "[1] " << panggilan[0][0] << "\n[2] " << panggilan[0][1] << "\n[3] " << panggilan[0][2] << endl;
    cout << "[4] " << panggilan[0][3] << endl;
    cout << "\n[+] Pilih nomor : "; cin >> pilihanPangilan;
    if (pilihanPangilan == 1) {
      pangilanNilai = panggilan[0][0];
    } else if (pilihanPangilan == 2) {
      pangilanNilai = panggilan[0][1];
    } else if (pilihanPangilan == 3) {
      pangilanNilai = panggilan[0][2];
    } else if (pilihanPangilan == 4) {
      pangilanNilai = panggilan[0][3];
    } else {
      cout << "[!] 404 Not Found" << endl;
    }

  } else if (kelamin == 2) {

    cout << "[?] Anda biasanya di panggil apa?" << endl;
    cout << "[1] " << panggilan[1][0] << "\n[2] " << panggilan[1][1] << "\n[3] " << panggilan[1][2] << endl;
    cout << "[4] " << panggilan[1][3] << endl;
    cout << "\n[+] Pilih nomor : "; cin >> pilihanPangilan;
    if (pilihanPangilan == 1) {
      pangilanNilai = panggilan[1][0];
    } else if (pilihanPangilan == 2) {
      pangilanNilai = panggilan[1][1];
    } else if (pilihanPangilan == 3) {
      pangilanNilai = panggilan[1][2];
    } else if (pilihanPangilan == 4) {
      pangilanNilai = panggilan[1][3];
    } else {
      cout << "[!] 404 Not Found" << endl;
    }

  } else {
    cout << "[!] 404 Not Found" << endl;
  }

  systemClear();

  int pilihanGelar;
  string gelarNilai, gelarTambah;

  cout << "[?] Apakah gelar anda?" << endl;
  cout << "[1] " << gelar[0] << "\n[2] " << gelar[1] << "\n[3] " << gelar[2] << endl;
  cout << "\n[0] Tidak ada \n[202] Tambah \n\n[+] : "; cin >> pilihanGelar;
  if (pilihanGelar == 1) {
    gelarNilai = gelar[0];
  } else if (pilihanGelar == 2) {
    gelarNilai = gelar[1];
  } else if (pilihanGelar == 3) {
    gelarNilai = gelar[2];
  } else if (pilihanGelar == 4) {
    gelarNilai = gelar[3];
  } else if (pilihanGelar == 202) {
    systemClear();
    cout << "[?] Masukan gelar anda?" << endl;
    cout << "[+] : "; cin >> gelarTambah;
    gelarNilai = gelarTambah;
  } else {
    cout << "[!] 404 Not Found" << endl;
  }

  systemClear();

  if(pilihanGelar == 1 && pilihanGelar == 2) {
    cout << "[!] Halo, " << gelarNilai << nama << endl;
    cout << "[!] Biasa anda di panggil " << pangilanNilai << nama << endl;
    cout << "[?] Terimakasih sudah mencoba program code saya" << endl;
  } else if (pilihanGelar == 0) {
    cout << "[!] Halo, " << nama << endl;
    cout << "[!] Biasa anda di panggil " << pangilanNilai << nama << endl;
    cout << "[?] Terimakasih sudah mencoba program code saya" << endl;
  } else if (pilihanGelar == 202) {
    cout << "[!] Halo, " << gelarNilai << nama << endl;
    cout << "[!] Biasa anda di panggil " << pangilanNilai << nama << endl;
    cout << "[?] Terimakasih sudah mencoba program code saya" << endl;
  } else {
    cout << "[!] Halo," << nama << gelarNilai << endl;
    cout << "[!] Biasa anda di panggil " << pangilanNilai << nama << endl;
    cout << "\n[?] Terimakasih sudah mencoba program code saya" << endl;
  }

  return 0;

}
