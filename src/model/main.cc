#include "model.cc"
using namespace std;
int main() {
  Model m;
  string str = "(-5)^(-4)";
  double x = 0;
  double res = 0;
  bool success = false;
  success = m.SmartCalc(str, x, &res);

  cout << "success = " << success << endl;
  cout << "res = " << res << endl;
  cout << "orig = 0.0016" << endl;
  return 0;
}