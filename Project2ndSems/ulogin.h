#ifndef ULOGIN_H
#define ULOGIN_H

#include <QMainWindow>
#include "selection1.h"
#include"usignup.h"
#include "task_1.h"
#include "task2.h"
#include<QMessageBox>
#include <QLineEdit>


namespace Ui {
class Ulogin;
}

class Ulogin : public QMainWindow
{
    Q_OBJECT

public:
    explicit Ulogin(QWidget *parent = nullptr);
    ~Ulogin();

    void setData();
    bool checkData();

    void getEmail();

private slots:
    void on_Back_clicked();

    void on_SignIn_clicked();

    void on_Signup_clicked();

    void on_pushButton_clicked();

private:
    Ui::Ulogin *ui;
    QString email,password,currentAdd;
    QSqlDatabase db;
};

#endif // ULOGIN_H
