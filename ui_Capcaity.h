/********************************************************************************
** Form generated from reading UI file 'Capcaity.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAPCAITY_H
#define UI_CAPCAITY_H

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

class Ui_Capcaity
{
public:
    QGridLayout *gridLayout;
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
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Capcaity)
    {
        if (Capcaity->objectName().isEmpty())
            Capcaity->setObjectName(QString::fromUtf8("Capcaity"));
        Capcaity->resize(420, 307);
        gridLayout = new QGridLayout(Capcaity);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 43, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(30);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Capcaity);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        spin_up = new QDoubleSpinBox(Capcaity);
        spin_up->setObjectName(QString::fromUtf8("spin_up"));
        spin_up->setMaximumSize(QSize(16777215, 16777215));
        spin_up->setMaximum(16777215.000000000000000);

        horizontalLayout->addWidget(spin_up);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(Capcaity);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        comboBox_up = new QComboBox(Capcaity);
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
        label_3 = new QLabel(Capcaity);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        spin_down = new QDoubleSpinBox(Capcaity);
        spin_down->setObjectName(QString::fromUtf8("spin_down"));
        spin_down->setMaximumSize(QSize(16777215, 16777215));
        spin_down->setMaximum(16777215.000000000000000);

        horizontalLayout_3->addWidget(spin_down);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(Capcaity);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        comboBox_down = new QComboBox(Capcaity);
        comboBox_down->addItem(QString());
        comboBox_down->addItem(QString());
        comboBox_down->addItem(QString());
        comboBox_down->addItem(QString());
        comboBox_down->addItem(QString());
        comboBox_down->setObjectName(QString::fromUtf8("comboBox_down"));

        horizontalLayout_4->addWidget(comboBox_down);


        verticalLayout->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 44, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);


        retranslateUi(Capcaity);

        QMetaObject::connectSlotsByName(Capcaity);
    } // setupUi

    void retranslateUi(QWidget *Capcaity)
    {
        Capcaity->setWindowTitle(QCoreApplication::translate("Capcaity", "Form", nullptr));
        label->setText(QCoreApplication::translate("Capcaity", "\350\275\254\346\215\242\345\211\215\345\256\271\351\207\217\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Capcaity", "\350\275\254\346\215\242\345\211\215\345\215\225\344\275\215\357\274\232", nullptr));
        comboBox_up->setItemText(0, QCoreApplication::translate("Capcaity", "\346\257\253\345\215\207", nullptr));
        comboBox_up->setItemText(1, QCoreApplication::translate("Capcaity", "\347\253\213\346\226\271\345\216\230\347\261\263", nullptr));
        comboBox_up->setItemText(2, QCoreApplication::translate("Capcaity", "\350\214\266\345\214\231", nullptr));
        comboBox_up->setItemText(3, QCoreApplication::translate("Capcaity", "\347\253\213\346\226\271\350\213\261\345\257\270", nullptr));
        comboBox_up->setItemText(4, QCoreApplication::translate("Capcaity", "\345\212\240\344\273\221", nullptr));

        label_3->setText(QCoreApplication::translate("Capcaity", "\350\275\254\346\215\242\345\220\216\345\256\271\351\207\217\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("Capcaity", "\350\275\254\346\215\242\345\220\216\345\215\225\344\275\215\357\274\232", nullptr));
        comboBox_down->setItemText(0, QCoreApplication::translate("Capcaity", "\346\257\253\345\215\207", nullptr));
        comboBox_down->setItemText(1, QCoreApplication::translate("Capcaity", "\347\253\213\346\226\271\345\216\230\347\261\263", nullptr));
        comboBox_down->setItemText(2, QCoreApplication::translate("Capcaity", "\350\214\266\345\214\231", nullptr));
        comboBox_down->setItemText(3, QCoreApplication::translate("Capcaity", "\347\253\213\346\226\271\350\213\261\345\257\270", nullptr));
        comboBox_down->setItemText(4, QCoreApplication::translate("Capcaity", "\345\212\240\344\273\221", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Capcaity: public Ui_Capcaity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAPCAITY_H
