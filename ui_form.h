/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_in;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_clear;
    QPushButton *btn_del;
    QPushButton *btn_div;
    QPushButton *btn_cal_1x;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_7;
    QPushButton *btn_8;
    QPushButton *btn_9;
    QPushButton *btn_mult;
    QPushButton *btn_cal_x2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_4;
    QPushButton *btn_5;
    QPushButton *btn_6;
    QPushButton *btn_sub;
    QPushButton *btn_cal_2x;
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
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(629, 505);
        gridLayout = new QGridLayout(Form);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit_in = new QLineEdit(Form);
        lineEdit_in->setObjectName(QString::fromUtf8("lineEdit_in"));
        lineEdit_in->setMinimumSize(QSize(0, 40));
        lineEdit_in->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_in);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

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

        btn_cal_1x = new QPushButton(Form);
        btn_cal_1x->setObjectName(QString::fromUtf8("btn_cal_1x"));
        btn_cal_1x->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(btn_cal_1x);


        verticalLayout->addLayout(horizontalLayout);

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

        btn_cal_x2 = new QPushButton(Form);
        btn_cal_x2->setObjectName(QString::fromUtf8("btn_cal_x2"));
        btn_cal_x2->setMinimumSize(QSize(0, 40));

        horizontalLayout_2->addWidget(btn_cal_x2);


        verticalLayout->addLayout(horizontalLayout_2);

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

        btn_cal_2x = new QPushButton(Form);
        btn_cal_2x->setObjectName(QString::fromUtf8("btn_cal_2x"));
        btn_cal_2x->setMinimumSize(QSize(0, 40));

        horizontalLayout_3->addWidget(btn_cal_2x);


        verticalLayout->addLayout(horizontalLayout_3);

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


        verticalLayout->addLayout(horizontalLayout_4);

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


        verticalLayout->addLayout(horizontalLayout_5);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 2, 0, 1, 1);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        btn_clear->setText(QCoreApplication::translate("Form", "\346\270\205\351\231\244", nullptr));
        btn_del->setText(QCoreApplication::translate("Form", "\345\210\240\351\231\244", nullptr));
        btn_div->setText(QCoreApplication::translate("Form", "\303\267", nullptr));
        btn_cal_1x->setText(QCoreApplication::translate("Form", "1/x", nullptr));
        btn_7->setText(QCoreApplication::translate("Form", "7", nullptr));
        btn_8->setText(QCoreApplication::translate("Form", "8", nullptr));
        btn_9->setText(QCoreApplication::translate("Form", "9", nullptr));
        btn_mult->setText(QCoreApplication::translate("Form", "\303\227", nullptr));
        btn_cal_x2->setText(QCoreApplication::translate("Form", "x2", nullptr));
        btn_4->setText(QCoreApplication::translate("Form", "4", nullptr));
        btn_5->setText(QCoreApplication::translate("Form", "5", nullptr));
        btn_6->setText(QCoreApplication::translate("Form", "6", nullptr));
        btn_sub->setText(QCoreApplication::translate("Form", "-", nullptr));
        btn_cal_2x->setText(QCoreApplication::translate("Form", "2`x", nullptr));
        btn_1->setText(QCoreApplication::translate("Form", "1", nullptr));
        btn_2->setText(QCoreApplication::translate("Form", "2", nullptr));
        btn_3->setText(QCoreApplication::translate("Form", "3", nullptr));
        btn_add->setText(QCoreApplication::translate("Form", "+", nullptr));
        btn_sign->setText(QCoreApplication::translate("Form", "+/-", nullptr));
        btn_0->setText(QCoreApplication::translate("Form", "0", nullptr));
        btn_point->setText(QCoreApplication::translate("Form", ".", nullptr));
        btn_equal->setText(QCoreApplication::translate("Form", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
