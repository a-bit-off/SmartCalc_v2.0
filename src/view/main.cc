#include <QApplication>

#include "application/calc.h"

using namespace s21;

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  Calc w;
  w.show();
  return a.exec();
}
