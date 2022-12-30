#include "form.h"
#include "ui_form.h"
#include <QMessageBox>
#include <QStack>
#include <QQueue>
#include <qmath.h>
#include <QTimer>
#include <QDateTime>

Form::Form(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Form),
      m_bSignClick(false)
{
    ui->setupUi(this);
    //数字键槽连接
    for(int i=0; i<10; i++)
    {
        QString objName = QString("btn_%1").arg(i);
        QPushButton *pBtn = this->findChild<QPushButton*>(objName);
        connect(pBtn, &QPushButton::clicked, this, &Form::onNumberClicked);
    }
    QStringList tmpList = {"A","B", "C", "D", "E","F"};
    foreach(QString str, tmpList)
    {
        QString objName = QString("btn_%1").arg(str);
        QPushButton *pBtn = this->findChild<QPushButton*>(objName);
        connect(pBtn, &QPushButton::clicked, this, &Form::onNumberClicked);
    }
    //+-*/键槽连接
    QStringList strList = {"add", "sub", "mult", "div"};
    foreach(QString str , strList)
    {
        QString objName = QString("btn_%1").arg(str);
        QPushButton *pBtn = this->findChild<QPushButton*>(objName);
        connect(pBtn, &QPushButton::clicked, this, &Form::onCalClicked);
    }
}

Form::~Form()
{
    delete ui;
}

void Form::onNumberClicked()
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



void Form::onCalClicked()
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


void Form::on_btn_point_clicked()
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

void Form::on_btn_sign_clicked()
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

void Form::on_btn_del_clicked()
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

void Form::on_btn_clear_clicked()
{
    ui->lineEdit_in->setText("");
}

void Form::on_btn_equal_clicked()
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
    }

    ui->lineEdit_in->setText(QString::number(result));
}

void Form::on_btn_cal_2x_clicked()
{
    double tmp = ui->lineEdit_in->text().toDouble();
    if(tmp < 0)
    {
        ui->lineEdit_in->setText("根号下不能为负数");
    }
    m_isEqual = true;
    ui->lineEdit_in->setText(QString::number(qPow(tmp, 0.5)));
}

void Form::on_btn_cal_x2_clicked()
{
    double tmp = ui->lineEdit_in->text().toDouble();
    m_isEqual = true;
    ui->lineEdit_in->setText(QString::number(qPow(tmp, 2.0)));
}

void Form::on_btn_cal_1x_clicked()
{
    double tmp = ui->lineEdit_in->text().toDouble();
    if(tmp == 0)
    {
        ui->lineEdit_in->setText("除数不能为0");
    }
    m_isEqual = true;
    ui->lineEdit_in->setText(QString::number(1.0 / tmp));
}
