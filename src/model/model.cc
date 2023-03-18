#include "model.h"

#include <list>

using namespace s21;
// Stack
void Stack::PushBack(const double value) {
  head_.push_back({value, {{"num", priorityTable_.at("num")}}});
}
void Stack::PushBack(const std::map<std::string, int> type) {
  head_.push_back({0, type});
}
void Stack::PopBack() { head_.pop_back(); }
Stack::Node Stack::Top() { return head_.back(); }
std::vector<s21::Stack::Node>::iterator Stack::Begin() { return head_.begin(); }
std::vector<s21::Stack::Node>::iterator Stack::End() { return head_.end(); }
bool Stack::Empty() { return head_.empty(); }
int Stack::Size() { return head_.size(); }

// Polich notation
bool Model::SmartCalc(std::string str, double x, double *res) {
  double value = 0;
  bool unary = true;
  int oper = 0;
  bool success = true;
  size_t i = 0;
  while (i < str.size() && success) {
    std::string strStep = (str.begin() + i).base();
    if (std::isdigit(str[i]) || str[i] == 'x' || str[i] == 'X') {
      oper = 0;
      unary = false;
      if (str[i] == 'x' || str[i] == 'X') {
        value = x;
        i++;
      } else {
        value = std::atof(strStep.c_str());
        i += SkipValue(strStep);
      }
      valuesStack_.PushBack(value);
    } else {
      std::string operation = FindOperation(strStep);
      if (operation.size() > 0) {
        if (operation == "(" || operation == ")") {
          oper = 0;
        } else {
          oper += 1;
        }
        // if (!operationsStack_.Empty() &&
        //     operationsStack_.Top().operation_.begin()->first == "(") {
        // }
        if (oper > 1) {
          if (oper > 2) {
            success = false;
            break;
          } else if (Validator(str, i) == false) {
            success = false;
            break;
          }
        }
        if (unary && (operation == "+" || operation == "-")) {
          valuesStack_.PushBack(0);
        }
        operationsStack_.PushBack({{operation, priorityTable_.at(operation)}});
        i += operation.size();
        if (worksWithUnary_.find(operation) != worksWithUnary_.end()) {
          unary = true;
        }
      } else if (strStep[0] == ' ') {
        oper = 0;
        i++;
      } else {
        success = false;
        break;
      }
    }
    strStep = (str.begin() + i).base();
    try {
      PolishNotationManager(strStep);
    } catch (std::out_of_range const &err) {
      success = false;
    }
  }
  // cycle end

  if (!operationsStack_.Empty()) {
    success = false;
  }
  if (success) {
    *res = valuesStack_.Top().value_;
  }
  return success;
}
void Model::PolishNotationManager(std::string str) {
  bool scobe = false;
  if (!operationsStack_.Empty()) {
    ScobeManager(&scobe);
    OperationsManager(scobe);
    EndStringManager(str);
  }
}
void Model::ScobeManager(bool *scobe) {
  if (operationsStack_.Top().operation_.begin()->first == ")") {
    while (!operationsStack_.Empty() && !valuesStack_.Empty()) {
      if (operationsStack_.Size() == 1) {
        break;
      }
      Node *rs = operationsStack_.End().operator-(1).base();
      Node *ls = operationsStack_.End().operator-(2).base();
      if (rs->operation_.begin()->first == ")" &&
          ls->operation_.begin()->first == "(") {
        *scobe = true;
        break;
      }
      PolishNotation(false);
    }
    if (*scobe) {
      operationsStack_.PopBack();
      operationsStack_.PopBack();
    } else {
      throw std::out_of_range("Error calculation!");
    }
  }
}
void Model::OperationsManager(bool scobe) {
  if (!operationsStack_.Empty()) {
    if (singNumOperations_.find(
            operationsStack_.Top().operation_.begin()->first) !=
            singNumOperations_.end() &&
        scobe) {
      PolishNotation(true);
    }
    if (operationsStack_.Size() > 1) {
      Node *fp = operationsStack_.End().operator-(1).base();
      Node *sp = operationsStack_.End().operator-(2).base();
      if (!(fp->operation_.begin()->first == "^" &&
            sp->operation_.begin()->first == "^")) {
        while (!valuesStack_.Empty() && operationsStack_.Size() > 1) {
          Node *fps = operationsStack_.End().operator-(1).base();
          Node *sps = operationsStack_.End().operator-(2).base();
          if (fps->operation_.begin()->second >
                  sps->operation_.begin()->second ||
              fps->operation_.begin()->first == "(" ||
              sps->operation_.begin()->first == "(") {
            break;
          }
          PolishNotation(false);
        }
      }
    } else {
      PolishNotation(false);
    }
  }
}
void Model::EndStringManager(std::string str) {
  if (str.empty()) {
    while (!valuesStack_.Empty() && !operationsStack_.Empty()) {
      if (operationsStack_.Top().operation_.begin()->first == "(" ||
          operationsStack_.Top().operation_.begin()->first == ")") {
        throw std::out_of_range("Error calculation!");
        break;
      }
      PolishNotation(true);
    }
  }
}
void Model::PolishNotation(bool flag) {
  if (!operationsStack_.Empty()) {
    Node *down_oper = nullptr;
    if (flag) {
      down_oper = operationsStack_.End().operator-(1).base();
    } else if (operationsStack_.Size() > 1) {
      down_oper = operationsStack_.End().operator-(2).base();
    }

    Node *current_oper = operationsStack_.End().operator-(1).base();
    if (PolishNotationHelper(down_oper, current_oper, flag)) {
      std::map<std::string, int> op = current_oper->operation_;
      operationsStack_.PopBack();
      if (!operationsStack_.Empty() && !flag) {
        operationsStack_.PopBack();
        operationsStack_.PushBack(op);
      }
    }
  }
}
bool Model::PolishNotationHelper(Node *down_oper, Node *current_oper,
                                 bool flag) {
  bool make_operations = false;
  if (down_oper != nullptr) {
    if (down_oper->operation_.begin()->second >=
        current_oper->operation_.begin()->second) {
      make_operations = true;
    } else if (flag && valuesStack_.Size() > 1) {
      make_operations = true;
    }
    if (current_oper->operation_.begin()->first == "(") {
      make_operations = false;
    }
    if (make_operations) {
      double num1 = 0;
      double num2 = 0;
      if (singNumOperations_.find(down_oper->operation_.begin()->first) !=
          singNumOperations_.end()) {
        num2 = valuesStack_.Top().value_;
      } else {
        if (valuesStack_.Size() > 1) {
          num1 = valuesStack_.End().operator-(2).base()->value_;
          num2 = valuesStack_.End().operator-(1).base()->value_;
          valuesStack_.PopBack();
        } else {
          throw std::out_of_range("Error calculation!");
        }
      }
      ExecutionOperations(num1, num2, down_oper);
    }
  }
  return make_operations;
}
void Model::ExecutionOperations(double num1, double num2, Node *down_oper) {
  if (down_oper->operation_.begin()->first == "+") {
    valuesStack_.End().operator-(1).base()->value_ = num1 + num2;
  } else if (down_oper->operation_.begin()->first == "-") {
    valuesStack_.End().operator-(1).base()->value_ = num1 - num2;
  } else if (down_oper->operation_.begin()->first == "/") {
    valuesStack_.End().operator-(1).base()->value_ = num1 / num2;
  } else if (down_oper->operation_.begin()->first == "*") {
    valuesStack_.End().operator-(1).base()->value_ = num1 * num2;
  } else if (down_oper->operation_.begin()->first == "^") {
    valuesStack_.End().operator-(1).base()->value_ = pow(num1, num2);
  } else if (down_oper->operation_.begin()->first == "%") {
    valuesStack_.End().operator-(1).base()->value_ = fmod(num1, num2);
  } else if (down_oper->operation_.begin()->first == "cos") {
    valuesStack_.End().operator-(1).base()->value_ = cos(num2);
  } else if (down_oper->operation_.begin()->first == "sin") {
    valuesStack_.End().operator-(1).base()->value_ = sin(num2);
  } else if (down_oper->operation_.begin()->first == "tan") {
    valuesStack_.End().operator-(1).base()->value_ = tan(num2);
  } else if (down_oper->operation_.begin()->first == "acos") {
    valuesStack_.End().operator-(1).base()->value_ = acos(num2);
  } else if (down_oper->operation_.begin()->first == "asin") {
    valuesStack_.End().operator-(1).base()->value_ = asin(num2);
  } else if (down_oper->operation_.begin()->first == "atan") {
    valuesStack_.End().operator-(1).base()->value_ = atan(num2);
  } else if (down_oper->operation_.begin()->first == "sqrt") {
    valuesStack_.End().operator-(1).base()->value_ = sqrt(num2);
  } else if (down_oper->operation_.begin()->first == "ln") {
    valuesStack_.End().operator-(1).base()->value_ = log10(num2);
  } else if (down_oper->operation_.begin()->first == "log") {
    valuesStack_.End().operator-(1).base()->value_ = log(num2);
  }
}

