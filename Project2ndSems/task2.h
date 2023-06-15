#ifndef TASK2_H
#define TASK2_H

#include <QDialog>
#include<QMessageBox>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include "sql.h"

namespace Ui {
class Task2;
}

class Task2 : public QDialog , public Sql
{
    Q_OBJECT

public:
    explicit Task2(QString& email,QWidget *parent = nullptr);
    ~Task2();

    bool check();
    void setData();
    bool sendT1();
    void setTask();
    void setStatus();
    void record();

private slots:


    void on_pushButton_clicked();

    void on_pushButton_2_clicked();


private:
    Ui::Task2 *ui;
    QString emailT2,msgT2,passwordT2,emailU,time,address;
    QSqlDatabase db;

};

#endif // TASK2_H
