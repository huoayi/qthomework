#include "Capcaity.h"
#include "ui_Capcaity.h"

Capcaity::Capcaity(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Capcaity)
{
    ui->setupUi(this);
}

Capcaity::~Capcaity()
{
    delete ui;
}

void Capcaity::on_spin_up_valueChanged(double arg1)
{
    int upIndex = ui->comboBox_up->currentIndex();
    int downIndex = ui->comboBox_down->currentIndex();
    ui->spin_down->setValue(elseToElse(arg1, (ECalType)upIndex, (ECalType)downIndex));
}

void Capcaity::on_comboBox_up_currentIndexChanged(int index)
{
    int downIndex = ui->comboBox_down->currentIndex();
    ui->spin_up->setValue(elseToElse(ui->spin_down->value(), (ECalType)downIndex, (ECalType)index));
}

void Capcaity::on_spin_down_valueChanged(double arg1)
{
    int upIndex = ui->comboBox_up->currentIndex();
    int downIndex = ui->comboBox_down->currentIndex();
    ui->spin_up->setValue(elseToElse(arg1, (ECalType)downIndex, (ECalType)upIndex));
}

void Capcaity::on_comboBox_down_currentIndexChanged(int index)
{
    int upIndex = ui->comboBox_up->currentIndex();
    ui->spin_down->setValue(elseToElse(ui->spin_up->value(), (ECalType)upIndex, (ECalType)index));
}

double Capcaity::MLToElse(double value, Capcaity::ECalType type)
{
    switch (type) {
    case eML:
        return value;
    case eCM3:
        return value;
    case eTea:
        return value * 0.202884;
    case eInch:
        return value * 0.061024;
    case eGallon:
        return value * 0.00022;
    }
    return value;
}

double Capcaity::cm3ToElse(double value, Capcaity::ECalType type)
{
    switch (type) {
    case eML:
        return value;
    case eCM3:
        return value;
    case eTea:
        return value * 0.202884;
    case eInch:
        return value * 0.061024;
    case eGallon:
        return value * 0.00022;
    }
    return value;
}

double Capcaity::TeaToElse(double value, Capcaity::ECalType type)
{
    switch (type) {
    case eML:
        return value * 4.928922;
    case eCM3:
        return value * 4.928922;
    case eTea:
        return value;
    case eInch:
        return value * 0.300781;
    case eGallon:
        return value * 0.001084;
    }
    return value;
}

double Capcaity::InchToElse(double value, Capcaity::ECalType type)
{
    switch (type) {
    case eML:
        return value * 16.38706;
    case eCM3:
        return value * 16.38706;
    case eTea:
        return value * 3.324675;
    case eInch:
        return value;
    case eGallon:
        return value * 0.003605;
    }
    return value;
}

double Capcaity::GallonToElse(double value, Capcaity::ECalType type)
{
    switch (type) {
    case eML:
        return value * 4546.09;
    case eCM3:
        return value * 4546.09;
    case eTea:
        return value * 922.3295;
    case eInch:
        return value * 277.4194;
    case eGallon:
        return value;
    }
    return value;
}

double Capcaity::elseToElse(double value, Capcaity::ECalType type1, Capcaity::ECalType type2)
{
    switch (type1) {
    case eML:
        return MLToElse(value, type2);
    case eCM3:
        return cm3ToElse(value, type2);
    case eTea:
        return TeaToElse(value, type2);
    case eInch:
        return InchToElse(value, type2);
    case eGallon:
        return GallonToElse(value, type2);
    }
    return value;
}
