#ifndef REGCOMPLETE_H
#define REGCOMPLETE_H

#include <QMainWindow>
#include "ulogin.h"
#include "slogin.h"

namespace Ui {
class RegComplete;
}

class RegComplete : public QMainWindow
{
    Q_OBJECT

public:
    explicit RegComplete(QWidget *parent = nullptr);
    ~RegComplete();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::RegComplete *ui;
};

#endif // REGCOMPLETE_H
