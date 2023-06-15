#include "sp_inter.h"
#include "ui_sp_inter.h"
#include "QDebug"
#include "historysp.h"
#include "profilesp.h"

SPinter::SPinter(QString& email,QWidget *parent) :
    email1(email),QMainWindow(parent),
    ui(new Ui::SPinter)
{
    ui->setupUi(this);

    if(SqlSet())
    {
        QMessageBox::information(this,"Database Issue","Please connect to same internet connection as Server.");
    }
}

SPinter::~SPinter()
{
    delete ui;
}

bool SPinter::check1()
{
    QSqlQuery qry;
    QString Uemail="SELECT * FROM Service WHERE EMAILT1 = :email ";

    qry.prepare(Uemail);

    qry.bindValue(":email",emailU);

    if(qry.exec() && qry.next())
    {
        return false;
    }
    else
    {
        return true;
    }
}

void SPinter::getEmail1()
{

    QSqlQuery qry;
    QString Uemail="SELECT TASK1, EMAILT1 FROM Service WHERE EMAIL = :email ";

    qry.prepare(Uemail);

    qry.bindValue(":email",email1);


    if(qry.exec())
    {
    while (qry.next())
    {
        emailU = qry.value(1).toString();
        msg1 = qry.value(0).toString();
    }

    }else
    {
       QMessageBox::information(this,"Incorrect Information","Email is not registered");
    }
}

void SPinter::setData1()
{

    QSqlQuery qry;
    QString  Uset = "SELECT NAME,PHONE,CURRENTADD,DATE FROM User1 WHERE EMAIL = :email";
    qry.prepare(Uset);

    qry.bindValue(":email",emailU);

    if(qry.exec())
    {
       while(qry.next())
       {
            name1 = qry.value(0).toString();
            phone1 = qry.value(1).toString();
            currentAdd1 = qry.value(2).toString();
            time1 = qry.value(3).toString();
       }
    }else
    {
        QMessageBox::information(this,"Email Issue","Task 1 given by user email is not registered. Decline the TASK 1");
    }
}

void SPinter::getData1()
{
    QFont font("Arial",14,QFont::Bold);
    ui->Message->setText(msg1);
    ui->Message->setFont(font);

    ui->Address->setText(currentAdd1);
    ui->Address->setFont(font);

    ui->Name->setText(name1);
    ui->Name->setFont(font);

    ui->PHONE->setText(phone1);
    ui->PHONE->setFont(font);

    ui->Time->setText(time1);   
    ui->Time->setFont(font);
}

void SPinter::resetData1()
{
    QFont font("Arial",14,QFont::Bold);
    ui->Name->setText("NONE");
    ui->Name->setFont(font);

    ui->PHONE->setText("NONE");
    ui->PHONE->setFont(font);

    ui->Address->setText("NONE");
    ui->Address->setFont(font);

    ui->Message->setText("NONE");
    ui->Message->setFont(font);

    ui->Time->setText("NONE");
    ui->Time->setFont(font);

    emailU  = 0;
    name1  = 0;
    phone1 = 0;
    currentAdd1 = 0;
    time1 = 0;
}

void SPinter::on_pushButton_clicked()
{
    getEmail1();

    if(check1())
    {
        QMessageBox::information(this,"Task","No Task is given by user in TASK1 Slot");
    }
    else
    {
    setData1();
    getData1();
    }
}

bool SPinter::check2()
{
    QSqlQuery qry;
    QString Uemail="SELECT * FROM Service WHERE EMAILT2 = :email ";

    qry.prepare(Uemail);

    qry.bindValue(":email",emailU2);

    if(qry.exec()&&qry.next())
    {
    return false;
    }
    else
    {
    return true;
    }

}

void SPinter::getEmail2()
{

    QSqlQuery qry;
    QString Uemail="SELECT TASK2,EMAILT2 FROM Service WHERE EMAIL = :email ";

    qry.prepare(Uemail);
    qry.bindValue(":email",email1);

    if(qry.exec())
    {
        while (qry.next())
        {
            msg2 = qry.value(0).toString();
            emailU2 = qry.value(1).toString();
        }
    }else
    {
        QMessageBox::information(this,"Incorrect Information","Enter phone number through which you are registered");
    }
}

