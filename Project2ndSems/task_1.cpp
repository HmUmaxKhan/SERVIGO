#include "task_1.h"
#include "ui_task_1.h"
#include "ulogin.h"
#include<QDateTime>
#include<QDebug>

Task1::Task1(QString& email,QWidget *parent) :
    emailU(email),QDialog(parent),
    ui(new Ui::Task1)
{
    ui->setupUi(this);
}

Task1::~Task1()
{
    delete ui;
}



bool Task1::check()
{

    int accept;
    setData();
    QSqlQuery qry;
    QString check = "SELECT Accepted1 FROM Service WHERE EMAIL = :email";
    qry.prepare(check);

    qry.bindValue(":email",emailSP);


    if (qry.exec() && qry.next())
    {
        accept = qry.value(0).toInt();
        if (accept==1 || accept==0)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
}


void Task1::setData()
{
    emailSP= ui->lineEdit->text();
    message1 = ui->textEdit->toPlainText();
    address = ui->lineEdit_2->text();
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString customFormat = "dd/MM/yyyy hh:mm:ss AP";
    time = currentDateTime.toString(customFormat);
}

bool Task1::sendT1()
{
    setData();


    QString a = "Service";
    QString b = "EMAIL";


    if(SetCheck(a,b,emailSP))
    {
        return true;
    }
    else
    {
        QMessageBox::information(this,"TASK INFO","Please enter correct Email.");
    }

}

void Task1::setTask()
{
    if(sendT1())
    {
        setData();
        QSqlQuery query;
        QString insertData1 = "UPDATE Service SET TASK1 = :val0 , EMAILT1= :val1  WHERE EMAIL = :email";
        query.prepare(insertData1);

        query.bindValue(":val0",message1);
        query.bindValue(":email",emailSP);
        query.bindValue(":val1",emailU);
        if(query.exec())
        {
            setStatus();
            QMessageBox::information(this,"TASK INFO","TASK1 is sent.");
        }
        else
        {
            QMessageBox::information(this,"TASK INFO","TASK1 is not sent.");
        }

        QString insertData2 = "UPDATE Service SET Accepted1 =:accept WHERE EMAIL = :email";
        query.prepare(insertData2);
        query.bindValue(":email",emailSP);
        query.bindValue(":accept",1);
        query.exec();
    }

}

void Task1::setStatus()
{
    setData();
    QSqlQuery Qry;
    QString str = "UPDATE User1 SET CURRENTADD=:address, STATUS =:status, DATE =:date WHERE EMAIL =:email";
    Qry.prepare(str);
    Qry.bindValue(":address",address);
    Qry.bindValue(":email",emailU);
    Qry.bindValue(":status",1);
    Qry.bindValue(":date",time);
    if(!Qry.exec())
    {
        qDebug () << "Error setStatus";
    }

}

void Task1::record()
{
    setData();
    QSqlQuery qry;
    QString str = "INSERT INTO Recod (TASKS,USERS,SERVIGO,DATE) VALUES (:val0,:val1,:val2,:val3)";
    qry.prepare(str);

    qry.bindValue(":val0",message1);
    qry.bindValue(":val1",emailU);
    qry.bindValue(":val2",emailSP);
    qry.bindValue(":val3",time);
    if(!qry.exec())
    {
        qDebug () << "Error setStatus";
    }
}

void Task1::on_pushButton_clicked()
{
    hide();
}


void Task1::on_pushButton_2_clicked()
{

    if(ui->lineEdit_2->text().isEmpty())
    {
        QMessageBox::information(this,"TASK1","Please enter your current location");
    }
    if (check())
    {
        QMessageBox::information(this,"Already Assigned","TASK 1 is already assigned. Try your luck in Task2");
    }
    else
    {
        record();
        setTask();
    }
}



