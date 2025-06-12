#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  
  srand(time(0));
  char opsi[10];
  
  while (true) {
    int dadu = 1 + (rand() % 6);
    cout << "[?] Mau ermain dadu :) (Y/n): "; cin >> opsi;
    if (opsi[0] == 'y' or opsi[0] == 'Y') {
      cout << "[!] Putar dadu (Y/n): "; cin >> opsi;
      if (opsi[0] == 'y' or opsi[0] == 'Y') {
        if (dadu == 6 or dadu == 5) {
          cout << "[!] Kmau dapat dadu angka :)  " << dadu << "\n" << endl;
        } else if (dadu == 4 or dadu == 3) {
          cout << "[!] Kamu dapat dadu angka :|  " << dadu << "\n" << endl;
        } else {
          cout << "[!] Kamu dapat dadu angka :(  " << dadu << "\n" << endl;
        }
        cout << "[?] Main lagi (Y/n): "; cin >> opsi;
        if (opsi[0] == 'y' or opsi[0] == 'Y') {
          continue;
        } else if (opsi[0] == 'n' or opsi[0] == 'N') {
          cout << "[!] Oke deeehh :(" << endl;
          break;
        }

      } else if (opsi[0] == 'n' or opsi[0] =='N') {
        cout << "[!] Padahal tadi mau main :|" << endl;
        break;
      } else {
        cout << "[!] Ngak jelas broo :(" << endl;
        break;
      }

    } else if (opsi[0] == 'n' or opsi[0] =='N') {
      cout << "[?] Kenapa tidak mau bermain :(" << endl;
      break;
    } else {
      cout << "[!] Ngak jelas broo" << endl;
      break;
    }

  }
  return 0;
}