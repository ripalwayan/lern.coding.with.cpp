#include <iostream>
using namespace std;

int main(){
  int n;
  cout << "[+] Masukkkan panjang pola : "; cin >> n;

  cout << "[1] Pola satu\n";
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= i; j++) {
      cout << "*";
    }
    cout << endl;
  }

  cout << "[2] Pola dua\n";
  for(int i = 1; i <= n; i++) {
    for(int j = n; j >= i; j--) {
      cout << "*";
    }
    cout << endl;
  }

  cout << "[3] Pola tiga\n";
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j < i; j++) {
      cout << " ";
    }
    for(int k = n; k >= i; k--) {
      cout << "*";
    }
    cout << endl;
  }

  cout << "[4] Pola empat\n";
  for(int i = 1; i <= n; i++) {
    for(int j = n; j > i; j--) {
      cout << " ";
    }
    for(int k = 1; k <= i; k++) {
      cout << "*";
    }
    cout << endl;
  }

  cout << "[5] Pola lima\n";
  for(int i = 1; i <= n; i++) {
    for(int j = n; j > i; j--) {
      cout << " ";
    }
    for(int k = 1; k <= (2*i - 1); k++) {
      cout << "*";
    }
    cout << endl;
  }

  cout << "[6] Pola enam\n";
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j < i; j++) {
      cout << " ";
    }
    for(int k = n; k >= (2*i - n); k--) {
       cout << "*";
    }
    cout << endl;
  }

  cout << "[7] Pola tujuh\n";
  for(int i = 1; i <= n; i++) {
    for(int j = n; j > i; j--) {
      cout << " ";
    }
    for(int k = 1; k <= (2*i - 1); k++) {
      cout << "*";
    }
    cout << endl;
  }

  int nnew = n - 1;
  for(int i = 1; i <= nnew; i++) {
    for(int j = 1; j <= i; j++) {
      cout << " ";
    }
    for(int k = nnew; k >= (2*i - nnew); k--) {
      cout << "*";
    }
    cout << endl;
  }

  cout << "[8] Pola delapan\n";
  for(int i = 1; i <= n; i++) {
    for(int j = n; j > i; j--) {
      cout << " ";
    }
    for(int k = 1; k <= (2*i -1); k++) {
      cout << "*";
    }
  cout << endl;
  }

  for(int i = 1; i <= nnew; i++) {
    for(int j = 1; j <= i; j++) {
      cout << " ";
    }
    for(int k = nnew; k >= (2*i - nnew); k--) {
      cout << "*";
    }
    cout << endl;
  }


  return 0;
}
