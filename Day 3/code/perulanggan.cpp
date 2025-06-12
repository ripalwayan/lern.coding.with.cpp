#include <iostream>

using namespace std;

int main() {
  int count = 0;

  do {
    cout << "hello overyone hari saya sudah belajar ke " << count << " kalinnya" << endl;
    count++;

  } while ( count <= 10 );

  count = 20;

  while ( count >= 10) {
    cout << "hello overyone hari saya sudah belajar ke " << count << " kalinnya" << endl;
    count--;
  }

  for ( int countbaru = 0; countbaru <= 10; countbaru++) {
     cout << "hello overyone hari saya sudah belajar ke " << count << " kalinnya" << endl;
  }

  string nameUser;

  cout << "masukkan nama anda : "; cin >> nameUser;

  if (nameUser == "ripyan") {
    cout << "hallo boss" << endl;

  } else {
    cout << "halloooo " << nameUser << endl;
  }

} 