#include "controller.h"

using namespace s21;

bool Controller::Calculate(QString str, double x, double *res) {
  if (model.SmartCalc(str.toStdString(), x, res)) {
    return true;
  }
  return false;
}

void Controller::Concat(QLineEdit *lineEdit, const QString &src) {
  model.Concat(lineEdit, src);
}