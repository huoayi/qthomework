#ifndef CURRENCY_H
#define CURRENCY_H

#include <QWidget>

namespace Ui {
class Currency;
}

class Currency : public QWidget
{
    Q_OBJECT
    //枚举
    enum ECalType
    {
        eDollar = 0,//美元
        eJapan,//日元
        eEngland,//英镑
        eRussia,//俄罗斯 卢布
        eChina,//中国 元
        eEurope//欧洲 欧元
    };
public:
    explicit Currency(QWidget *parent = nullptr);
    ~Currency();

private slots:
    void on_spin_up_valueChanged(double arg1);

    void on_comboBox_up_currentIndexChanged(int index);

    void on_spin_down_valueChanged(double arg1);

    void on_comboBox_down_currentIndexChanged(int index);

private:
    Ui::Currency *ui;
    ECalType m_upType;
    ECalType m_downType;
private:
    double dollarToElse(double value, ECalType type);
    double japanToElse(double value, ECalType type);
    double engToElse(double value, ECalType type);
    double russiaToElse(double value, ECalType type);
    double chinaToElse(double value, ECalType type);
    double europeToElse(double value, ECalType type);
    double elseToElse(double value, ECalType type1, ECalType type2);
};

#endif // CURRENCY_H
