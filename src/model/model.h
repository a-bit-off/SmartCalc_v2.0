#ifndef MODEL_H
#define MODEL_H

#ifdef QT_MACRO
#include "QtWidgets/qlineedit.h"
#include "qlistview.h"
#include "qstandarditemmodel.h"
#endif

#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;
namespace s21 {
const std::map<std::string, int> priorityTable_ = {
    {"num", -2}, {"(", -1},   {")", -1},   {"+", 1},    {"-", 1},   {"*", 2},
    {"/", 2},    {"^", 3},    {"mod", 3},  {"sin", 4},  {"cos", 4}, {"tan", 4},
    {"asin", 4}, {"acos", 4}, {"atan", 4}, {"sqrt", 4}, {"ln", 4},  {"log", 4}};
const std::map<std::string, int> singNumOperations_ = {
    {"sin", 4},  {"cos", 4},  {"tan", 4}, {"asin", 4}, {"acos", 4},
    {"atan", 4}, {"sqrt", 4}, {"ln", 4},  {"log", 4}};
const std::map<std::string, int> worksWithUnary_ = {
    {"(", -1}, {"+", 1}, {"-", 1}, {"*", 2}, {"/", 2}, {"^", 3}};
class Stack {
 protected:
  struct Node {
    double value_;
    std::map<std::string, int> operation_;
    Node(const double value, std::map<std::string, int> operation)
        : value_(value), operation_(operation) {}
  };

 public:
  void PushBack(const double value);
  void PushBack(const std::map<std::string, int> type);
  void PopBack();
  bool Empty();
  int Size();
  Node Top();
  std::vector<Node>::iterator Begin();
  std::vector<Node>::iterator End();

 private:
  std::vector<Node> head_;
};

class Model : Stack {
 public:
  bool SmartCalc(std::string str, double x, double *res);
#ifdef QT_MACRO
  void Concat(QLineEdit *lineEdit, const QString &src);
#endif

 private:
  Stack valuesStack_;
  Stack operationsStack_;

  void PolishNotationManager(std::string str);
  void ScobeManager(bool *scobe);
  void OperationsManager(bool scobe);
  void EndStringManager(std::string str);
  void PolishNotation(bool flag);
  bool PolishNotationHelper(Node *down_oper, Node *current_oper, bool flag);
  void ExecutionOperations(double num1, double num2, Node *down_oper);

  size_t SkipValue(std::string str);
  std::string FindOperation(std::string str);
};
}  // namespace s21
#endif  // MODEL_H