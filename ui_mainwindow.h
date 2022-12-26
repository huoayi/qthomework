/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_in;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_clear;
    QPushButton *btn_del;
    QPushButton *btn_div;
    QPushButton *btn_cal_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_7;
    QPushButton *btn_8;
    QPushButton *btn_9;
    QPushButton *btn_mult;
    QPushButton *btn_cal_8;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_4;
    QPushButton *btn_5;
    QPushButton *btn_6;
    QPushButton *btn_sub;
    QPushButton *btn_cal_10;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btn_1;
    QPushButton *btn_2;
    QPushButton *btn_3;
    QPushButton *btn_add;
    QPushButton *btn_cal_16;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btn_sign;
    QPushButton *btn_0;
    QPushButton *btn_point;
    QPushButton *btn_equal;
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

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(444, 570);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(20, -1, 20, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(30);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit_in = new QLineEdit(centralwidget);
        lineEdit_in->setObjectName(QString::fromUtf8("lineEdit_in"));
        lineEdit_in->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_in);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_clear = new QPushButton(centralwidget);
        btn_clear->setObjectName(QString::fromUtf8("btn_clear"));

        horizontalLayout->addWidget(btn_clear);

        btn_del = new QPushButton(centralwidget);
        btn_del->setObjectName(QString::fromUtf8("btn_del"));

        horizontalLayout->addWidget(btn_del);

        btn_div = new QPushButton(centralwidget);
        btn_div->setObjectName(QString::fromUtf8("btn_div"));

        horizontalLayout->addWidget(btn_div);

        btn_cal_2 = new QPushButton(centralwidget);
        btn_cal_2->setObjectName(QString::fromUtf8("btn_cal_2"));

        horizontalLayout->addWidget(btn_cal_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btn_7 = new QPushButton(centralwidget);
        btn_7->setObjectName(QString::fromUtf8("btn_7"));

        horizontalLayout_2->addWidget(btn_7);

        btn_8 = new QPushButton(centralwidget);
        btn_8->setObjectName(QString::fromUtf8("btn_8"));

        horizontalLayout_2->addWidget(btn_8);

        btn_9 = new QPushButton(centralwidget);
        btn_9->setObjectName(QString::fromUtf8("btn_9"));

        horizontalLayout_2->addWidget(btn_9);

        btn_mult = new QPushButton(centralwidget);
        btn_mult->setObjectName(QString::fromUtf8("btn_mult"));

        horizontalLayout_2->addWidget(btn_mult);

        btn_cal_8 = new QPushButton(centralwidget);
        btn_cal_8->setObjectName(QString::fromUtf8("btn_cal_8"));

        horizontalLayout_2->addWidget(btn_cal_8);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btn_4 = new QPushButton(centralwidget);
        btn_4->setObjectName(QString::fromUtf8("btn_4"));

        horizontalLayout_3->addWidget(btn_4);

        btn_5 = new QPushButton(centralwidget);
        btn_5->setObjectName(QString::fromUtf8("btn_5"));

        horizontalLayout_3->addWidget(btn_5);

        btn_6 = new QPushButton(centralwidget);
        btn_6->setObjectName(QString::fromUtf8("btn_6"));

        horizontalLayout_3->addWidget(btn_6);

        btn_sub = new QPushButton(centralwidget);
        btn_sub->setObjectName(QString::fromUtf8("btn_sub"));

        horizontalLayout_3->addWidget(btn_sub);

        btn_cal_10 = new QPushButton(centralwidget);
        btn_cal_10->setObjectName(QString::fromUtf8("btn_cal_10"));

        horizontalLayout_3->addWidget(btn_cal_10);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        btn_1 = new QPushButton(centralwidget);
        btn_1->setObjectName(QString::fromUtf8("btn_1"));

        horizontalLayout_4->addWidget(btn_1);

        btn_2 = new QPushButton(centralwidget);
        btn_2->setObjectName(QString::fromUtf8("btn_2"));

        horizontalLayout_4->addWidget(btn_2);

        btn_3 = new QPushButton(centralwidget);
        btn_3->setObjectName(QString::fromUtf8("btn_3"));

        horizontalLayout_4->addWidget(btn_3);

        btn_add = new QPushButton(centralwidget);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));

        horizontalLayout_4->addWidget(btn_add);

        btn_cal_16 = new QPushButton(centralwidget);
        btn_cal_16->setObjectName(QString::fromUtf8("btn_cal_16"));

        horizontalLayout_4->addWidget(btn_cal_16);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        btn_sign = new QPushButton(centralwidget);
        btn_sign->setObjectName(QString::fromUtf8("btn_sign"));

        horizontalLayout_5->addWidget(btn_sign);

        btn_0 = new QPushButton(centralwidget);
        btn_0->setObjectName(QString::fromUtf8("btn_0"));

        horizontalLayout_5->addWidget(btn_0);

        btn_point = new QPushButton(centralwidget);
        btn_point->setObjectName(QString::fromUtf8("btn_point"));

        horizontalLayout_5->addWidget(btn_point);

        btn_equal = new QPushButton(centralwidget);
        btn_equal->setObjectName(QString::fromUtf8("btn_equal"));

        horizontalLayout_5->addWidget(btn_equal);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_6->addWidget(label);

        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setReadOnly(true);

        horizontalLayout_6->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_7->addWidget(label_2);

        lineEdit_8 = new QLineEdit(centralwidget);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setReadOnly(true);

        horizontalLayout_7->addWidget(lineEdit_8);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_8->addWidget(label_3);

        lineEdit_10 = new QLineEdit(centralwidget);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setReadOnly(true);

        horizontalLayout_8->addWidget(lineEdit_10);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_9->addWidget(label_4);

        lineEdit_16 = new QLineEdit(centralwidget);
        lineEdit_16->setObjectName(QString::fromUtf8("lineEdit_16"));
        lineEdit_16->setReadOnly(true);

        horizontalLayout_9->addWidget(lineEdit_16);


        verticalLayout->addLayout(horizontalLayout_9);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btn_clear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244", nullptr));
        btn_del->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        btn_div->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        btn_cal_2->setText(QCoreApplication::translate("MainWindow", "\344\272\214\350\277\233\345\210\266", nullptr));
        btn_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        btn_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btn_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        btn_mult->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        btn_cal_8->setText(QCoreApplication::translate("MainWindow", "\345\205\253\350\277\233\345\210\266", nullptr));
        btn_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        btn_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        btn_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        btn_sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btn_cal_10->setText(QCoreApplication::translate("MainWindow", "\345\215\201\350\277\233\345\210\266", nullptr));
        btn_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btn_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        btn_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        btn_add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btn_cal_16->setText(QCoreApplication::translate("MainWindow", "\345\215\201\345\205\255\350\277\233\345\210\266", nullptr));
        btn_sign->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        btn_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btn_point->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        btn_equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\344\272\214\350\277\233\345\210\266\357\274\232  ", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\205\253\350\277\233\345\210\266\357\274\232  ", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\345\215\201\350\277\233\345\210\266\357\274\232  ", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\345\215\201\345\205\255\350\277\233\345\210\266\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
