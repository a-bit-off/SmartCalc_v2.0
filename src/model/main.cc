#include "model.cc"
using namespace std;
int main() {
  Model m;
  string str = "hui";
  double x = 0;
  double res = 0;
  bool success = false;
  success = m.SmartCalc(str, x, &res);

  cout << "success = " << success << endl;
  cout << "res = " << res << endl;
  cout << "orig = 0.0016" << endl;
  return 0;
}
// -fsanitize=address -O1 -fno-omit-frame-pointer