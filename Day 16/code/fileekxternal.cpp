#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ofstream file;

  file.open("cihuuy.txt", ios::app);
  file << "halloooo" << endl;
  file.close();
  return 0;
}