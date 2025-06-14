#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void hasil(int x) {
  cout << "[=] Panjang nama anda : " << x << endl;
}

int main() {
  string nameInput, nameDelateSpace;
  cout << "[+] Masukkan nama anda : "; getline(cin, nameInput);

  nameDelateSpace = nameInput;
  nameDelateSpace.erase(
    remove_if(nameDelateSpace.begin(), nameDelateSpace.end(), ::isspace), nameDelateSpace.end()
  );
  hasil(nameDelateSpace.length());

  return 0;
}
