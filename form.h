#ifndef FORM_H
#define FORM_H

#include <QWidget>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT
    //枚举
    enum ECalType
    {
        eAdd = 0,
        eSub,
        eMult,
        eDiv
    };

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();
public slots:
    //当数字按钮被按下
    void onNumberClicked();
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

    void on_btn_cal_2x_clicked();

    void on_btn_cal_x2_clicked();

    void on_btn_cal_1x_clicked();

private:
    bool m_bSignClick;
    double m_number1;
    ECalType m_CalType;
    bool m_isEqual;
private:
    Ui::Form *ui;
};

#endif // FORM_H
