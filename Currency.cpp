#include "Currency.h"
#include "ui_Currency.h"

Currency::Currency(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Currency)
{
    ui->setupUi(this);
}

Currency::~Currency()
{
    delete ui;
}

void Currency::on_spin_up_valueChanged(double arg1)
{
    int upIndex = ui->comboBox_up->currentIndex();
    int downIndex = ui->comboBox_down->currentIndex();
    ui->spin_down->setValue(elseToElse(arg1, (ECalType)upIndex, (ECalType)downIndex));
}


void Currency::on_comboBox_up_currentIndexChanged(int index)
{
    int downIndex = ui->comboBox_down->currentIndex();
    ui->spin_up->setValue(elseToElse(ui->spin_down->value(), (ECalType)downIndex, (ECalType)index));
}

void Currency::on_spin_down_valueChanged(double arg1)
{
    int upIndex = ui->comboBox_up->currentIndex();
    int downIndex = ui->comboBox_down->currentIndex();
    ui->spin_up->setValue(elseToElse(arg1, (ECalType)downIndex, (ECalType)upIndex));
}

void Currency::on_comboBox_down_currentIndexChanged(int index)
{
    int upIndex = ui->comboBox_up->currentIndex();
    ui->spin_down->setValue(elseToElse(ui->spin_up->value(), (ECalType)upIndex, (ECalType)index));
}
