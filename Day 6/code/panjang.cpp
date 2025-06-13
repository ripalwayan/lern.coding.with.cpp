#include <iostream> 
using namespace std;

double hitungLuas(double p, double l) {
  double luas = p + l;
  return luas;
}

double hitungKeliling(double p, double l) {
  double keliling = 2 * (p + l);
  return keliling;
}

void hasilHitung(double h, string n, double a, double b) {
  cout << "[!] Hasil hitungan " << n << " dari nilai panjang : " << a << " dan nilai luas : " << b;
  cout << " menghasilkan " << n << " : " << h << endl;
}

int main() {
  string luas = "luas", keliling = "keliling";
  double hasilHitungLuas, hasilHitungKeliling, inputPanjang, inputLuas;

  cout << "[+] Masukkan panjang : "; cin >> inputPanjang;
  cout << "[+] Masukkan luas : "; cin >> inputLuas;
  hasilHitungLuas = hitungLuas(inputPanjang, inputLuas);
  hasilHitungKeliling = hitungKeliling(inputPanjang, inputLuas);

  hasilHitung(hasilHitungLuas, luas, inputPanjang, inputLuas);
  hasilHitung(hasilHitungKeliling, keliling, inputPanjang, inputLuas);

  return 0;
}