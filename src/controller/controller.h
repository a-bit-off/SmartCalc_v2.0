#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QString>

#include "../model/model.h"
#include "qlistview.h"

namespace s21 {

class Controller {
 public:
  bool Calculate(QString str, double x, double *res);
  void Concat(QLineEdit *lineEdit, const QString &src);

 private:
  Model model;
};
}  // namespace s21
#endif  // CONTROLLER_H