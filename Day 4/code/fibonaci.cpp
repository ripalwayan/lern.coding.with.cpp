#include <iostream> 
using namespace std;

int main() {
  int n, f_n, f_n1, f_n2;

  cout << "[+] Masukkkan nilai ke n : "; cin >> n;

  f_n1 = 1;
  f_n2 = 0;
  f_n = f_n1 + f_n2;
  cout << f_n << endl;

  for(int i = 1; i <= n; i++) {
    f_n = f_n1 + f_n2;
    f_n2 = f_n1;
    f_n1 = f_n;

    cout << f_n << endl;

  }

  return 0;

}

