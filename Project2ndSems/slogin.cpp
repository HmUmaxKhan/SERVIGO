#include "slogin.h"
#include "ui_slogin.h"
#include <QMessageBox>
#include<QDebug>
Slogin::Slogin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Slogin)
{
    ui->setupUi(this);

    if(SqlSet())
    {
        QMessageBox::information(this,"Database Issue","Please connect to same internet connection as Server.");
    }
}

Slogin::~Slogin()
{
    delete ui;
}

void Slogin::setData()
{
   emailSP = ui->lineEdit->text();
    pass = ui->lineEdit_2->text();
}

bool Slogin::checkEmail()
{
    setData();

    QString tab = "Service";
    QString con = "EMAIL";

    if(SetCheck(tab,con,emailSP))
    {
        return true;
    }
    else
    {
        return false;
    }

}

bool Slogin::checkPass()
{
    QString tab = "Service";
    QString con = "PASSWORD";

    if(SetCheck(tab,con,pass))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Slogin::on_SignIn_clicked()
{
    setData();
    if(ui->lineEdit->text().isEmpty() || ui->lineEdit_2->text().isEmpty() )
    {
    QMessageBox::information(this,"Login Failed", "Please fill all sections");
    }
    else if (checkEmail()&&checkPass())
    {
    SPinter *sp;
    sp = new SPinter(emailSP);
    sp->showMaximized();
    hide();
    }
    else
    {
    QMessageBox::warning(this,"Login Failed", "Email or Password Incorrect");
    }
}


void Slogin::on_SignUp_clicked()
{
    Doctor *pro;
    pro = new Doctor;
    pro->showMaximized();
    hide();
}


void Slogin::on_Back_clicked()
{
    Selection *sel;
    sel = new Selection;
    sel->showMaximized();
    hide();
}

void Slogin::on_SignIn_2_clicked()
{

    EditSP *ed;
    ed = new EditSP;
    ed->show();

}

