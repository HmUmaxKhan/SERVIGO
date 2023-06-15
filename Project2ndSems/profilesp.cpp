#include "profilesp.h"
#include "ui_profilesp.h"
#include "sp_inter.h"

ProfileSP::ProfileSP(QString& email,QWidget *parent) :
    Email(email) ,QMainWindow(parent),
    ui(new Ui::ProfileSP)
{
    ui->setupUi(this);

    if(SqlSet())
    {
        QMessageBox::information(this,"Database Issue","Please connect to same internet connection as Server.");
    }

    getData();
}

ProfileSP::~ProfileSP()
{
    delete ui;
}

bool ProfileSP::TakeData()
{
    QSqlQuery qry;
    QString str = "SELECT NAME,PHONE,ADDRESS,EXPERIENCE,PRICE FROM Service WHERE EMAIL=:email";
    qry.prepare(str);

    qry.bindValue(":email",Email);
    if(qry.exec())
    {
        while(qry.next())
        {
            Name = qry.value(0).toString();
            Phone = qry.value(1).toString();
            Address = qry.value(2).toString();
            Experience = qry.value(3).toString();
            Weges = qry.value(4).toString();
        }
        return true;
    }
    else
    {
        return false;
    }
}

void ProfileSP::getData()
{
    if(TakeData())
    {
        ui->Name->setText(Name);
        ui->Phone->setText(Phone);
        ui->Email->setText(Email);
        ui->Address->setText(Address);
        ui->Experience->setText(Experience);
        ui->Weges->setText(Weges);
    }
}

void ProfileSP::SetData()
{
    Name = ui->Name->text();
    Email = ui->Email->text();
    Phone = ui->Phone->text();
    Address = ui->Address->text();
    Experience = ui->Experience->text();
    Weges = ui->Weges->text();
}

bool ProfileSP::CheckData()
{
    static  QRegularExpression reg1("^[A-Za-z\\ ]+$");
    static  QRegularExpression reg2("^[0-9\\+]{13}$");

    if(ui->Name->text().isEmpty() || ui->Email->text().isEmpty() || ui->Phone->text().isEmpty()
        || ui->Address->text().isEmpty() || ui->Experience->text().isEmpty() || ui->Weges->text().isEmpty())
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
    else if(!(ui->Experience->text().toInt()<=50 && ui->Experience->text().toInt()>=1))
    {
        QMessageBox::information(this,"Incomplete Information", "Experience must not greater than 50 years");
    }
    else if(!(ui->Weges->text().toInt()<=5000 && ui->Weges->text().toInt()>=100))
    {
        QMessageBox::information(this,"Incomplete Information", "Price must not be greater then 5000 Rs and must not be lesser than 100 Rs");
    }
    else
    {
        SetData();

        return true;
    }

}

void ProfileSP::EditData()
{
    QSqlQuery qry;
    QString str = "UPDATE Service SET NAME=:name,EMAIL=:Email,PHONE=:phone,ADDRESS=:address,EXPERIENCE=:experience,PRICE=:price WHERE EMAIL=:email";
    qry.prepare(str);
    qry.bindValue(":email",Email);
    qry.bindValue(":name",Name);
    qry.bindValue(":Email",Email);
    qry.bindValue(":phone",Phone);
    qry.bindValue(":address",Address);
    qry.bindValue(":experience",Experience);
    qry.bindValue(":price",Weges);
    qry.exec();
}


void ProfileSP::on_pushButton_clicked()
{


    EditData();
    QMessageBox::information(this,"Edit Data","Your Data  has been changed");
    hide();

}


void ProfileSP::on_pushButton_2_clicked()
{
    hide();
}

