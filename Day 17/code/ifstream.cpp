#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  ofstream file1; ifstream file2;
  string data, dataUp;
  bool isdata = false;

  file1.open("database.txt", ios::out);
  file1 << "\nsoal tampilkan nomor beserta nama yang berada \ndi bawah ini!";
  file1 << "\n\n[1] ripyan \n[2] ripalwayan \n[3] wayan \n[4] ripal" << endl;
  file1.close();

  file2.open("database.txt", ios::in);
  while(getline(file2, data)) {
    cout << data << endl;
  }

  file2.close();

  return 0;
}