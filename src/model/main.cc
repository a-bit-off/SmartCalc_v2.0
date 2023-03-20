#include "model.cc"

int main() {
  Model m;
  double x = 0;
  double res = 0;
  bool success = m.SmartCalc("1+sin()+1", x, &res);
  std::cout << "success = " << success << std::endl;
  std::cout << "res = " << res << std::endl;
  return 0;
}