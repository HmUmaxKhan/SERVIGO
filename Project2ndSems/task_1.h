#ifndef TASK_1_H
#define TASK_1_H

#include <QDialog>
#include<QMessageBox>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include "sql.h"

namespace Ui {
class Task1;
}

class Task1 : public QDialog , public Sql
{
    Q_OBJECT

public:
    explicit Task1(QString& email,QWidget *parent = nullptr);
    ~Task1();

    bool check();
    void setData();
    bool sendT1();
    void setTask();
    void setStatus();
    void record();

public slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();


private:
    Ui::Task1 *ui;
    QString emailSP;
    QString message1,emailU,time,address;
    QSqlDatabase db;
};

#endif // TASK_1_H
