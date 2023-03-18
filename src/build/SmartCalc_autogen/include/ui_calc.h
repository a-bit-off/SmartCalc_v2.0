/********************************************************************************
** Form generated from reading UI file 'calc.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALC_H
#define UI_CALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Calc
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton_atan;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_mod;
    QPushButton *pushButton_7;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_pow;
    QPushButton *pushButton_acos;
    QPushButton *pushButton_x;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_C;
    QPushButton *pushButton_div;
    QPushButton *pushButton_0;
    QPushButton *pushButton_ln;
    QCustomPlot *widget;
    QPushButton *pushButton_plus;
    QLineEdit *yBeginLine;
    QPushButton *pushButton_9;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_log;
    QPushButton *pushButton_1;
    QPushButton *pushButton_6;
    QPushButton *pushButton_eq;
    QPushButton *pushButton_5;
    QPushButton *pushButton_square_close;
    QPushButton *pushButton_8;
    QPushButton *pushButton_mult;
    QLineEdit *inputLine;
    QPushButton *pushButton_tan;
    QPushButton *pushButton_square_open;
    QLineEdit *yEndLine;
    QPushButton *pushButton_2;
    QPushButton *pushButton_asin;
    QLineEdit *xBeginLine;
    QLineEdit *xEndLine;

    void setupUi(QWidget *Calc)
    {
        if (Calc->objectName().isEmpty())
            Calc->setObjectName(QString::fromUtf8("Calc"));
        Calc->resize(1039, 383);
        gridLayout = new QGridLayout(Calc);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_atan = new QPushButton(Calc);
        pushButton_atan->setObjectName(QString::fromUtf8("pushButton_atan"));
        pushButton_atan->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 58, 74);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_atan, 7, 0, 1, 1);

        pushButton_cos = new QPushButton(Calc);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
        pushButton_cos->setSizeIncrement(QSize(0, 0));
        pushButton_cos->setBaseSize(QSize(0, 0));
        pushButton_cos->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 58, 74);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_cos, 2, 0, 1, 1);

        pushButton_sqrt = new QPushButton(Calc);
        pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));
        pushButton_sqrt->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 58, 74);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_sqrt, 7, 4, 1, 1);

        pushButton_mod = new QPushButton(Calc);
        pushButton_mod->setObjectName(QString::fromUtf8("pushButton_mod"));
        pushButton_mod->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 58, 74);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_mod, 6, 4, 1, 1);

        pushButton_7 = new QPushButton(Calc);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 70, 89);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_7, 3, 1, 1, 1);

        pushButton_minus = new QPushButton(Calc);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        pushButton_minus->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 58, 74);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_minus, 4, 5, 1, 1);

        pushButton_3 = new QPushButton(Calc);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 70, 89);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_3, 5, 4, 1, 1);

        pushButton_4 = new QPushButton(Calc);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 70, 89);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_4, 4, 1, 1, 1);

        pushButton_pow = new QPushButton(Calc);
        pushButton_pow->setObjectName(QString::fromUtf8("pushButton_pow"));
        pushButton_pow->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 58, 74);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_pow, 2, 1, 1, 1);

        pushButton_acos = new QPushButton(Calc);
        pushButton_acos->setObjectName(QString::fromUtf8("pushButton_acos"));
        pushButton_acos->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 58, 74);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_acos, 5, 0, 1, 1);

        pushButton_x = new QPushButton(Calc);
        pushButton_x->setObjectName(QString::fromUtf8("pushButton_x"));
        pushButton_x->setMinimumSize(QSize(85, 0));
        pushButton_x->setStyleSheet(QString::fromUtf8("background-color:rgb(76, 84, 108);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_x, 8, 0, 1, 1);

        pushButton_dot = new QPushButton(Calc);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        pushButton_dot->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 58, 74);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_dot, 6, 3, 1, 1);

        pushButton_C = new QPushButton(Calc);
        pushButton_C->setObjectName(QString::fromUtf8("pushButton_C"));
        pushButton_C->setStyleSheet(QString::fromUtf8("background-color:rgb(76, 84, 108);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_C, 2, 5, 1, 1);

        pushButton_div = new QPushButton(Calc);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
        pushButton_div->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 58, 74);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_div, 6, 5, 1, 1);

        pushButton_0 = new QPushButton(Calc);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 70, 89);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_0, 6, 1, 1, 1);

        pushButton_ln = new QPushButton(Calc);
        pushButton_ln->setObjectName(QString::fromUtf8("pushButton_ln"));
        pushButton_ln->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 58, 74);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_ln, 7, 3, 1, 1);

        widget = new QCustomPlot(Calc);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(500, 0));

        gridLayout->addWidget(widget, 0, 6, 9, 1);

        pushButton_plus = new QPushButton(Calc);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        pushButton_plus->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 58, 74);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_plus, 3, 5, 1, 1);

        yBeginLine = new QLineEdit(Calc);
        yBeginLine->setObjectName(QString::fromUtf8("yBeginLine"));
        yBeginLine->setMouseTracking(true);
        yBeginLine->setFocusPolicy(Qt::ClickFocus);

        gridLayout->addWidget(yBeginLine, 8, 4, 1, 1);

        pushButton_9 = new QPushButton(Calc);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 70, 89);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_9, 3, 4, 1, 1);

        pushButton_sin = new QPushButton(Calc);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        pushButton_sin->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 58, 74);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_sin, 3, 0, 1, 1);

        pushButton_log = new QPushButton(Calc);
        pushButton_log->setObjectName(QString::fromUtf8("pushButton_log"));
        pushButton_log->setMouseTracking(true);
        pushButton_log->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 58, 74);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_log, 7, 1, 1, 1);

        pushButton_1 = new QPushButton(Calc);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 70, 89);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_1, 5, 1, 1, 1);

        pushButton_6 = new QPushButton(Calc);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 70, 89);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_6, 4, 4, 1, 1);

        pushButton_eq = new QPushButton(Calc);
        pushButton_eq->setObjectName(QString::fromUtf8("pushButton_eq"));
        pushButton_eq->setStyleSheet(QString::fromUtf8("background-color:rgb(76, 84, 108);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_eq, 7, 5, 1, 1);

        pushButton_5 = new QPushButton(Calc);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 70, 89);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_5, 4, 3, 1, 1);

        pushButton_square_close = new QPushButton(Calc);
        pushButton_square_close->setObjectName(QString::fromUtf8("pushButton_square_close"));
        pushButton_square_close->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 58, 74);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_square_close, 2, 4, 1, 1);

        pushButton_8 = new QPushButton(Calc);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 70, 89);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_8, 3, 3, 1, 1);

        pushButton_mult = new QPushButton(Calc);
        pushButton_mult->setObjectName(QString::fromUtf8("pushButton_mult"));
        pushButton_mult->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 58, 74);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_mult, 5, 5, 1, 1);

        inputLine = new QLineEdit(Calc);
        inputLine->setObjectName(QString::fromUtf8("inputLine"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(inputLine->sizePolicy().hasHeightForWidth());
        inputLine->setSizePolicy(sizePolicy);
        inputLine->setMaximumSize(QSize(16777215, 55));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(16);
        font.setBold(false);
        font.setKerning(true);
        inputLine->setFont(font);
        inputLine->setInputMethodHints(Qt::ImhNone);
        inputLine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        inputLine->setDragEnabled(false);
        inputLine->setReadOnly(true);

        gridLayout->addWidget(inputLine, 1, 0, 1, 6);

        pushButton_tan = new QPushButton(Calc);
        pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));
        pushButton_tan->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 58, 74);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_tan, 4, 0, 1, 1);

        pushButton_square_open = new QPushButton(Calc);
        pushButton_square_open->setObjectName(QString::fromUtf8("pushButton_square_open"));
        pushButton_square_open->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 58, 74);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_square_open, 2, 3, 1, 1);

        yEndLine = new QLineEdit(Calc);
        yEndLine->setObjectName(QString::fromUtf8("yEndLine"));
        yEndLine->setMouseTracking(true);
        yEndLine->setFocusPolicy(Qt::ClickFocus);

        gridLayout->addWidget(yEndLine, 8, 5, 1, 1);

        pushButton_2 = new QPushButton(Calc);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 70, 89);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_2, 5, 3, 1, 1);

        pushButton_asin = new QPushButton(Calc);
        pushButton_asin->setObjectName(QString::fromUtf8("pushButton_asin"));
        pushButton_asin->setStyleSheet(QString::fromUtf8("background-color: rgb(52, 58, 74);\n"
"border-width: 1px;\n"
"border-radius: 7px;\n"
"color:rgb(174, 198, 255);\n"
"height: 25px;"));

        gridLayout->addWidget(pushButton_asin, 6, 0, 1, 1);

        xBeginLine = new QLineEdit(Calc);
        xBeginLine->setObjectName(QString::fromUtf8("xBeginLine"));
        xBeginLine->setMouseTracking(true);
        xBeginLine->setFocusPolicy(Qt::ClickFocus);

        gridLayout->addWidget(xBeginLine, 8, 1, 1, 1);

        xEndLine = new QLineEdit(Calc);
        xEndLine->setObjectName(QString::fromUtf8("xEndLine"));
        xEndLine->setMouseTracking(true);
        xEndLine->setFocusPolicy(Qt::ClickFocus);

        gridLayout->addWidget(xEndLine, 8, 3, 1, 1);


        retranslateUi(Calc);

        QMetaObject::connectSlotsByName(Calc);
    } // setupUi

    void retranslateUi(QWidget *Calc)
    {
        Calc->setWindowTitle(QCoreApplication::translate("Calc", "SmartCalculator", nullptr));
        pushButton_atan->setText(QCoreApplication::translate("Calc", "atan", nullptr));
        pushButton_cos->setText(QCoreApplication::translate("Calc", "cos", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("Calc", "sqrt", nullptr));
        pushButton_mod->setText(QCoreApplication::translate("Calc", "%", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Calc", "7", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("Calc", "-", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Calc", "3", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Calc", "4", nullptr));
        pushButton_pow->setText(QCoreApplication::translate("Calc", "^", nullptr));
        pushButton_acos->setText(QCoreApplication::translate("Calc", "acos", nullptr));
        pushButton_x->setText(QCoreApplication::translate("Calc", "x", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("Calc", ".", nullptr));
        pushButton_C->setText(QCoreApplication::translate("Calc", "C", nullptr));
        pushButton_div->setText(QCoreApplication::translate("Calc", "/", nullptr));
        pushButton_0->setText(QCoreApplication::translate("Calc", "0", nullptr));
        pushButton_ln->setText(QCoreApplication::translate("Calc", "ln", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("Calc", "+", nullptr));
        yBeginLine->setText(QString());
        yBeginLine->setPlaceholderText(QCoreApplication::translate("Calc", "Y: begin", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Calc", "9", nullptr));
        pushButton_sin->setText(QCoreApplication::translate("Calc", "sin", nullptr));
        pushButton_log->setText(QCoreApplication::translate("Calc", "log", nullptr));
        pushButton_1->setText(QCoreApplication::translate("Calc", "1", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Calc", "6", nullptr));
        pushButton_eq->setText(QCoreApplication::translate("Calc", "=", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Calc", "5", nullptr));
        pushButton_square_close->setText(QCoreApplication::translate("Calc", ")", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Calc", "8", nullptr));
        pushButton_mult->setText(QCoreApplication::translate("Calc", "*", nullptr));
        inputLine->setText(QString());
        pushButton_tan->setText(QCoreApplication::translate("Calc", "tan", nullptr));
        pushButton_square_open->setText(QCoreApplication::translate("Calc", "(", nullptr));
        yEndLine->setText(QString());
        yEndLine->setPlaceholderText(QCoreApplication::translate("Calc", "Y: end", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Calc", "2", nullptr));
        pushButton_asin->setText(QCoreApplication::translate("Calc", "asin", nullptr));
        xBeginLine->setText(QString());
        xBeginLine->setPlaceholderText(QCoreApplication::translate("Calc", "X: begin", nullptr));
        xEndLine->setText(QString());
        xEndLine->setPlaceholderText(QCoreApplication::translate("Calc", "X: end", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calc: public Ui_Calc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALC_H
