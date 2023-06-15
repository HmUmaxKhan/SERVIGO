#include "profileu.h"
#include "ui_profileu.h"
#include <QRegularExpression>

ProfileU::ProfileU(QString& email,QWidget *parent) :
    Email(email),QMainWindow(parent),
    ui(new Ui::ProfileU)
{
    ui->setupUi(this);

    if(SqlSet())
    {
        QMessageBox::information(this,"Database Issue","Please connect to same internet connection as Server.");
    }

     getData();
}

ProfileU::~ProfileU()
{
    delete ui;
}

bool ProfileU::TakeData()
{
    QSqlQuery qry;
    QString str = "SELECT NAME,PHONE,ADDRESS FROM User1 WHERE EMAIL=:email";
    qry.prepare(str);

    qry.bindValue(":email",Email);
    if(qry.exec())
    {
        while(qry.next())
        {
            Name = qry.value(0).toString();
            Phone = qry.value(1).toString();
            Address = qry.value(2).toString();
        }
        return true;
    }
    else
    {
        return false;
    }
}

void ProfileU::getData()
{
    if(TakeData())
    {
        ui->Name->setText(Name);
        ui->Phone->setText(Phone);
        ui->Email->setText(Email);
        ui->Address->setText(Address);
    }
}

void ProfileU::SetData()
{
    Name = ui->Name->text();
    Email = ui->Email->text();
    Phone = ui->Phone->text();
    Address = ui->Address->text();
}

bool ProfileU::CheckData()
{
    static  QRegularExpression reg1("^[A-Za-z\\ ]+$");
    static  QRegularExpression reg2("^[0-9\\+]{13}$");

    if(ui->Name->text().isEmpty() || ui->Email->text().isEmpty() || ui->Phone->text().isEmpty()
        || ui->Address->text().isEmpty())
    {

    }
    else if (!reg1.match(ui->Name->text()).hasMatch())
    {
        QMessageBox::information(this,"Incomplete Information", "Name section allowed only alphabets");
    }
    else if (!reg2.match(ui->Phone->text()).hasMatch())
    {
        QMessageBox::information(this,"Incomplete Information", "Phone number is not valid.Use country code");
    }
    else
    {
        SetData();

        return true;
    }
}

void ProfileU::EditData()
{
    QSqlQuery qry;
    QString str = "UPDATE User1 SET NAME=:name,EMAIL=:Email,PHONE=:phone,ADDRESS=:address WHERE EMAIL=:email";
    qry.prepare(str);
    qry.bindValue(":email",Email);
    qry.bindValue(":name",Name);
    qry.bindValue(":Email",Email);
    qry.bindValue(":phone",Phone);
    qry.bindValue(":address",Address);
    qry.exec();
}

void ProfileU::on_pushButton_clicked()
{

    EditData();
    QMessageBox::information(this,"Edit Data","Your Data  has been changed");
    hide();

}




void ProfileU::on_pushButton_2_clicked()
{
    hide();
}

