/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QApplication>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QSpacerItem>
#include <QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
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
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer;
    QLabel *label_time;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(629, 642);
        gridLayout = new QGridLayout(Form);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit_in = new QLineEdit(Form);
        lineEdit_in->setObjectName(QString::fromUtf8("lineEdit_in"));
        lineEdit_in->setMinimumSize(QSize(0, 40));
        lineEdit_in->setReadOnly(true);

        gridLayout->addWidget(lineEdit_in, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_clear = new QPushButton(Form);
        btn_clear->setObjectName(QString::fromUtf8("btn_clear"));
        btn_clear->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(btn_clear);

        btn_del = new QPushButton(Form);
        btn_del->setObjectName(QString::fromUtf8("btn_del"));
        btn_del->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(btn_del);

        btn_div = new QPushButton(Form);
        btn_div->setObjectName(QString::fromUtf8("btn_div"));
        btn_div->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(btn_div);

        btn_A = new QPushButton(Form);
        btn_A->setObjectName(QString::fromUtf8("btn_A"));
        btn_A->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(btn_A);

        btn_B = new QPushButton(Form);
        btn_B->setObjectName(QString::fromUtf8("btn_B"));
        btn_B->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(btn_B);

        btn_cal_2 = new QPushButton(Form);
        btn_cal_2->setObjectName(QString::fromUtf8("btn_cal_2"));
        btn_cal_2->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(btn_cal_2);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btn_7 = new QPushButton(Form);
        btn_7->setObjectName(QString::fromUtf8("btn_7"));
        btn_7->setMinimumSize(QSize(0, 40));

        horizontalLayout_2->addWidget(btn_7);

        btn_8 = new QPushButton(Form);
        btn_8->setObjectName(QString::fromUtf8("btn_8"));
        btn_8->setMinimumSize(QSize(0, 40));

        horizontalLayout_2->addWidget(btn_8);

        btn_9 = new QPushButton(Form);
        btn_9->setObjectName(QString::fromUtf8("btn_9"));
        btn_9->setMinimumSize(QSize(0, 40));

        horizontalLayout_2->addWidget(btn_9);

        btn_mult = new QPushButton(Form);
        btn_mult->setObjectName(QString::fromUtf8("btn_mult"));
        btn_mult->setMinimumSize(QSize(0, 40));

        horizontalLayout_2->addWidget(btn_mult);

        btn_C = new QPushButton(Form);
        btn_C->setObjectName(QString::fromUtf8("btn_C"));
        btn_C->setMinimumSize(QSize(0, 40));

        horizontalLayout_2->addWidget(btn_C);

        btn_cal_8 = new QPushButton(Form);
        btn_cal_8->setObjectName(QString::fromUtf8("btn_cal_8"));
        btn_cal_8->setMinimumSize(QSize(0, 40));

        horizontalLayout_2->addWidget(btn_cal_8);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btn_4 = new QPushButton(Form);
        btn_4->setObjectName(QString::fromUtf8("btn_4"));
        btn_4->setMinimumSize(QSize(0, 40));

        horizontalLayout_3->addWidget(btn_4);

        btn_5 = new QPushButton(Form);
        btn_5->setObjectName(QString::fromUtf8("btn_5"));
        btn_5->setMinimumSize(QSize(0, 40));

        horizontalLayout_3->addWidget(btn_5);

        btn_6 = new QPushButton(Form);
        btn_6->setObjectName(QString::fromUtf8("btn_6"));
        btn_6->setMinimumSize(QSize(0, 40));

        horizontalLayout_3->addWidget(btn_6);

        btn_sub = new QPushButton(Form);
        btn_sub->setObjectName(QString::fromUtf8("btn_sub"));
        btn_sub->setMinimumSize(QSize(0, 40));

        horizontalLayout_3->addWidget(btn_sub);

        btn_D = new QPushButton(Form);
        btn_D->setObjectName(QString::fromUtf8("btn_D"));
        btn_D->setMinimumSize(QSize(0, 40));

        horizontalLayout_3->addWidget(btn_D);

        btn_cal_10 = new QPushButton(Form);
        btn_cal_10->setObjectName(QString::fromUtf8("btn_cal_10"));
        btn_cal_10->setMinimumSize(QSize(0, 40));

        horizontalLayout_3->addWidget(btn_cal_10);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        btn_1 = new QPushButton(Form);
        btn_1->setObjectName(QString::fromUtf8("btn_1"));
        btn_1->setMinimumSize(QSize(0, 40));

        horizontalLayout_4->addWidget(btn_1);

        btn_2 = new QPushButton(Form);
        btn_2->setObjectName(QString::fromUtf8("btn_2"));
        btn_2->setMinimumSize(QSize(0, 40));

        horizontalLayout_4->addWidget(btn_2);

        btn_3 = new QPushButton(Form);
        btn_3->setObjectName(QString::fromUtf8("btn_3"));
        btn_3->setMinimumSize(QSize(0, 40));

        horizontalLayout_4->addWidget(btn_3);

        btn_add = new QPushButton(Form);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));
        btn_add->setMinimumSize(QSize(0, 40));

        horizontalLayout_4->addWidget(btn_add);

        btn_E = new QPushButton(Form);
        btn_E->setObjectName(QString::fromUtf8("btn_E"));
        btn_E->setMinimumSize(QSize(0, 40));

        horizontalLayout_4->addWidget(btn_E);

        btn_cal_16 = new QPushButton(Form);
        btn_cal_16->setObjectName(QString::fromUtf8("btn_cal_16"));
        btn_cal_16->setMinimumSize(QSize(0, 40));

        horizontalLayout_4->addWidget(btn_cal_16);


        gridLayout->addLayout(horizontalLayout_4, 4, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        btn_sign = new QPushButton(Form);
        btn_sign->setObjectName(QString::fromUtf8("btn_sign"));
        btn_sign->setMinimumSize(QSize(0, 40));

        horizontalLayout_5->addWidget(btn_sign);

        btn_0 = new QPushButton(Form);
        btn_0->setObjectName(QString::fromUtf8("btn_0"));
        btn_0->setMinimumSize(QSize(0, 40));

        horizontalLayout_5->addWidget(btn_0);

        btn_point = new QPushButton(Form);
        btn_point->setObjectName(QString::fromUtf8("btn_point"));
        btn_point->setMinimumSize(QSize(0, 40));

        horizontalLayout_5->addWidget(btn_point);

        btn_equal = new QPushButton(Form);
        btn_equal->setObjectName(QString::fromUtf8("btn_equal"));
        btn_equal->setMinimumSize(QSize(0, 40));

        horizontalLayout_5->addWidget(btn_equal);

        btn_F = new QPushButton(Form);
        btn_F->setObjectName(QString::fromUtf8("btn_F"));
        btn_F->setMinimumSize(QSize(0, 40));

        horizontalLayout_5->addWidget(btn_F);


        gridLayout->addLayout(horizontalLayout_5, 5, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label = new QLabel(Form);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_6->addWidget(label);

        lineEdit_2 = new QLineEdit(Form);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(0, 40));
        lineEdit_2->setReadOnly(true);

        horizontalLayout_6->addWidget(lineEdit_2);


        gridLayout->addLayout(horizontalLayout_6, 6, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_2 = new QLabel(Form);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_7->addWidget(label_2);

        lineEdit_8 = new QLineEdit(Form);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setMinimumSize(QSize(0, 40));
        lineEdit_8->setReadOnly(true);

        horizontalLayout_7->addWidget(lineEdit_8);


        gridLayout->addLayout(horizontalLayout_7, 7, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_3 = new QLabel(Form);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_8->addWidget(label_3);

        lineEdit_10 = new QLineEdit(Form);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setMinimumSize(QSize(0, 40));
        lineEdit_10->setReadOnly(true);

        horizontalLayout_8->addWidget(lineEdit_10);


        gridLayout->addLayout(horizontalLayout_8, 8, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_4 = new QLabel(Form);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_9->addWidget(label_4);

        lineEdit_16 = new QLineEdit(Form);
        lineEdit_16->setObjectName(QString::fromUtf8("lineEdit_16"));
        lineEdit_16->setMinimumSize(QSize(0, 40));
        lineEdit_16->setReadOnly(true);

        horizontalLayout_9->addWidget(lineEdit_16);


        gridLayout->addLayout(horizontalLayout_9, 9, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer);

        label_time = new QLabel(Form);
        label_time->setObjectName(QString::fromUtf8("label_time"));
        label_time->setMaximumSize(QSize(16777215, 50));
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        label_time->setFont(font);

        horizontalLayout_10->addWidget(label_time);


        gridLayout->addLayout(horizontalLayout_10, 10, 0, 1, 1);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        btn_clear->setText(QCoreApplication::translate("Form", "\346\270\205\351\231\244", nullptr));
        btn_del->setText(QCoreApplication::translate("Form", "\345\210\240\351\231\244", nullptr));
        btn_div->setText(QCoreApplication::translate("Form", "\303\267", nullptr));
        btn_A->setText(QCoreApplication::translate("Form", "A", nullptr));
        btn_B->setText(QCoreApplication::translate("Form", "B", nullptr));
        btn_cal_2->setText(QCoreApplication::translate("Form", "\344\272\214\350\277\233\345\210\266", nullptr));
        btn_7->setText(QCoreApplication::translate("Form", "7", nullptr));
        btn_8->setText(QCoreApplication::translate("Form", "8", nullptr));
        btn_9->setText(QCoreApplication::translate("Form", "9", nullptr));
        btn_mult->setText(QCoreApplication::translate("Form", "\303\227", nullptr));
        btn_C->setText(QCoreApplication::translate("Form", "C", nullptr));
        btn_cal_8->setText(QCoreApplication::translate("Form", "\345\205\253\350\277\233\345\210\266", nullptr));
        btn_4->setText(QCoreApplication::translate("Form", "4", nullptr));
        btn_5->setText(QCoreApplication::translate("Form", "5", nullptr));
        btn_6->setText(QCoreApplication::translate("Form", "6", nullptr));
        btn_sub->setText(QCoreApplication::translate("Form", "-", nullptr));
        btn_D->setText(QCoreApplication::translate("Form", "D", nullptr));
        btn_cal_10->setText(QCoreApplication::translate("Form", "\345\215\201\350\277\233\345\210\266", nullptr));
        btn_1->setText(QCoreApplication::translate("Form", "1", nullptr));
        btn_2->setText(QCoreApplication::translate("Form", "2", nullptr));
        btn_3->setText(QCoreApplication::translate("Form", "3", nullptr));
        btn_add->setText(QCoreApplication::translate("Form", "+", nullptr));
        btn_E->setText(QCoreApplication::translate("Form", "E", nullptr));
        btn_cal_16->setText(QCoreApplication::translate("Form", "\345\215\201\345\205\255\350\277\233\345\210\266", nullptr));
        btn_sign->setText(QCoreApplication::translate("Form", "+/-", nullptr));
        btn_0->setText(QCoreApplication::translate("Form", "0", nullptr));
        btn_point->setText(QCoreApplication::translate("Form", ".", nullptr));
        btn_equal->setText(QCoreApplication::translate("Form", "=", nullptr));
        btn_F->setText(QCoreApplication::translate("Form", "F", nullptr));
        label->setText(QCoreApplication::translate("Form", "\344\272\214\350\277\233\345\210\266\357\274\232  ", nullptr));
        label_2->setText(QCoreApplication::translate("Form", "\345\205\253\350\277\233\345\210\266\357\274\232  ", nullptr));
        label_3->setText(QCoreApplication::translate("Form", "\345\215\201\350\277\233\345\210\266\357\274\232  ", nullptr));
        label_4->setText(QCoreApplication::translate("Form", "\345\215\201\345\205\255\350\277\233\345\210\266\357\274\232", nullptr));
        label_time->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