void SPinter::setData2()
{

    QSqlQuery qry;
    QString  Uset = "SELECT NAME,PHONE,CURRENTADD,DATE2 FROM User1 WHERE EMAIL = :email";
    qry.prepare(Uset);

    qry.bindValue(":email",emailU2);

    if(qry.exec())
    {
        while(qry.next())
        {
            name2 = qry.value(0).toString();
            phone2 = qry.value(1).toString();
            currentAdd2 = qry.value(2).toString();
            time2 = qry.value(3).toString();
        }
    }else
    {
        QMessageBox::information(this,"Email Issue","Task 2 given by user email is not registered. Decline the TASK 2");
    }
}

void SPinter::getData2()
{
    QFont font("Arial",14,QFont::Bold);
    ui->Message_2->setText(msg2);
    ui->Message_2->setFont(font);

    ui->Address_2->setText(currentAdd2);
    ui->Address_2->setFont(font);

    ui->Name_2->setText(name2);
    ui->Name_2->setFont(font);

    ui->PHONE_2->setText(phone2);
    ui->PHONE_2->setFont(font);

    ui->Time2->setText(time2);
    ui->Time2->setFont(font);
}

void SPinter::resetData2()
{
    QFont font("Arial",14,QFont::Bold);
    ui->Name_2->setText("NONE");
    ui->Name_2->setFont(font);

    ui->PHONE_2->setText("NONE");
    ui->PHONE_2->setFont(font);

    ui->Address_2->setText("NONE");
    ui->Address_2->setFont(font);

    ui->Message_2->setText("NONE");
    ui->Message_2->setFont(font);

    ui->Time2->setText("NONE");
    ui->Time2->setFont(font);

    time2 = 0;
    emailU2  = 0;
    name2  = 0;
    phone2 = 0;
    currentAdd2 = 0;
}

void SPinter::on_pushButton_2_clicked()
{
    getEmail2();

    if(check2())
    {
        QMessageBox::information(this,"Task","No Task is given by user in TASK2 Slot");
    }
    else
    {
        setData2();
        getData2();
    }
}

void SPinter::setAccept1()
{
    QSqlQuery qry;
    QString  str = "UPDATE User1 SET STATUS = :set WHERE EMAIL = :email";
    qry.prepare(str);
    qry.bindValue(":email",emailU);
    qry.bindValue(":set",2);
    qry.exec();

}

void SPinter::setDecline1()
{
    QSqlQuery qry;
    QString  str = "UPDATE User1 SET STATUS = :set WHERE EMAIL = :email";
    qry.prepare(str);
    qry.bindValue(":email",emailU);
    qry.bindValue(":set",0);
    qry.exec();
    db.commit();

}

void SPinter::setComplete1()
{
        QSqlQuery qry;
        QString  str = "UPDATE User1 SET STATUS = :set WHERE EMAIL = :email";
        qry.prepare(str);
        qry.bindValue(":email",emailU);
        qry.bindValue(":set",3);
        qry.exec();


}

void SPinter::setAccept2()
{
    QSqlQuery qry;
    QString  str = "UPDATE User1 SET STATUS2 = :set WHERE EMAIL = :email";
    qry.prepare(str);
    qry.bindValue(":email",emailU2);
    qry.bindValue(":set",2);
    qry.exec();
}

void SPinter::setDecline2()
{
    QSqlQuery qry;
    QString  str = "UPDATE User1 SET STATUS2 = :set WHERE EMAIL = :email";
    qry.prepare(str);
    qry.bindValue(":email",emailU2);
    qry.bindValue(":set",0);
    qry.exec();
}

void SPinter::setComplete2()
{
    QSqlQuery qry;
    QString  str = "UPDATE User1 SET STATUS2 = :set WHERE EMAIL = :email";
    qry.prepare(str);
    qry.bindValue(":email",emailU2);
    qry.bindValue(":set",3);
    qry.exec();
}

void SPinter::on_pushButton_3_clicked()
{
    if(check1())
    {
        QMessageBox::information(this,"Task","No Task is given by user in TASK1 Slot");
    }
    else
    {
    QSqlQuery qry;
    QString str = "UPDATE Service SET Accepted1 = :accept WHERE EMAIL = :email ";
    qry.prepare(str);
    qry.bindValue(":email",email1);
    qry.bindValue(":accept",1);

    if(qry.exec())
    {
        setAccept1();
        QMessageBox::information(this,"TASK 1 STATUS","You are assigned TASK1");
    }
    else
    {
        QMessageBox::information(this,"System Isuues","There is some network issue. Please try again later.");
    }
    }
}


