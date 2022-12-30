/********************************************************************************
** Form generated from reading UI file 'Science.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCIENCE_H
#define UI_SCIENCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Science
{
public:
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_in;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_clear;
    QPushButton *btn_del;
    QPushButton *btn_div;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_7;
    QPushButton *btn_8;
    QPushButton *btn_9;
    QPushButton *btn_mult;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_4;
    QPushButton *btn_5;
    QPushButton *btn_6;
    QPushButton *btn_sub;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btn_1;
    QPushButton *btn_2;
    QPushButton *btn_3;
    QPushButton *btn_add;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btn_sign;
    QPushButton *btn_0;
    QPushButton *btn_point;
    QPushButton *btn_equal;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *btn_sin;
    QPushButton *btn_cos;
    QPushButton *btn_tan;
    QPushButton *btn_equal_sec;
    QPushButton *btn_csc;
    QPushButton *btn_cot;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *btn_x2;
    QPushButton *btn_2x;
    QPushButton *btn_xy;
    QPushButton *btn_10x;
    QPushButton *btn_log;
    QPushButton *btn_ln;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *btn_x3;
    QPushButton *btn_3x;
    QPushButton *btn_yx;
    QPushButton *btn_mod;
    QPushButton *btn_logyx;
    QPushButton *btn_ex;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *btn_1x;
    QPushButton *btn_xx;
    QPushButton *btn_exp;
    QPushButton *btn_n;
    QPushButton *btn_pI;
    QPushButton *btn_e;

    void setupUi(QWidget *Science)
    {
        if (Science->objectName().isEmpty())
            Science->setObjectName(QString::fromUtf8("Science"));
        Science->resize(420, 548);
        gridLayout = new QGridLayout(Science);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit_in = new QLineEdit(Science);
        lineEdit_in->setObjectName(QString::fromUtf8("lineEdit_in"));
        lineEdit_in->setMinimumSize(QSize(0, 40));
        lineEdit_in->setReadOnly(true);

        gridLayout->addWidget(lineEdit_in, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_clear = new QPushButton(Science);
        btn_clear->setObjectName(QString::fromUtf8("btn_clear"));
        btn_clear->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(btn_clear);

        btn_del = new QPushButton(Science);
        btn_del->setObjectName(QString::fromUtf8("btn_del"));
        btn_del->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(btn_del);

        btn_div = new QPushButton(Science);
        btn_div->setObjectName(QString::fromUtf8("btn_div"));
        btn_div->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(btn_div);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btn_7 = new QPushButton(Science);
        btn_7->setObjectName(QString::fromUtf8("btn_7"));
        btn_7->setMinimumSize(QSize(0, 40));

        horizontalLayout_2->addWidget(btn_7);

        btn_8 = new QPushButton(Science);
        btn_8->setObjectName(QString::fromUtf8("btn_8"));
        btn_8->setMinimumSize(QSize(0, 40));

        horizontalLayout_2->addWidget(btn_8);

        btn_9 = new QPushButton(Science);
        btn_9->setObjectName(QString::fromUtf8("btn_9"));
        btn_9->setMinimumSize(QSize(0, 40));

        horizontalLayout_2->addWidget(btn_9);

        btn_mult = new QPushButton(Science);
        btn_mult->setObjectName(QString::fromUtf8("btn_mult"));
        btn_mult->setMinimumSize(QSize(0, 40));

        horizontalLayout_2->addWidget(btn_mult);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btn_4 = new QPushButton(Science);
        btn_4->setObjectName(QString::fromUtf8("btn_4"));
        btn_4->setMinimumSize(QSize(0, 40));

        horizontalLayout_3->addWidget(btn_4);

        btn_5 = new QPushButton(Science);
        btn_5->setObjectName(QString::fromUtf8("btn_5"));
        btn_5->setMinimumSize(QSize(0, 40));

        horizontalLayout_3->addWidget(btn_5);

        btn_6 = new QPushButton(Science);
        btn_6->setObjectName(QString::fromUtf8("btn_6"));
        btn_6->setMinimumSize(QSize(0, 40));

        horizontalLayout_3->addWidget(btn_6);

        btn_sub = new QPushButton(Science);
        btn_sub->setObjectName(QString::fromUtf8("btn_sub"));
        btn_sub->setMinimumSize(QSize(0, 40));

        horizontalLayout_3->addWidget(btn_sub);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        btn_1 = new QPushButton(Science);
        btn_1->setObjectName(QString::fromUtf8("btn_1"));
        btn_1->setMinimumSize(QSize(0, 40));

        horizontalLayout_4->addWidget(btn_1);

        btn_2 = new QPushButton(Science);
        btn_2->setObjectName(QString::fromUtf8("btn_2"));
        btn_2->setMinimumSize(QSize(0, 40));

        horizontalLayout_4->addWidget(btn_2);

        btn_3 = new QPushButton(Science);
        btn_3->setObjectName(QString::fromUtf8("btn_3"));
        btn_3->setMinimumSize(QSize(0, 40));

        horizontalLayout_4->addWidget(btn_3);

        btn_add = new QPushButton(Science);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));
        btn_add->setMinimumSize(QSize(0, 40));

        horizontalLayout_4->addWidget(btn_add);


        gridLayout->addLayout(horizontalLayout_4, 4, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        btn_sign = new QPushButton(Science);
        btn_sign->setObjectName(QString::fromUtf8("btn_sign"));
        btn_sign->setMinimumSize(QSize(0, 40));

        horizontalLayout_5->addWidget(btn_sign);

        btn_0 = new QPushButton(Science);
        btn_0->setObjectName(QString::fromUtf8("btn_0"));
        btn_0->setMinimumSize(QSize(0, 40));

        horizontalLayout_5->addWidget(btn_0);

        btn_point = new QPushButton(Science);
        btn_point->setObjectName(QString::fromUtf8("btn_point"));
        btn_point->setMinimumSize(QSize(0, 40));

        horizontalLayout_5->addWidget(btn_point);

        btn_equal = new QPushButton(Science);
        btn_equal->setObjectName(QString::fromUtf8("btn_equal"));
        btn_equal->setMinimumSize(QSize(0, 40));

        horizontalLayout_5->addWidget(btn_equal);


        gridLayout->addLayout(horizontalLayout_5, 5, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        btn_sin = new QPushButton(Science);
        btn_sin->setObjectName(QString::fromUtf8("btn_sin"));
        btn_sin->setMinimumSize(QSize(0, 40));
        btn_sin->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_6->addWidget(btn_sin);

        btn_cos = new QPushButton(Science);
        btn_cos->setObjectName(QString::fromUtf8("btn_cos"));
        btn_cos->setMinimumSize(QSize(0, 40));
        btn_cos->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_6->addWidget(btn_cos);

        btn_tan = new QPushButton(Science);
        btn_tan->setObjectName(QString::fromUtf8("btn_tan"));
        btn_tan->setMinimumSize(QSize(0, 40));
        btn_tan->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_6->addWidget(btn_tan);

        btn_equal_sec = new QPushButton(Science);
        btn_equal_sec->setObjectName(QString::fromUtf8("btn_equal_sec"));
        btn_equal_sec->setMinimumSize(QSize(0, 40));
        btn_equal_sec->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_6->addWidget(btn_equal_sec);

        btn_csc = new QPushButton(Science);
        btn_csc->setObjectName(QString::fromUtf8("btn_csc"));
        btn_csc->setMinimumSize(QSize(0, 40));
        btn_csc->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_6->addWidget(btn_csc);

        btn_cot = new QPushButton(Science);
        btn_cot->setObjectName(QString::fromUtf8("btn_cot"));
        btn_cot->setMinimumSize(QSize(0, 40));
        btn_cot->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_6->addWidget(btn_cot);


        gridLayout->addLayout(horizontalLayout_6, 6, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        btn_x2 = new QPushButton(Science);
        btn_x2->setObjectName(QString::fromUtf8("btn_x2"));
        btn_x2->setMinimumSize(QSize(0, 40));
        btn_x2->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_7->addWidget(btn_x2);

        btn_2x = new QPushButton(Science);
        btn_2x->setObjectName(QString::fromUtf8("btn_2x"));
        btn_2x->setMinimumSize(QSize(0, 40));
        btn_2x->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_7->addWidget(btn_2x);

        btn_xy = new QPushButton(Science);
        btn_xy->setObjectName(QString::fromUtf8("btn_xy"));
        btn_xy->setMinimumSize(QSize(0, 40));
        btn_xy->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_7->addWidget(btn_xy);

        btn_10x = new QPushButton(Science);
        btn_10x->setObjectName(QString::fromUtf8("btn_10x"));
        btn_10x->setMinimumSize(QSize(0, 40));
        btn_10x->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_7->addWidget(btn_10x);

        btn_log = new QPushButton(Science);
        btn_log->setObjectName(QString::fromUtf8("btn_log"));
        btn_log->setMinimumSize(QSize(0, 40));
        btn_log->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_7->addWidget(btn_log);

        btn_ln = new QPushButton(Science);
        btn_ln->setObjectName(QString::fromUtf8("btn_ln"));
        btn_ln->setMinimumSize(QSize(0, 40));
        btn_ln->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_7->addWidget(btn_ln);


        gridLayout->addLayout(horizontalLayout_7, 7, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        btn_x3 = new QPushButton(Science);
        btn_x3->setObjectName(QString::fromUtf8("btn_x3"));
        btn_x3->setMinimumSize(QSize(0, 40));
        btn_x3->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_8->addWidget(btn_x3);

        btn_3x = new QPushButton(Science);
        btn_3x->setObjectName(QString::fromUtf8("btn_3x"));
        btn_3x->setMinimumSize(QSize(0, 40));
        btn_3x->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_8->addWidget(btn_3x);

        btn_yx = new QPushButton(Science);
        btn_yx->setObjectName(QString::fromUtf8("btn_yx"));
        btn_yx->setMinimumSize(QSize(0, 40));
        btn_yx->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_8->addWidget(btn_yx);

        btn_mod = new QPushButton(Science);
        btn_mod->setObjectName(QString::fromUtf8("btn_mod"));
        btn_mod->setMinimumSize(QSize(0, 40));
        btn_mod->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_8->addWidget(btn_mod);

        btn_logyx = new QPushButton(Science);
        btn_logyx->setObjectName(QString::fromUtf8("btn_logyx"));
        btn_logyx->setMinimumSize(QSize(0, 40));
        btn_logyx->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_8->addWidget(btn_logyx);

        btn_ex = new QPushButton(Science);
        btn_ex->setObjectName(QString::fromUtf8("btn_ex"));
        btn_ex->setMinimumSize(QSize(0, 40));
        btn_ex->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_8->addWidget(btn_ex);


        gridLayout->addLayout(horizontalLayout_8, 8, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        btn_1x = new QPushButton(Science);
        btn_1x->setObjectName(QString::fromUtf8("btn_1x"));
        btn_1x->setMinimumSize(QSize(0, 40));
        btn_1x->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_9->addWidget(btn_1x);

        btn_xx = new QPushButton(Science);
        btn_xx->setObjectName(QString::fromUtf8("btn_xx"));
        btn_xx->setMinimumSize(QSize(0, 40));
        btn_xx->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_9->addWidget(btn_xx);

        btn_exp = new QPushButton(Science);
        btn_exp->setObjectName(QString::fromUtf8("btn_exp"));
        btn_exp->setMinimumSize(QSize(0, 40));
        btn_exp->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_9->addWidget(btn_exp);

        btn_n = new QPushButton(Science);
        btn_n->setObjectName(QString::fromUtf8("btn_n"));
        btn_n->setMinimumSize(QSize(0, 40));
        btn_n->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_9->addWidget(btn_n);

        btn_pI = new QPushButton(Science);
        btn_pI->setObjectName(QString::fromUtf8("btn_pI"));
        btn_pI->setMinimumSize(QSize(0, 40));
        btn_pI->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_9->addWidget(btn_pI);

        btn_e = new QPushButton(Science);
        btn_e->setObjectName(QString::fromUtf8("btn_e"));
        btn_e->setMinimumSize(QSize(0, 40));
        btn_e->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_9->addWidget(btn_e);


        gridLayout->addLayout(horizontalLayout_9, 9, 0, 1, 1);


        retranslateUi(Science);

        QMetaObject::connectSlotsByName(Science);
    } // setupUi

    void retranslateUi(QWidget *Science)
    {
        Science->setWindowTitle(QCoreApplication::translate("Science", "Form", nullptr));
        btn_clear->setText(QCoreApplication::translate("Science", "\346\270\205\351\231\244", nullptr));
        btn_del->setText(QCoreApplication::translate("Science", "\345\210\240\351\231\244", nullptr));
        btn_div->setText(QCoreApplication::translate("Science", "\303\267", nullptr));
        btn_7->setText(QCoreApplication::translate("Science", "7", nullptr));
        btn_8->setText(QCoreApplication::translate("Science", "8", nullptr));
        btn_9->setText(QCoreApplication::translate("Science", "9", nullptr));
        btn_mult->setText(QCoreApplication::translate("Science", "\303\227", nullptr));
        btn_4->setText(QCoreApplication::translate("Science", "4", nullptr));
        btn_5->setText(QCoreApplication::translate("Science", "5", nullptr));
        btn_6->setText(QCoreApplication::translate("Science", "6", nullptr));
        btn_sub->setText(QCoreApplication::translate("Science", "-", nullptr));
        btn_1->setText(QCoreApplication::translate("Science", "1", nullptr));
        btn_2->setText(QCoreApplication::translate("Science", "2", nullptr));
        btn_3->setText(QCoreApplication::translate("Science", "3", nullptr));
        btn_add->setText(QCoreApplication::translate("Science", "+", nullptr));
        btn_sign->setText(QCoreApplication::translate("Science", "+/-", nullptr));
        btn_0->setText(QCoreApplication::translate("Science", "0", nullptr));
        btn_point->setText(QCoreApplication::translate("Science", ".", nullptr));
        btn_equal->setText(QCoreApplication::translate("Science", "=", nullptr));
        btn_sin->setText(QCoreApplication::translate("Science", "sin", nullptr));
        btn_cos->setText(QCoreApplication::translate("Science", "cos", nullptr));
        btn_tan->setText(QCoreApplication::translate("Science", "tan", nullptr));
        btn_equal_sec->setText(QCoreApplication::translate("Science", "sec", nullptr));
        btn_csc->setText(QCoreApplication::translate("Science", "csc", nullptr));
        btn_cot->setText(QCoreApplication::translate("Science", "cot", nullptr));
        btn_x2->setText(QCoreApplication::translate("Science", "x`2", nullptr));
        btn_2x->setText(QCoreApplication::translate("Science", "2`x", nullptr));
        btn_xy->setText(QCoreApplication::translate("Science", "x`y", nullptr));
        btn_10x->setText(QCoreApplication::translate("Science", "10`x", nullptr));
        btn_log->setText(QCoreApplication::translate("Science", "log", nullptr));
        btn_ln->setText(QCoreApplication::translate("Science", "ln", nullptr));
        btn_x3->setText(QCoreApplication::translate("Science", "x`3", nullptr));
        btn_3x->setText(QCoreApplication::translate("Science", "3`x", nullptr));
        btn_yx->setText(QCoreApplication::translate("Science", "y`x", nullptr));
        btn_mod->setText(QCoreApplication::translate("Science", "mod", nullptr));
        btn_logyx->setText(QCoreApplication::translate("Science", "logy`x", nullptr));
        btn_ex->setText(QCoreApplication::translate("Science", "e`x", nullptr));
        btn_1x->setText(QCoreApplication::translate("Science", "1/x", nullptr));
        btn_xx->setText(QCoreApplication::translate("Science", "|x|", nullptr));
        btn_exp->setText(QCoreApplication::translate("Science", "exp", nullptr));
        btn_n->setText(QCoreApplication::translate("Science", "n!", nullptr));
        btn_pI->setText(QCoreApplication::translate("Science", "\317\200", nullptr));
        btn_e->setText(QCoreApplication::translate("Science", "e", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Science: public Ui_Science {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCIENCE_H
