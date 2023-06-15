#include "task2.h"
#include "ui_task2.h"
#include<QDateTime>
#include<QRegularExpression>

Task2::Task2(QString& email,QWidget *parent) :
    emailU(email),QDialog(parent),
    ui(new Ui::Task2)
{
    ui->setupUi(this);
}

Task2::~Task2()
{
    delete ui;
}



bool Task2::check()
{

    int accept;
    setData();
    QSqlQuery qry;
    QString check = "SELECT Accepted2 FROM Service WHERE EMAIL = :email";
    qry.prepare(check);

    qry.bindValue(":email",emailT2);


    if (qry.exec() && qry.next())
    {
        accept = qry.value(0).toInt();
        qDebug () << accept;

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


void Task2::setData()
{
    emailT2= ui->lineEdit->text();
    msgT2 = ui->textEdit->toPlainText();
    address = ui->lineEdit_2->text();
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString customFormat = "dd/MM/yyyy hh:mm:ss AP";
    time = currentDateTime.toString(customFormat);

}

bool Task2::sendT1()
{
    setData();


    QString a = "Service";
    QString b = "EMAIL";


    if(SetCheck(a,b,emailT2))
    {
        return true;
    }
    else
    {
        QMessageBox::information(this,"TASK INFO","Please enter correct Email.");
    }

}

void Task2::setTask()
{
    if(sendT1())
    {
        setData();
        QSqlQuery query;
        QString insertData1 = "UPDATE Service SET TASK2 = :val0 , EMAILT2= :val1 WHERE EMAIL = :email";
        query.prepare(insertData1);

        query.bindValue(":val0",msgT2);
        query.bindValue(":email",emailT2);
        query.bindValue(":val1",emailU);
        if(query.exec())
        {
            setStatus();
            QMessageBox::information(this,"TASK INFO","TASK2 is sent.");
            db.commit();

            QString insertData2 = "UPDATE Service SET Accepted2 = :accept1 WHERE EMAIL = :email";
            query.prepare(insertData2);
            query.bindValue(":email",emailT2);
            query.bindValue(":accept1",1);
            query.exec();
        }
        else
        {
            QMessageBox::information(this,"TASK INFO","TASK2 is not sent.");
        }
    }

}

void Task2::setStatus()
{
    setData();
    QSqlQuery Qry;
    QString str = "UPDATE User1 SET CURRENTADD =:address, STATUS2 = :status, DATE2=:time WHERE EMAIL = :email";
    Qry.prepare(str);
    Qry.bindValue(":address",address);
    Qry.bindValue(":email",emailU);
    Qry.bindValue(":status",1);
    Qry.bindValue(":time",time);
    Qry.exec();
}


void Task2::record()
{
    setData();
    QSqlQuery qry;
    QString str = "INSERT INTO Recod (TASKS,USERS,SERVIGO,DATE) VALUES (:val0,:val1,:val2,:val3)";
    qry.prepare(str);

    qry.bindValue(":val0",msgT2);
    qry.bindValue(":val1",emailU);
    qry.bindValue(":val2",emailT2);
    qry.bindValue(":val3",time);
    if(!qry.exec())
    {
        qDebug () << "Error setStatus";
    }
}

void Task2::on_pushButton_clicked()
{
    hide();
}

void Task2::on_pushButton_2_clicked()
{
    if(ui->lineEdit_2->text().isEmpty())
    {
        QMessageBox::information(this,"TASK2","Please enter the current location");
    }
    if (check())
    {
        QMessageBox::information(this,"Already Assigned","TASK 2 is already assigned. Try again later");
    }
    else
    {
        setTask();
        record();
    }
}


