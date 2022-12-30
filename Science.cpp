#include "Science.h"
#include "ui_Science.h"
#include <QMessageBox>
#include <QStack>
#include <QQueue>
#include <qmath.h>
#include <QTimer>
#include <QDateTime>

Science::Science(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Science)
{
    ui->setupUi(this);
    //数字键槽连接
    for(int i=0; i<10; i++)
    {
        QString objName = QString("btn_%1").arg(i);
        QPushButton *pBtn = this->findChild<QPushButton*>(objName);
        connect(pBtn, &QPushButton::clicked, this, &Science::onNumberClicked);
    }

    //+-*/键槽连接
    QStringList strList = {"add", "sub", "mult", "div"};
    foreach(QString str , strList)
    {
        QString objName = QString("btn_%1").arg(str);
        QPushButton *pBtn = this->findChild<QPushButton*>(objName);
        connect(pBtn, &QPushButton::clicked, this, &Science::onCalClicked);
    }
}

Science::~Science()
{
    delete ui;
}
void Science::onNumberClicked()
{
    if(m_isEqual)
    {
        on_btn_clear_clicked();
    }
    QString obj = dynamic_cast<QPushButton *>(sender())->text();
    if(obj.isEmpty())
    {
        return;
    }
    QString inputStr = ui->lineEdit_in->text();
    inputStr += obj;
    ui->lineEdit_in->setText(inputStr);
    m_isEqual = false;
}

void Science::onCalClicked()
{
    QString curText = ui->lineEdit_in->text();
    QStringList tmpList = {"A","B", "C", "D", "E","F"};
    foreach(QString str, tmpList)
    {
        if(curText.contains(str))
        {
            QMessageBox::warning(this, "警告", "输入错误！");
            return;
        }
    }
    if(curText.contains(""))
    m_number1 = ui->lineEdit_in->text().toDouble();
    QString obj = dynamic_cast<QPushButton *>(sender())->text();
    if(obj.isEmpty())
    {
        return;
    }
    on_btn_clear_clicked();
    if(obj == "+")
    {
        m_CalType = eAdd;
    }
    else if(obj == "-")
    {
        m_CalType = eSub;
    }
    else if(obj == "×")
    {
        m_CalType = eMult;
    }
    else if(obj == "÷")
    {
        m_CalType = eDiv;
    }
}


void Science::on_btn_point_clicked()
{
    if(m_isEqual)
    {
        on_btn_clear_clicked();
    }
    QString inputStr = ui->lineEdit_in->text();
    //只能有一个，必须在中间
    if(inputStr.isEmpty() || inputStr.contains("."))
    {
        QMessageBox::warning(this, "警告", "输入错误！");
        return;
    }
    inputStr += ".";
    ui->lineEdit_in->setText(inputStr);
    m_isEqual = false;
}

void Science::on_btn_sign_clicked()
{
    if(m_isEqual)
    {
        return;
    }
    QString inputStr = ui->lineEdit_in->text();
    //必须第一个
    if(inputStr.isEmpty())
    {
        inputStr = "-";
    }
    else if(inputStr == "-")
    {
        inputStr.clear();
    }
    else
    {
        double tmp = inputStr.toDouble();
        tmp = 0 - tmp;
        inputStr = QString::number(tmp);
    }
    ui->lineEdit_in->setText(inputStr);
}

void Science::on_btn_del_clicked()
{
    QString inputStr = ui->lineEdit_in->text();
    if(inputStr.isEmpty())
    {
        return;
    }
    inputStr = inputStr.left(inputStr.size() - 1);
    //回退到最后一个是.
    if(inputStr.right(1) == ".")
    {
        inputStr = inputStr.left(inputStr.size() - 1);
    }
    if(inputStr.right(1) == "-")
    {
        inputStr.clear();
    }
    ui->lineEdit_in->setText(inputStr);
}

void Science::on_btn_clear_clicked()
{
    ui->lineEdit_in->setText("");
}

void Science::on_btn_equal_clicked()
{
    double number2 = ui->lineEdit_in->text().toDouble();
    if(m_CalType == eDiv && number2 == 0)
    {
        QMessageBox::warning(this, "警告", "输入错误！");
        on_btn_clear_clicked();
        return;
    }
    m_isEqual = true;
    double result;
    switch (m_CalType) {
    case eAdd:
        result = m_number1 + number2;
        break;
    case eSub:
        result = m_number1 - number2;
        break;
    case eMult:
        result = m_number1 * number2;
        break;
    case eDiv:
        result = m_number1 / number2;
        break;
    case eXy:
        result = qPow(m_number1, number2);
        break;
    case eYx:
        result = qPow(number2, m_number1);
        break;
    case eMod:
        result = (int)number2 % (int)m_number1;
        break;
    case eLogyx:
        result = qLn(m_number1) / qLn(number2);
        break;
    }

    ui->lineEdit_in->setText(QString::number(result));
}

void Science::on_btn_sin_clicked()
{
    double tmp = ui->lineEdit_in->text().toDouble();
    tmp = qSin(tmp);
    ui->lineEdit_in->setText(QString::number(tmp));
    m_isEqual = true;
}

void Science::on_btn_cos_clicked()
{
    double tmp = ui->lineEdit_in->text().toDouble();
    tmp = qCos(tmp);
    ui->lineEdit_in->setText(QString::number(tmp));
    m_isEqual = true;
}

void Science::on_btn_tan_clicked()
{
    double tmp = ui->lineEdit_in->text().toDouble();
    if(tmp == 0)
    {
        ui->lineEdit_in->setText("tan下不能为0");
    }
    ui->lineEdit_in->setText(QString::number(qTan(tmp)));
    m_isEqual = true;
}

