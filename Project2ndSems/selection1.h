#ifndef SELECTION1_H
#define SELECTION1_H

#include <QMainWindow>
#include"slogin.h"
#include "ulogin.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Selection1; }
QT_END_NAMESPACE

class Selection : public QMainWindow
{
    Q_OBJECT

public:
    Selection(QWidget *parent = nullptr);
    ~Selection();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Selection1 *ui;
};
#endif // SELECTION1_H