void SPinter::on_pushButton_5_clicked()
{
    if(check1())
    {
    QMessageBox::information(this,"Task","No Task is given by user in TASK1 Slot");
    }
    else
    {
    QSqlQuery qry;
    QString str = "UPDATE Service SET TASK1 = NULL , EMAILT1 = NULL , Accepted1 = :accept WHERE EMAIL = :email ";
    qry.prepare(str);
    qry.bindValue(":email",email1);
    qry.bindValue(":accept",2);

    if(qry.exec())
    {
        setDecline1();
        resetData1();
        QMessageBox::warning(this,"Decline","You have declined the TASK1.");
    }
    else
    {
        QMessageBox::information(this,"System Isuues","There is some network issue. Please try again later.");
    }
    }
}


void SPinter::on_pushButton_7_clicked()
{
    if(check1())
    {
    QMessageBox::information(this,"Task","No Task is given by user in TASK1 Slot");
    }
    else
    {
    QSqlQuery qry;
    QString str = "UPDATE Service SET Accepted1 = :accept, TASK1 = NULL, EMAILT1 = NULL WHERE EMAIL = :email ";
    qry.prepare(str);
    qry.bindValue(":email",email1);
    qry.bindValue(":accept",2);

    if(qry.exec())
    {
       setComplete1();
       resetData1();
       QMessageBox::information(this,"Completition","Congratulations you have completed your TASK1");
    }
    else
    {
        QMessageBox::information(this,"System Isuues","There is some network issue. Please try again later.");
    }
    }
}


void SPinter::on_pushButton_4_clicked()
{
    if(check2())
    {
    QMessageBox::information(this,"Task","No Task is given by user in TASK2 Slot");
    }
    else
    {
    QSqlQuery qry;
    QString str = "UPDATE Service SET Accepted2 = :accept WHERE PHONE = :email ";
    qry.prepare(str);
    qry.bindValue(":email",email1);
    qry.bindValue(":accept",1);
    if(qry.exec())
    {
        setAccept2();
        QMessageBox::information(this,"TASK 2 STATUS","You are assigned Task2");
    }
    else
    {
        QMessageBox::information(this,"System Isuues","There is some network issue. Please try again later.");
    }
    }
}


void SPinter::on_pushButton_6_clicked()
{
    if(check2())
    {
    QMessageBox::information(this,"Task","No Task is given by user in TASK2 Slot");
    }
    else
    {
    QSqlQuery qry;
    QString str = "UPDATE Service SET TASK2 = NULL , EMAILT2 = NULL , Accepted2 = :accept WHERE EMAIL = :email ";
    qry.prepare(str);
    qry.bindValue(":email",email1);
    qry.bindValue(":accept",2);

    if(qry.exec())
    {
        setDecline2();
        resetData2();
        QMessageBox::warning(this,"Decline","You have declined the TASK2.");
    }
    else
    {
        QMessageBox::information(this,"System Isuues","There is some network issue. Please try again later.");
    }
    }
}


void SPinter::on_pushButton_8_clicked()
{
    if(check2())
    {
    QMessageBox::information(this,"Task","No Task is given by user in TASK2 Slot");
    }
    else
    {
    QSqlQuery qry;
    QString str = "UPDATE Service SET Accepted2 = :accept, TASK2 = NULL , EMAILT2 = NULL WHERE EMAIL = :email ";
    qry.prepare(str);
    qry.bindValue(":email",email1);
    qry.bindValue(":accept",2);

    if(qry.exec())
    {
        setComplete2();
        resetData2();
        QMessageBox::information(this,"Completition","Congratulations you have completed your TASK2");
    }
    else
    {
        QMessageBox::information(this,"System Isuues","There is some network issue. Please try again later.");
    }
    }
}


void SPinter::on_pushButton_9_clicked()
{
    Slogin *log;
    log = new Slogin;
    log->showMaximized();
    hide();
}


void SPinter::on_pushButton_10_clicked()
{
    historySP *his;
    his = new historySP(email1);
    his->show();
}


void SPinter::on_pushButton_11_clicked()
{
    ProfileSP *pro;
    pro = new ProfileSP(email1);
    pro->showMaximized();
}

