/********************************************************************************
** Form generated from reading UI file 'DateCal.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATECAL_H
#define UI_DATECAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DateCal
{
public:
    QGridLayout *gridLayout;
    QDateEdit *dateEdit_start;
    QLabel *label_3;
    QCalendarWidget *calendar_start;
    QLabel *label_2;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QLabel *label;
    QDateEdit *dateEdit_end;
    QCalendarWidget *calendarWidget_2;

    void setupUi(QWidget *DateCal)
    {
        if (DateCal->objectName().isEmpty())
            DateCal->setObjectName(QString::fromUtf8("DateCal"));
        DateCal->resize(489, 737);
        gridLayout = new QGridLayout(DateCal);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        dateEdit_start = new QDateEdit(DateCal);
        dateEdit_start->setObjectName(QString::fromUtf8("dateEdit_start"));

        gridLayout->addWidget(dateEdit_start, 1, 1, 1, 1);

        label_3 = new QLabel(DateCal);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 5, 0, 1, 2);

        calendar_start = new QCalendarWidget(DateCal);
        calendar_start->setObjectName(QString::fromUtf8("calendar_start"));

        gridLayout->addWidget(calendar_start, 2, 0, 1, 2);

        label_2 = new QLabel(DateCal);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        comboBox = new QComboBox(DateCal);
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setEditable(false);
        comboBox->setFrame(false);

        gridLayout->addWidget(comboBox, 0, 0, 1, 2);

        lineEdit = new QLineEdit(DateCal);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setReadOnly(true);

        gridLayout->addWidget(lineEdit, 6, 0, 1, 2);

        label = new QLabel(DateCal);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        dateEdit_end = new QDateEdit(DateCal);
        dateEdit_end->setObjectName(QString::fromUtf8("dateEdit_end"));

        gridLayout->addWidget(dateEdit_end, 3, 1, 1, 1);

        calendarWidget_2 = new QCalendarWidget(DateCal);
        calendarWidget_2->setObjectName(QString::fromUtf8("calendarWidget_2"));

        gridLayout->addWidget(calendarWidget_2, 4, 0, 1, 2);


        retranslateUi(DateCal);
        QObject::connect(calendarWidget_2, SIGNAL(clicked(QDate)), dateEdit_end, SLOT(setDate(QDate)));
        QObject::connect(calendar_start, SIGNAL(clicked(QDate)), dateEdit_start, SLOT(setDate(QDate)));

        QMetaObject::connectSlotsByName(DateCal);
    } // setupUi

    void retranslateUi(QWidget *DateCal)
    {
        DateCal->setWindowTitle(QCoreApplication::translate("DateCal", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("DateCal", "\345\267\256\345\200\274", nullptr));
        label_2->setText(QCoreApplication::translate("DateCal", "\345\274\200\345\247\213\346\227\266\351\227\264", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("DateCal", "\346\227\245\346\234\237\344\271\213\351\227\264\347\232\204\347\233\270\351\232\224\346\227\266\351\227\264", nullptr));

        label->setText(QCoreApplication::translate("DateCal", "\345\274\200\345\247\213\346\227\266\351\227\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DateCal: public Ui_DateCal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATECAL_H
