/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_calNormal;
    QAction *action_calSocial;
    QAction *action_calCpp;
    QAction *action_calDate;
    QAction *action_tranMoney;
    QAction *action_tranCapcity;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(561, 600);
        action_calNormal = new QAction(MainWindow);
        action_calNormal->setObjectName(QString::fromUtf8("action_calNormal"));
        action_calSocial = new QAction(MainWindow);
        action_calSocial->setObjectName(QString::fromUtf8("action_calSocial"));
        action_calCpp = new QAction(MainWindow);
        action_calCpp->setObjectName(QString::fromUtf8("action_calCpp"));
        action_calDate = new QAction(MainWindow);
        action_calDate->setObjectName(QString::fromUtf8("action_calDate"));
        action_tranMoney = new QAction(MainWindow);
        action_tranMoney->setObjectName(QString::fromUtf8("action_tranMoney"));
        action_tranCapcity = new QAction(MainWindow);
        action_tranCapcity->setObjectName(QString::fromUtf8("action_tranCapcity"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 561, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(action_calNormal);
        menu->addAction(action_calSocial);
        menu->addAction(action_calCpp);
        menu->addAction(action_calDate);
        menu_2->addAction(action_tranMoney);
        menu_2->addAction(action_tranCapcity);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_calNormal->setText(QCoreApplication::translate("MainWindow", "\346\240\207\345\207\206", nullptr));
        action_calSocial->setText(QCoreApplication::translate("MainWindow", "\347\247\221\345\255\246", nullptr));
        action_calCpp->setText(QCoreApplication::translate("MainWindow", "\347\250\213\345\272\217\345\221\230", nullptr));
        action_calDate->setText(QCoreApplication::translate("MainWindow", "\346\227\245\346\234\237\350\256\241\347\256\227", nullptr));
        action_tranMoney->setText(QCoreApplication::translate("MainWindow", "\350\264\247\345\270\201", nullptr));
        action_tranCapcity->setText(QCoreApplication::translate("MainWindow", "\345\256\271\351\207\217", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\350\256\241\347\256\227\345\231\250", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\350\275\254\346\215\242\345\231\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
