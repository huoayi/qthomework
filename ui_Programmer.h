/********************************************************************************
** Form generated from reading UI file 'Programmer.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRAMMER_H
#define UI_PROGRAMMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Programmer
{
public:
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_in;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_clear;
    QPushButton *btn_del;
    QPushButton *btn_div;
    QPushButton *btn_A;
    QPushButton *btn_B;
    QPushButton *btn_cal_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_7;
    QPushButton *btn_8;
    QPushButton *btn_9;
    QPushButton *btn_mult;
    QPushButton *btn_C;
    QPushButton *btn_cal_8;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_4;
    QPushButton *btn_5;
    QPushButton *btn_6;
    QPushButton *btn_sub;
    QPushButton *btn_D;
    QPushButton *btn_cal_10;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btn_1;
    QPushButton *btn_2;
    QPushButton *btn_3;
    QPushButton *btn_add;
    QPushButton *btn_E;
    QPushButton *btn_cal_16;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btn_sign;
    QPushButton *btn_0;
    QPushButton *btn_point;
    QPushButton *btn_equal;
    QPushButton *btn_F;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *btn_and;
    QPushButton *btn_or;
    QPushButton *btn_not;
    QPushButton *btn_nand;
    QPushButton *btn_nor;
    QPushButton *btn_right;
    QPushButton *btn_left;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QLineEdit *lineEdit_8;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QLineEdit *lineEdit_10;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_4;
    QLineEdit *lineEdit_16;

    void setupUi(QWidget *Programmer)
    {
        if (Programmer->objectName().isEmpty())
            Programmer->setObjectName(QString::fromUtf8("Programmer"));
        Programmer->resize(677, 709);
        gridLayout = new QGridLayout(Programmer);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit_in = new QLineEdit(Programmer);
        lineEdit_in->setObjectName(QString::fromUtf8("lineEdit_in"));
        lineEdit_in->setMinimumSize(QSize(0, 40));
        lineEdit_in->setReadOnly(true);

        gridLayout->addWidget(lineEdit_in, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_clear = new QPushButton(Programmer);
        btn_clear->setObjectName(QString::fromUtf8("btn_clear"));
        btn_clear->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(btn_clear);

        btn_del = new QPushButton(Programmer);
        btn_del->setObjectName(QString::fromUtf8("btn_del"));
        btn_del->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(btn_del);

        btn_div = new QPushButton(Programmer);
        btn_div->setObjectName(QString::fromUtf8("btn_div"));
        btn_div->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(btn_div);

        btn_A = new QPushButton(Programmer);
        btn_A->setObjectName(QString::fromUtf8("btn_A"));
        btn_A->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(btn_A);

        btn_B = new QPushButton(Programmer);
        btn_B->setObjectName(QString::fromUtf8("btn_B"));
        btn_B->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(btn_B);

        btn_cal_2 = new QPushButton(Programmer);
        btn_cal_2->setObjectName(QString::fromUtf8("btn_cal_2"));
        btn_cal_2->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(btn_cal_2);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btn_7 = new QPushButton(Programmer);
        btn_7->setObjectName(QString::fromUtf8("btn_7"));
        btn_7->setMinimumSize(QSize(0, 40));

        horizontalLayout_2->addWidget(btn_7);

        btn_8 = new QPushButton(Programmer);
        btn_8->setObjectName(QString::fromUtf8("btn_8"));
        btn_8->setMinimumSize(QSize(0, 40));

        horizontalLayout_2->addWidget(btn_8);

        btn_9 = new QPushButton(Programmer);
        btn_9->setObjectName(QString::fromUtf8("btn_9"));
        btn_9->setMinimumSize(QSize(0, 40));

        horizontalLayout_2->addWidget(btn_9);

        btn_mult = new QPushButton(Programmer);
        btn_mult->setObjectName(QString::fromUtf8("btn_mult"));
        btn_mult->setMinimumSize(QSize(0, 40));

        horizontalLayout_2->addWidget(btn_mult);

        btn_C = new QPushButton(Programmer);
        btn_C->setObjectName(QString::fromUtf8("btn_C"));
        btn_C->setMinimumSize(QSize(0, 40));

        horizontalLayout_2->addWidget(btn_C);

        btn_cal_8 = new QPushButton(Programmer);
        btn_cal_8->setObjectName(QString::fromUtf8("btn_cal_8"));
        btn_cal_8->setMinimumSize(QSize(0, 40));

        horizontalLayout_2->addWidget(btn_cal_8);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btn_4 = new QPushButton(Programmer);
        btn_4->setObjectName(QString::fromUtf8("btn_4"));
        btn_4->setMinimumSize(QSize(0, 40));

        horizontalLayout_3->addWidget(btn_4);

        btn_5 = new QPushButton(Programmer);
        btn_5->setObjectName(QString::fromUtf8("btn_5"));
        btn_5->setMinimumSize(QSize(0, 40));

        horizontalLayout_3->addWidget(btn_5);

        btn_6 = new QPushButton(Programmer);
        btn_6->setObjectName(QString::fromUtf8("btn_6"));
        btn_6->setMinimumSize(QSize(0, 40));

        horizontalLayout_3->addWidget(btn_6);

        btn_sub = new QPushButton(Programmer);
        btn_sub->setObjectName(QString::fromUtf8("btn_sub"));
        btn_sub->setMinimumSize(QSize(0, 40));

        horizontalLayout_3->addWidget(btn_sub);

        btn_D = new QPushButton(Programmer);
        btn_D->setObjectName(QString::fromUtf8("btn_D"));
        btn_D->setMinimumSize(QSize(0, 40));

        horizontalLayout_3->addWidget(btn_D);

        btn_cal_10 = new QPushButton(Programmer);
        btn_cal_10->setObjectName(QString::fromUtf8("btn_cal_10"));
        btn_cal_10->setMinimumSize(QSize(0, 40));

        horizontalLayout_3->addWidget(btn_cal_10);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        btn_1 = new QPushButton(Programmer);
        btn_1->setObjectName(QString::fromUtf8("btn_1"));
        btn_1->setMinimumSize(QSize(0, 40));

        horizontalLayout_4->addWidget(btn_1);

        btn_2 = new QPushButton(Programmer);
        btn_2->setObjectName(QString::fromUtf8("btn_2"));
        btn_2->setMinimumSize(QSize(0, 40));

        horizontalLayout_4->addWidget(btn_2);

        btn_3 = new QPushButton(Programmer);
        btn_3->setObjectName(QString::fromUtf8("btn_3"));
        btn_3->setMinimumSize(QSize(0, 40));

        horizontalLayout_4->addWidget(btn_3);

        btn_add = new QPushButton(Programmer);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));
        btn_add->setMinimumSize(QSize(0, 40));

        horizontalLayout_4->addWidget(btn_add);

        btn_E = new QPushButton(Programmer);
        btn_E->setObjectName(QString::fromUtf8("btn_E"));
        btn_E->setMinimumSize(QSize(0, 40));

        horizontalLayout_4->addWidget(btn_E);

        btn_cal_16 = new QPushButton(Programmer);
        btn_cal_16->setObjectName(QString::fromUtf8("btn_cal_16"));
        btn_cal_16->setMinimumSize(QSize(0, 40));

        horizontalLayout_4->addWidget(btn_cal_16);


        gridLayout->addLayout(horizontalLayout_4, 4, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        btn_sign = new QPushButton(Programmer);
        btn_sign->setObjectName(QString::fromUtf8("btn_sign"));
        btn_sign->setMinimumSize(QSize(0, 40));

        horizontalLayout_5->addWidget(btn_sign);

        btn_0 = new QPushButton(Programmer);
        btn_0->setObjectName(QString::fromUtf8("btn_0"));
        btn_0->setMinimumSize(QSize(0, 40));

        horizontalLayout_5->addWidget(btn_0);

        btn_point = new QPushButton(Programmer);
        btn_point->setObjectName(QString::fromUtf8("btn_point"));
        btn_point->setMinimumSize(QSize(0, 40));

        horizontalLayout_5->addWidget(btn_point);

        btn_equal = new QPushButton(Programmer);
        btn_equal->setObjectName(QString::fromUtf8("btn_equal"));
        btn_equal->setMinimumSize(QSize(0, 40));

        horizontalLayout_5->addWidget(btn_equal);

        btn_F = new QPushButton(Programmer);
        btn_F->setObjectName(QString::fromUtf8("btn_F"));
        btn_F->setMinimumSize(QSize(0, 40));

        horizontalLayout_5->addWidget(btn_F);


        gridLayout->addLayout(horizontalLayout_5, 5, 0, 1, 1);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        btn_and = new QPushButton(Programmer);
        btn_and->setObjectName(QString::fromUtf8("btn_and"));
        btn_and->setMinimumSize(QSize(0, 40));

        horizontalLayout_15->addWidget(btn_and);

        btn_or = new QPushButton(Programmer);
        btn_or->setObjectName(QString::fromUtf8("btn_or"));
        btn_or->setMinimumSize(QSize(0, 40));

        horizontalLayout_15->addWidget(btn_or);

        btn_not = new QPushButton(Programmer);
        btn_not->setObjectName(QString::fromUtf8("btn_not"));
        btn_not->setMinimumSize(QSize(0, 40));

        horizontalLayout_15->addWidget(btn_not);

        btn_nand = new QPushButton(Programmer);
        btn_nand->setObjectName(QString::fromUtf8("btn_nand"));
        btn_nand->setMinimumSize(QSize(0, 40));

        horizontalLayout_15->addWidget(btn_nand);

        btn_nor = new QPushButton(Programmer);
        btn_nor->setObjectName(QString::fromUtf8("btn_nor"));
        btn_nor->setMinimumSize(QSize(0, 40));

        horizontalLayout_15->addWidget(btn_nor);

        btn_right = new QPushButton(Programmer);
        btn_right->setObjectName(QString::fromUtf8("btn_right"));
        btn_right->setMinimumSize(QSize(0, 40));

        horizontalLayout_15->addWidget(btn_right);

        btn_left = new QPushButton(Programmer);
        btn_left->setObjectName(QString::fromUtf8("btn_left"));
        btn_left->setMinimumSize(QSize(0, 40));

        horizontalLayout_15->addWidget(btn_left);


        gridLayout->addLayout(horizontalLayout_15, 6, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label = new QLabel(Programmer);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_6->addWidget(label);

        lineEdit_2 = new QLineEdit(Programmer);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(0, 40));
        lineEdit_2->setReadOnly(true);

        horizontalLayout_6->addWidget(lineEdit_2);


        gridLayout->addLayout(horizontalLayout_6, 7, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_2 = new QLabel(Programmer);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_7->addWidget(label_2);

        lineEdit_8 = new QLineEdit(Programmer);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setMinimumSize(QSize(0, 40));
        lineEdit_8->setReadOnly(true);

        horizontalLayout_7->addWidget(lineEdit_8);


        gridLayout->addLayout(horizontalLayout_7, 8, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_3 = new QLabel(Programmer);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_8->addWidget(label_3);

        lineEdit_10 = new QLineEdit(Programmer);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setMinimumSize(QSize(0, 40));
        lineEdit_10->setReadOnly(true);

        horizontalLayout_8->addWidget(lineEdit_10);


        gridLayout->addLayout(horizontalLayout_8, 9, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_4 = new QLabel(Programmer);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_9->addWidget(label_4);

        lineEdit_16 = new QLineEdit(Programmer);
        lineEdit_16->setObjectName(QString::fromUtf8("lineEdit_16"));
        lineEdit_16->setMinimumSize(QSize(0, 40));
        lineEdit_16->setReadOnly(true);

        horizontalLayout_9->addWidget(lineEdit_16);


        gridLayout->addLayout(horizontalLayout_9, 10, 0, 1, 1);


        retranslateUi(Programmer);

        QMetaObject::connectSlotsByName(Programmer);
    } // setupUi

    void retranslateUi(QWidget *Programmer)
    {
        Programmer->setWindowTitle(QCoreApplication::translate("Programmer", "Form", nullptr));
        btn_clear->setText(QCoreApplication::translate("Programmer", "\346\270\205\351\231\244", nullptr));
        btn_del->setText(QCoreApplication::translate("Programmer", "\345\210\240\351\231\244", nullptr));
        btn_div->setText(QCoreApplication::translate("Programmer", "\303\267", nullptr));
        btn_A->setText(QCoreApplication::translate("Programmer", "A", nullptr));
        btn_B->setText(QCoreApplication::translate("Programmer", "B", nullptr));
        btn_cal_2->setText(QCoreApplication::translate("Programmer", "\344\272\214\350\277\233\345\210\266", nullptr));
        btn_7->setText(QCoreApplication::translate("Programmer", "7", nullptr));
        btn_8->setText(QCoreApplication::translate("Programmer", "8", nullptr));
        btn_9->setText(QCoreApplication::translate("Programmer", "9", nullptr));
        btn_mult->setText(QCoreApplication::translate("Programmer", "\303\227", nullptr));
        btn_C->setText(QCoreApplication::translate("Programmer", "C", nullptr));
        btn_cal_8->setText(QCoreApplication::translate("Programmer", "\345\205\253\350\277\233\345\210\266", nullptr));
        btn_4->setText(QCoreApplication::translate("Programmer", "4", nullptr));
        btn_5->setText(QCoreApplication::translate("Programmer", "5", nullptr));
        btn_6->setText(QCoreApplication::translate("Programmer", "6", nullptr));
        btn_sub->setText(QCoreApplication::translate("Programmer", "-", nullptr));
        btn_D->setText(QCoreApplication::translate("Programmer", "D", nullptr));
        btn_cal_10->setText(QCoreApplication::translate("Programmer", "\345\215\201\350\277\233\345\210\266", nullptr));
        btn_1->setText(QCoreApplication::translate("Programmer", "1", nullptr));
        btn_2->setText(QCoreApplication::translate("Programmer", "2", nullptr));
        btn_3->setText(QCoreApplication::translate("Programmer", "3", nullptr));
        btn_add->setText(QCoreApplication::translate("Programmer", "+", nullptr));
        btn_E->setText(QCoreApplication::translate("Programmer", "E", nullptr));
        btn_cal_16->setText(QCoreApplication::translate("Programmer", "\345\215\201\345\205\255\350\277\233\345\210\266", nullptr));
        btn_sign->setText(QCoreApplication::translate("Programmer", "+/-", nullptr));
        btn_0->setText(QCoreApplication::translate("Programmer", "0", nullptr));
        btn_point->setText(QCoreApplication::translate("Programmer", ".", nullptr));
        btn_equal->setText(QCoreApplication::translate("Programmer", "=", nullptr));
        btn_F->setText(QCoreApplication::translate("Programmer", "F", nullptr));
        btn_and->setText(QCoreApplication::translate("Programmer", "AND", nullptr));
        btn_or->setText(QCoreApplication::translate("Programmer", "OR", nullptr));
        btn_not->setText(QCoreApplication::translate("Programmer", "NOT", nullptr));
        btn_nand->setText(QCoreApplication::translate("Programmer", "NAND", nullptr));
        btn_nor->setText(QCoreApplication::translate("Programmer", "NOR", nullptr));
        btn_right->setText(QCoreApplication::translate("Programmer", ">>", nullptr));
        btn_left->setText(QCoreApplication::translate("Programmer", "<<", nullptr));
        label->setText(QCoreApplication::translate("Programmer", "\344\272\214\350\277\233\345\210\266\357\274\232  ", nullptr));
        label_2->setText(QCoreApplication::translate("Programmer", "\345\205\253\350\277\233\345\210\266\357\274\232  ", nullptr));
        label_3->setText(QCoreApplication::translate("Programmer", "\345\215\201\350\277\233\345\210\266\357\274\232  ", nullptr));
        label_4->setText(QCoreApplication::translate("Programmer", "\345\215\201\345\205\255\350\277\233\345\210\266\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Programmer: public Ui_Programmer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRAMMER_H
