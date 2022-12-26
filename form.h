#ifndef FORM_H
#define FORM_H

#include <QWidget>

namespace Ui {
class Form;
}
//枚举
enum ECalType
{
    eAdd = 0,
    eSub,
    eMult,
    eDiv
};

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();
public slots:
    //当数字按钮被按下
    void onNumberClicked();
    //当进制转换按钮被按下
    void onConvertClicked();
    //加减乘除
    void onCalClicked();
private slots:
    //小数点
    void on_btn_point_clicked();
    //正负
    void on_btn_sign_clicked();
    //回退
    void on_btn_del_clicked();
    //清除
    void on_btn_clear_clicked();
    //等号
    void on_btn_equal_clicked();

private:
    bool m_bSignClick;
    double m_number1;
    ECalType m_CalType;
    bool is_minus;//是否负数
    bool is_float;//是否小数
    bool m_isEqual;
private:
    //转二进制
    void toTwo();
    //转八进制
    void toEight();
    //转十进制
    void toTen();
    //转十六进制
    void toSixteen();
    QString delete_zero(QString ret);
    int twoToeight(QString str);
    int twoTosixteen(QString str);
    QString eightTotwo(int num);
    QString sixteenTotwo(int num);
private:
    Ui::Form *ui;
};

#endif // FORM_H
