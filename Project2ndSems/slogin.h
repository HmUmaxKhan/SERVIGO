#ifndef SLOGIN_H
#define SLOGIN_H

#include <QMainWindow>
#include"selection1.h"
#include "SignUp.h"
#include "sp_inter.h"
#include "editsp.h"
#include <qglobal.h>
#include "sql.h"

namespace Ui {
class Slogin;
}

class Slogin : public QMainWindow , public Sql
{
    Q_OBJECT

public:
    explicit Slogin(QWidget *parent = nullptr);
    ~Slogin();


    void openDB();
    void setData();
    bool checkEmail();
    bool checkPass();

private slots:
    void on_SignUp_clicked();

    void on_Back_clicked();

    void on_SignIn_clicked();

    void on_SignIn_2_clicked();

private:
    Ui::Slogin *ui;
    QString pass;
    QString send;
    QString emailSP;
    QSqlDatabase db;
};

#endif // SLOGIN_H
