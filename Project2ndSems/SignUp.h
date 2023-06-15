#ifndef SIGNUP_H
#define SIGNUP_H

#include <QMainWindow>
#include"slogin.h"
#include "regcomplete.h"
#include "sql.h"
#include<QMessageBox>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include<QRegularExpression>
#include<QIntValidator>
#include <QComboBox>
namespace Ui {
class SignUp;
}

class Doctor : public QMainWindow , public Sql
{
    Q_OBJECT

public:
    explicit Doctor(QWidget *parent = nullptr);
    ~Doctor();



    void setData();

    void setupdatabase();

    bool checkEmail();

    bool checkPhone();

    bool checkCNIC();


public slots:
    void on_Back_clicked();

    void on_Submit_clicked();

private:
    Ui::SignUp *ui;
    QString name,phone,email,address,experience,price,cnic,password,profession;
    QSqlDatabase db;
};

#endif // SIGNUP_H
