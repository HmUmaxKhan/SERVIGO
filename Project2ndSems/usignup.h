#ifndef USIGNUP_H
#define USIGNUP_H

#include <QMainWindow>
#include<QMessageBox>
#include<QRegularExpression>
#include<QIntValidator>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include "ulogin.h"
#include "regcomplete.h"
#include "sql.h"

namespace Ui {
class USignUp;
}

class USignUp : public QMainWindow, public Sql
{
    Q_OBJECT

public:
    explicit USignUp(QWidget *parent = nullptr);
    ~USignUp();

    void setData();

    void setupdatabase();

    bool checkEmail();

    bool checkPhone();

    bool checkCNIC();

private slots:
    void on_SUBMIT_clicked();

    void on_Back_clicked();

private:
    Ui::USignUp *ui;
    QString name,email,phone,address,cnic,password;
    QSqlDatabase db;
};

#endif // USIGNUP_H
