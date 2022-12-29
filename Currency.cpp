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

double Currency::dollarToElse(double value, Currency::ECalType type)
{
    switch (type) {
    case eDollar:
        return value;
    case eJapan:
        return value * 133;
    case eEngland:
         return value * 0.83;
    case eRussia:
        return value * 68.9;
    case eChina:
         return value * 6.96;
    case eEurope:
        return value * 0.94;
    }
    return value;
}

double Currency::japanToElse(double value, Currency::ECalType type)
{
    switch (type) {
    case eDollar:
        return value * 0.01;
    case eJapan:
        return value;
    case eEngland:
         return value * 0.01;
    case eRussia:
        return value * 0.02;
    case eChina:
         return value * 0.05;
    case eEurope:
        return value * 0.01;
    }
    return value;
}

double Currency::engToElse(double value, Currency::ECalType type)
{
    switch (type) {
    case eDollar:
        return value * 1.21;
    case eJapan:
        return value * 160;
    case eEngland:
         return value;
    case eRussia:
        return value * 83.13;
    case eChina:
         return value * 8.4;
    case eEurope:
        return value * 1.13;
    }
    return value;
}

double Currency::russiaToElse(double value, Currency::ECalType type)
{
    switch (type) {
    case eDollar:
        return value * 0.01;
    case eJapan:
        return value * 2;
    case eEngland:
         return value * 0.01;
    case eRussia:
        return value;
    case eChina:
         return value * 0.1;
    case eEurope:
        return value * 0.01;
    }
    return value;
}

double Currency::chinaToElse(double value, Currency::ECalType type)
{
    switch (type) {
    case eDollar:
        return value * 0.14;
    case eJapan:
        return value * 19;
    case eEngland:
         return value * 0.01;
    case eRussia:
        return value * 9.9;
    case eChina:
         return value;
    case eEurope:
        return value * 0.14;
    }
    return value;
}

double Currency::europeToElse(double value, Currency::ECalType type)
{
    switch (type) {
    case eDollar:
        return value * 1.06;
    case eJapan:
        return value * 141;
    case eEngland:
         return value * 0.88;
    case eRussia:
        return value * 73.26;
    case eChina:
         return value * 7.4;
    case eEurope:
        return value;
    }
    return value;
}

double Currency::elseToElse(double value, Currency::ECalType type1, Currency::ECalType type2)
{
    switch (type1) {
    case eDollar:
        return dollarToElse(value, type2);
    case eJapan:
        return japanToElse(value, type2);
    case eEngland:
         return engToElse(value, type2);
    case eRussia:
        return russiaToElse(value, type2);
    case eChina:
        return chinaToElse(value, type2);
    case eEurope:
       return europeToElse(value, type2);
    }
    return value;
}
