#ifndef CAPCAITY_H
#define CAPCAITY_H

#include <QWidget>

namespace Ui {
class Capcaity;
}

class Capcaity : public QWidget
{
    Q_OBJECT
    //枚举
    enum ECalType
    {
        eML = 0,//毫升
        eCM3,//立方厘米
        eTea,//茶匙
        eInch,//立方英寸
        eGallon//加仑
    };
public:
    explicit Capcaity(QWidget *parent = nullptr);
    ~Capcaity();

private slots:

    void on_spin_up_valueChanged(double arg1);

    void on_comboBox_up_currentIndexChanged(int index);

    void on_spin_down_valueChanged(double arg1);

    void on_comboBox_down_currentIndexChanged(int index);
private:
    double MLToElse(double value, ECalType type);
    double cm3ToElse(double value, ECalType type);
    double TeaToElse(double value, ECalType type);
    double InchToElse(double value, ECalType type);
    double GallonToElse(double value, ECalType type);
    double elseToElse(double value, ECalType type1, ECalType type2);
private:
    Ui::Capcaity *ui;
};

#endif // CAPCAITY_H
