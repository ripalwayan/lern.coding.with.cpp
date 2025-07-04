#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
  string teks = "hello world";
  const char* c_style = teks.c_str();

  cout << "teks : " << teks << endl;
  cout << "teks dengan c_str : " << c_style << endl;
  return 0;
}