void Science::on_btn_equal_sec_clicked()
{
    double tmp = ui->lineEdit_in->text().toDouble();
    if(qCos(tmp) == 0)
    {
        ui->lineEdit_in->setText("输入不合法");
    }
    ui->lineEdit_in->setText(QString::number(1.0 / qCos(tmp)));
    m_isEqual = true;
}

void Science::on_btn_csc_clicked()
{
    double tmp = ui->lineEdit_in->text().toDouble();
    if(qSin(tmp) == 0)
    {
        ui->lineEdit_in->setText("输入不合法");
    }
    ui->lineEdit_in->setText(QString::number(1.0 / qSin(tmp)));
    m_isEqual = true;
}

void Science::on_btn_cot_clicked()
{
    double tmp = ui->lineEdit_in->text().toDouble();
    if(qTan(tmp) == 0)
    {
        ui->lineEdit_in->setText("输入不合法");
    }
    ui->lineEdit_in->setText(QString::number(1.0 / qTan(tmp)));
    m_isEqual = true;
}

void Science::on_btn_x2_clicked()
{
    double tmp = ui->lineEdit_in->text().toDouble();
    ui->lineEdit_in->setText(QString::number(qPow(tmp, 2.0)));
    m_isEqual = true;
}

void Science::on_btn_2x_clicked()
{
    double tmp = ui->lineEdit_in->text().toDouble();
    if(tmp < 0)
    {
        ui->lineEdit_in->setText("输入不合法");
    }
    ui->lineEdit_in->setText(QString::number(qPow(tmp, 0.5)));
    m_isEqual = true;
}

void Science::on_btn_xy_clicked()
{
    m_CalType = eXy;
    m_number1 = ui->lineEdit_in->text().toDouble();
    on_btn_clear_clicked();
}

void Science::on_btn_10x_clicked()
{
    double tmp = ui->lineEdit_in->text().toDouble();
    ui->lineEdit_in->setText(QString::number(qPow(10, tmp)));
    m_isEqual = true;
    on_btn_clear_clicked();
}

void Science::on_btn_log_clicked()
{
    double tmp = ui->lineEdit_in->text().toDouble();
    if(tmp == 0)
    {
        ui->lineEdit_in->setText("输入不合法");
    }
    ui->lineEdit_in->setText(QString::number(qLn(tmp) / qLn(10)));
    m_isEqual = true;
}

void Science::on_btn_ln_clicked()
{
    double tmp = ui->lineEdit_in->text().toDouble();
    if(tmp == 0)
    {
        ui->lineEdit_in->setText("输入不合法");
    }
    ui->lineEdit_in->setText(QString::number(qLn(tmp)));
    m_isEqual = true;
}

void Science::on_btn_x3_clicked()
{
    double tmp = ui->lineEdit_in->text().toDouble();
    ui->lineEdit_in->setText(QString::number(qPow(tmp, 3)));
    m_isEqual = true;
}

void Science::on_btn_3x_clicked()
{
    double tmp = ui->lineEdit_in->text().toDouble();
    ui->lineEdit_in->setText(QString::number(qPow(tmp, 1.0/3)));
    m_isEqual = true;
}

void Science::on_btn_yx_clicked()
{
    m_CalType = eYx;
    m_number1 = ui->lineEdit_in->text().toDouble();
    on_btn_clear_clicked();
}

void Science::on_btn_mod_clicked()
{
    m_CalType = eYx;
    m_number1 = ui->lineEdit_in->text().toDouble();
    on_btn_clear_clicked();
}

void Science::on_btn_logyx_clicked()
{
    m_CalType = eLogyx;
    m_number1 = ui->lineEdit_in->text().toDouble();
    on_btn_clear_clicked();
}

void Science::on_btn_ex_clicked()
{
    double tmp = ui->lineEdit_in->text().toDouble();
    ui->lineEdit_in->setText(QString::number(qPow(M_E, tmp)));
    m_isEqual = true;
}

void Science::on_btn_1x_clicked()
{
    double tmp = ui->lineEdit_in->text().toDouble();
    if(tmp == 0)
    {
        ui->lineEdit_in->setText("输入不合法");
    }
    ui->lineEdit_in->setText(QString::number(1.0 / tmp));
    m_isEqual = true;
}

void Science::on_btn_xx_clicked()
{
    double tmp = ui->lineEdit_in->text().toDouble();
    ui->lineEdit_in->setText(QString::number(qAbs(tmp)));

}

void Science::on_btn_exp_clicked()
{
    double tmp = ui->lineEdit_in->text().toDouble();
    ui->lineEdit_in->setText(QString::number(qPow(tmp, M_E)));
}

void Science::on_btn_n_clicked()
{
    m_isEqual = true;
    int tmp = ui->lineEdit_in->text().toInt();
    if(tmp < 0)
    {
        ui->lineEdit_in->setText("输入不合法");
    }
    if(tmp == 0 || tmp == 1)
    {
        ui->lineEdit_in->setText(QString::number(tmp));
    }
    int total = 1;
    for(int i=2; i<=tmp; i++)
    {
        total *= i;
    }

    ui->lineEdit_in->setText(QString::number(total));
}

void Science::on_btn_pI_clicked()
{
    ui->lineEdit_in->setText(QString::number(M_PI));
}

void Science::on_btn_e_clicked()
{
    ui->lineEdit_in->setText(QString::number(M_E));
}
