#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "form.h"
#include "Science.h"
#include "Programmer.h"
#include "DateCal.h"
#include "Currency.h"
#include "Capcaity.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_action_calNormal_triggered();
    void on_action_calSocial_triggered();
    void on_action_calCpp_triggered();
    void on_action_calDate_triggered();
    void on_action_tranMoney_triggered();
    void on_action_tranCapcity_triggered();
private:
    Ui::MainWindow *ui;
    Form *m_pNormal;
    Science *m_pScience;
    Programmer *m_pProgrammer;
    DateCal * m_pDateCal;

    Currency *m_pCurrency;
    Capcaity *m_pCapcaity;
private:
    void setHidden();
};

#endif // MAINWINDOW_H
