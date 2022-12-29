#ifndef DATECAL_H
#define DATECAL_H

#include <QWidget>

namespace Ui {
class DateCal;
}

class DateCal : public QWidget
{
    Q_OBJECT

public:
    explicit DateCal(QWidget *parent = nullptr);
    ~DateCal();

private slots:
    void on_dateEdit_start_userDateChanged(const QDate &date);

    void on_dateEdit_end_userDateChanged(const QDate &date);

private:
    Ui::DateCal *ui;
};

#endif // DATECAL_H
