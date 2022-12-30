#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    m_pNormal(new Form),
    m_pScience(new Science),
    m_pProgrammer(new Programmer),
    m_pDateCal(new DateCal),
    m_pCurrency(new Currency),
    m_pCapcaity(new Capcaity)
{
    ui->setupUi(this);
    ui->gridLayout->addWidget(m_pNormal);
    ui->gridLayout->addWidget(m_pScience);
    ui->gridLayout->addWidget(m_pDateCal);
    ui->gridLayout->addWidget(m_pProgrammer);
    ui->gridLayout->addWidget(m_pCapcaity);
    ui->gridLayout->addWidget(m_pCurrency);
    setHidden();
    m_pNormal->setHidden(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_calNormal_triggered()
{
    setHidden();
    m_pNormal->setHidden(false);
}

void MainWindow::on_action_calSocial_triggered()
{
    setHidden();
    m_pScience->setHidden(false);
}

void MainWindow::on_action_calCpp_triggered()
{
    setHidden();
    m_pProgrammer->setHidden(false);
}

void MainWindow::on_action_calDate_triggered()
{
    setHidden();
    m_pDateCal->setHidden(false);
}

void MainWindow::on_action_tranMoney_triggered()
{
    setHidden();
    m_pCurrency->setHidden(false);
}

void MainWindow::on_action_tranCapcity_triggered()
{
    setHidden();
    m_pCapcaity->setHidden(false);
}

void MainWindow::setHidden()
{
    m_pNormal->setHidden(true);
    m_pDateCal->setHidden(true);
    m_pScience->setHidden(true);
    m_pProgrammer->setHidden(true);
    m_pCapcaity->setHidden(true);
    m_pCurrency->setHidden(true);
}
