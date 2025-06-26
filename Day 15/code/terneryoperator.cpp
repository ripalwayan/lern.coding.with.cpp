#include <iostream>
using namespace std;

int main() {
  int a, b, input2;
  string hasil, hasil2, output, outputRahasia, outputNgakjadi, outputBuktikan, outputTerbukti, input;

  hasil = "halooo jugaaa";
  hasil2 = "halo";
  outputTerbukti = "ohh okeeee...";
  outputRahasia = "i... jadi malu";
  outputNgakjadi = "hue...e";
  cout << "[?] Sapah aku dong : "; getline(cin,input);
  output = (input == "sayang" or input == "hallo sayang") ? outputRahasia : hasil ;
  cout << output << "\n" << endl;

  cout << "[?] Kamu cwek or cwok?" << endl;
  cout << "[1] Cwek \n[2] Cwok" << endl;
  cout << "[?] : "; cin >> input2;
  output = (input2 == 1) ? outputTerbukti : outputNgakjadi;
  cout << output << endl;
  return 0;
}