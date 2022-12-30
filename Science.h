#ifndef SCIENCE_H
#define SCIENCE_H

#include <QWidget>

namespace Ui {
class Science;
}

class Science : public QWidget
{
    Q_OBJECT

    //枚举
    enum ECalType
    {
        eAdd = 0,
        eSub,
        eMult,
        eDiv,
        eXy,
        eYx,
        eMod,
        eLogyx
    };

public:
    explicit Science(QWidget *parent = nullptr);
    ~Science();
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
    void on_btn_sin_clicked();

    void on_btn_cos_clicked();

    void on_btn_tan_clicked();

    void on_btn_equal_sec_clicked();

    void on_btn_csc_clicked();

    void on_btn_cot_clicked();

    void on_btn_x2_clicked();

    void on_btn_2x_clicked();

    void on_btn_xy_clicked();

    void on_btn_10x_clicked();

    void on_btn_log_clicked();

    void on_btn_ln_clicked();

    void on_btn_x3_clicked();

    void on_btn_3x_clicked();

    void on_btn_yx_clicked();

    void on_btn_mod_clicked();

    void on_btn_logyx_clicked();

    void on_btn_ex_clicked();

    void on_btn_1x_clicked();

    void on_btn_xx_clicked();

    void on_btn_exp_clicked();

    void on_btn_n_clicked();

    void on_btn_pI_clicked();

    void on_btn_e_clicked();

private:
    bool m_bSignClick;
    double m_number1;
    ECalType m_CalType;
    bool m_isEqual;
private:
    Ui::Science *ui;
};

#endif // SCIENCE_H
