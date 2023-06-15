#include "ulogin.h"
#include "ui_ulogin.h"
#include"userinter.h"
#include"editu.h"

Ulogin::Ulogin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Ulogin)
{
    ui->setupUi(this);

    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");

    // Set the connection parameters
    db.setDatabaseName("DRIVER={SQL Server Native Client 11.0};"
                       "Server=YourServerIPAddress,PortNumber;"
                       "Database=YourDatabaseName;"
                       "Uid=YourUsername;"
                       "Pwd=YourPassword;");

    // Add server of your ip address, Port number, Database name , username , password
    db.open();

    if(!db.isOpen())
    {
        QMessageBox::information(this,"Database Issue","Please connect the same internet connection as Server.");
    }
}

Ulogin::~Ulogin()
{
    delete ui;
}

void Ulogin::setData()
{
    email = ui->lineEdit->text();
    password = ui->lineEdit_2->text();
}

bool Ulogin::checkData()
{
    setData();

    QSqlQuery qry;
    QString str = "SELECT * FROM User1 WHERE EMAIL = :email AND PASSWORD = :password";
    qry.prepare(str);
    qry.bindValue(":email", email);
    qry.bindValue(":password", password);

    if(qry.exec() && qry.next())
    {
    return true;
    }
    else
    {
    return false;
    }
}


void Ulogin::on_Back_clicked()
{
    Selection *sel;
    sel = new Selection;
    hide();
    sel->showMaximized();
}



void Ulogin::on_SignIn_clicked()
{
    if (ui->lineEdit->text().isEmpty() || ui->lineEdit_2->text().isEmpty())
    {
        QMessageBox::information(this,"Login Failure","Please fill all the sections.");
    }
    else if(checkData())
    {
    UserInter *it;
    it = new UserInter(email);
    it->showMaximized();
    hide();
    }
    else
    {
        QMessageBox::information(this,"Login Failure","Your Eamil or Password is incorrect.");
    }
}


void Ulogin::on_Signup_clicked()
{
    USignUp *up;
    up = new USignUp;
    hide();
    up->showMaximized();
}


void Ulogin::on_pushButton_clicked()
{
    editU *eu;
    eu = new editU;
    eu->show();
}

