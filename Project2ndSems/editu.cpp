#include "editu.h"
#include "ui_editu.h"
#include<QRegularExpression>
editU::editU(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editU)
{
    ui->setupUi(this);

    if(SqlSet())
    {
        QMessageBox::information(this,"Database Issue","Please connect to same internet connection as Server.");
    }

}

editU::~editU()
{
    delete ui;
}


void editU::setData()
{
    cnic = ui->lineEdit->text();
    pass = ui->lineEdit_2->text();
    cnfrmPass = ui->lineEdit_3->text();
}

void editU::setPass()
{
    setData();

    QString a = "User1";
    QString b = "PASSWORD";
    QString c = "CNIC";

    if(SetCheck(a,c,cnic))
    {
        if(SqlUpdate(a,b,c,pass,cnic))
        {
            QMessageBox::information(this,"Password Change","Your Password has been changed");
        }
        else
        {
            QMessageBox::information(this,"Email Issue","Password has not been changed");
        }

    }else
    {
        QMessageBox::information(this,"Email Issue","Cnic does not exist in the record");
    }

}

bool editU::checkSec()
{
    static  QRegularExpression reg2("^[0-9]{13}$");
    if (ui->lineEdit->text().isEmpty() || ui->lineEdit_2->text().isEmpty() || ui->lineEdit_3->text().isEmpty())
    {
        QMessageBox::information(this,"Incomplete Information", "Please fill all the sections");
    }
    else if (!(reg2.match(ui->lineEdit->text()).hasMatch()))
    {
        QMessageBox::information(this,"Incomplete Information", "CNIC is not valid. Insert only numbers");
    }
    else
    {
        return true;
    }

    return false;
}

void editU ::on_pushButton_2_clicked()
{
    hide();
}

void editU::on_pushButton_clicked()
{
    if (checkSec())
    {
        setData();
        if (pass == cnfrmPass)
        {
            setPass();

        }else
        {
            QMessageBox::information(this,"Password Change","Your password does not match with confirmation");
        }
    }
}
