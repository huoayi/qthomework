#include "DateCal.h"
#include "ui_DateCal.h"
#include <QtMath>

DateCal::DateCal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DateCal)
{
    ui->setupUi(this);
}

DateCal::~DateCal()
{
    delete ui;
}

void DateCal::on_dateEdit_start_userDateChanged(const QDate &date)
{
    Q_UNUSED(date)
    QDate startDate = ui->dateEdit_start->date();
    QDate endDate = ui->dateEdit_end->date();
    int days = qAbs(startDate.daysTo(endDate));
    ui->lineEdit->setText(QString("相差%1天").arg(days));
}

void DateCal::on_dateEdit_end_userDateChanged(const QDate &date)
{
    Q_UNUSED(date)
    QDate startDate = ui->dateEdit_start->date();
    QDate endDate = ui->dateEdit_end->date();
    int days = qAbs(startDate.daysTo(endDate));
    ui->lineEdit->setText(QString("相差%1天").arg(days));
}