// Helpers
bool Model::Validator(std::string str, int i) {
  string prev_oper;
  string curr_oper;

  bool start = false;
  if (!str.empty()) {
    prev_oper = FindOperation(&str[0]);
    curr_oper = FindOperation(&str[prev_oper.size()]);
    if (!prev_oper.empty() && !curr_oper.empty()) {
      if ((Contains(p_m_oper, prev_oper) && Contains(left_scobe, curr_oper)) ||
          (Contains(p_m_oper, prev_oper) && Contains(func, curr_oper)) ||
          (Contains(left_scobe, prev_oper) && Contains(func, curr_oper)) ||
          (Contains(func, prev_oper) && Contains(left_scobe, curr_oper)) ||
          (Contains(left_scobe, prev_oper) &&
           Contains(left_scobe, curr_oper)) ||
          (Contains(left_scobe, prev_oper) && Contains(p_m_oper, curr_oper))) {
        start = true;
      }
    } else if (!prev_oper.empty() && curr_oper.empty()) {
      if (Contains(p_m_oper, prev_oper) || Contains(left_scobe, prev_oper)) {
        start = true;
      }
    } else if (prev_oper.empty()) {
      start = true;
    }
  }

  bool mid = true;
  if (!str.empty()) {
    curr_oper = FindOperation(&str[i]);
    prev_oper = FindOperation(&str[i - 1]);
    if (!curr_oper.empty() && !prev_oper.empty()) {
      if ((Contains(oper, prev_oper) && Contains(right_scobe, curr_oper)) ||
          (Contains(left_scobe, prev_oper) &&
           Contains(other_oper, curr_oper)) ||
          (Contains(other_oper, prev_oper) &&
           Contains(other_oper, curr_oper)) ||
          (Contains(p_m_oper, prev_oper) && Contains(other_oper, curr_oper)) ||
          (Contains(right_scobe, prev_oper) &&
           Contains(left_scobe, curr_oper))) {
        mid = false;
      }
    }
  }

  bool end = true;
  curr_oper = FindOperation(&str[str.size() - 1]);
  if (!curr_oper.empty()) {
    if (!Contains(right_scobe, curr_oper)) {
      end = false;
    }
  }

  return (start && mid && end) ? true : false;
}
bool Model::Contains(std::vector<string> vec, std::string oper) {
  for (size_t i = 0; i < vec.size(); i++) {
    if (vec.at(i) == oper) {
      return true;
    }
  }
  return false;
}
size_t Model::SkipValue(std::string str) {
  bool dot = false;
  size_t step = 0;
  for (char c : str) {
    if (isdigit(c) || c == '.') {
      if (c == '.') {
        if (!dot) {
          dot = true;
        } else {
          break;
        }
      }
    } else {
      break;
    }
    step++;
  }
  return step;
}
std::string Model::FindOperation(std::string str) {
  std::string operation;
  for (int i = 0; i < 4; i++) {
    operation += str[i];
    std::map<std::string, int>::const_iterator it =
        priorityTable_.find(operation);
    if (it != priorityTable_.end()) {
      return operation;
    }
  }
  operation.clear();
  return operation;
}

#ifdef QT_MACRO
void Model::Concat(QLineEdit *lineEdit, const QString &src) {
  if (!lineEdit->text().isEmpty()) {
    char c = lineEdit->text().toStdString().back();
    string oper;
    oper.append({c});
    if (src == "+" || src == "-") {
      if (worksWithUnary_.find(string(oper)) != worksWithUnary_.end()) {
        lineEdit->setText(lineEdit->text() + "(");
      }
    }
  }
  lineEdit->setText(lineEdit->text() + src);
}
#endif