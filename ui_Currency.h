/********************************************************************************
** Form generated from reading UI file 'Currency.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURRENCY_H
#define UI_CURRENCY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Currency
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *spin_up;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox_up;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDoubleSpinBox *spin_down;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *comboBox_down;

    void setupUi(QWidget *Currency)
    {
        if (Currency->objectName().isEmpty())
            Currency->setObjectName(QString::fromUtf8("Currency"));
        Currency->resize(387, 352);
        gridLayout = new QGridLayout(Currency);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 66, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 66, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(30);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Currency);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        spin_up = new QDoubleSpinBox(Currency);
        spin_up->setObjectName(QString::fromUtf8("spin_up"));
        spin_up->setMaximumSize(QSize(16777215, 16777215));
        spin_up->setMaximum(16777215.000000000000000);

        horizontalLayout->addWidget(spin_up);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(Currency);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        comboBox_up = new QComboBox(Currency);
        comboBox_up->addItem(QString());
        comboBox_up->addItem(QString());
        comboBox_up->addItem(QString());
        comboBox_up->addItem(QString());
        comboBox_up->addItem(QString());
        comboBox_up->addItem(QString());
        comboBox_up->setObjectName(QString::fromUtf8("comboBox_up"));

        horizontalLayout_2->addWidget(comboBox_up);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(Currency);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        spin_down = new QDoubleSpinBox(Currency);
        spin_down->setObjectName(QString::fromUtf8("spin_down"));
        spin_down->setMaximumSize(QSize(16777215, 16777215));
        spin_down->setMaximum(16777215.000000000000000);

        horizontalLayout_3->addWidget(spin_down);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(Currency);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        comboBox_down = new QComboBox(Currency);
        comboBox_down->addItem(QString());
        comboBox_down->addItem(QString());
        comboBox_down->addItem(QString());
        comboBox_down->addItem(QString());
        comboBox_down->addItem(QString());
        comboBox_down->addItem(QString());
        comboBox_down->setObjectName(QString::fromUtf8("comboBox_down"));

        horizontalLayout_4->addWidget(comboBox_down);


        verticalLayout->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 2);


        retranslateUi(Currency);

        QMetaObject::connectSlotsByName(Currency);
    } // setupUi

    void retranslateUi(QWidget *Currency)
    {
        Currency->setWindowTitle(QCoreApplication::translate("Currency", "Form", nullptr));
        label->setText(QCoreApplication::translate("Currency", "\350\275\254\346\215\242\345\211\215\351\207\221\351\242\235\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Currency", "\350\275\254\346\215\242\345\211\215\346\261\207\347\216\207\357\274\232", nullptr));
        comboBox_up->setItemText(0, QCoreApplication::translate("Currency", "\347\276\216\345\205\203", nullptr));
        comboBox_up->setItemText(1, QCoreApplication::translate("Currency", "\346\227\245\345\205\203", nullptr));
        comboBox_up->setItemText(2, QCoreApplication::translate("Currency", "\350\213\261\351\225\221", nullptr));
        comboBox_up->setItemText(3, QCoreApplication::translate("Currency", "\345\215\242\345\270\203", nullptr));
        comboBox_up->setItemText(4, QCoreApplication::translate("Currency", "\344\272\272\346\260\221\345\270\201", nullptr));
        comboBox_up->setItemText(5, QCoreApplication::translate("Currency", "\346\254\247\345\205\203", nullptr));

        label_3->setText(QCoreApplication::translate("Currency", "\350\275\254\346\215\242\345\220\216\351\207\221\351\242\235\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("Currency", "\350\275\254\346\215\242\345\220\216\346\261\207\347\216\207\357\274\232", nullptr));
        comboBox_down->setItemText(0, QCoreApplication::translate("Currency", "\347\276\216\345\205\203", nullptr));
        comboBox_down->setItemText(1, QCoreApplication::translate("Currency", "\346\227\245\345\205\203", nullptr));
        comboBox_down->setItemText(2, QCoreApplication::translate("Currency", "\350\213\261\351\225\221", nullptr));
        comboBox_down->setItemText(3, QCoreApplication::translate("Currency", "\345\215\242\345\270\203", nullptr));
        comboBox_down->setItemText(4, QCoreApplication::translate("Currency", "\344\272\272\346\260\221\345\270\201", nullptr));
        comboBox_down->setItemText(5, QCoreApplication::translate("Currency", "\346\254\247\345\205\203", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Currency: public Ui_Currency {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURRENCY_H
