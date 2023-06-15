#include "userinter.h"
#include "ui_userinter.h"
#include "ulogin.h"
#include "historyuser.h"
#include "profileu.h"


UserInter::UserInter(QString& email1,QWidget *parent) :
    emailUser(email1) ,QMainWindow(parent),
    ui(new Ui::UserInter)
{
    ui->setupUi(this);


    ui->comboBox->addItem("Doctor");
    ui->comboBox->addItem("Cable Operator");
    ui->comboBox->addItem("Mechanic");
    ui->comboBox->addItem("Plumber");
    ui->comboBox->addItem("Electrician");
    ui->comboBox->addItem("Laundary");

    model = new QSqlQueryModel;

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

    showStatus1();
    showStatus2();
}

UserInter::~UserInter()
{
    delete ui;
}


void UserInter::setData()
{
    profession = ui->comboBox->currentText();


    if (ui->lineEdit->text().isEmpty())
    {
        address = "";
    }
    else
    {
        address = ui->lineEdit->text();
    }

    if (ui->lineEdit_3->text().isEmpty())
    {
        email = "com";
    }
    else
    {
        email = ui->lineEdit_3->text();
    }

}


void UserInter::showData()
{
    setData();
    QSqlQuery query;
    QString str="SELECT NAME,EMAIL,PHONE,ADDRESS,EXPERIENCE,PRICE,PROFESSION FROM Service WHERE PROFESSION = :profession AND ADDRESS LIKE :abad AND EMAIL LIKE :com";
       query.prepare(str);
       query.bindValue(":profession", profession);
       query.bindValue(":abad","%" + address +"%");
       query.bindValue(":com","%" + email +"%");

       if (query.exec())
       {
           model->setQuery(query);
           ui->tableView->setModel(model);
       }
       else
       {
           QMessageBox::information(this,"Database","Not Available  Required Srvice");
       }

}

void UserInter::showStatus1()
{

       QFont font("Ariel",12,QFont::Bold);
           setData();
           QSqlQuery Qry;
           QString str = "SELECT STATUS FROM User1 WHERE EMAIL = :email";
           Qry.prepare(str);
           Qry.bindValue(":email",emailUser);

           if (Qry.exec() && Qry.next())
           {
               status = Qry.value(0).toInt();


               if (status == 0)
               {
                   ui->Status->setFont(font);
                   ui->Status->setText("No");
               }
               else if(status == 1)
               {
                   ui->Status->setFont(font);
                   ui->Status->setText("Pending");
               }
               else if(status == 2)
               {
                   ui->Status->setFont(font);
                   ui->Status->setText("Accepted");
               }
               else if(status == 3)
               {
                   ui->Status->setFont(font);
                   ui->Status->setText("Completed");
               }
           }


}

void UserInter::showStatus2()
{

           QFont font("Ariel",12,QFont::Bold);



               setData();
               QSqlQuery Qry;
               QString str = "SELECT STATUS2 FROM User1 WHERE EMAIL = :email";
               Qry.prepare(str);
               Qry.bindValue(":email",emailUser);

               if (Qry.exec() && Qry.next())
               {
                   status2 = Qry.value(0).toInt();


                   if (status2 == 0)
                   {
                       ui->Status_2->setFont(font);
                       ui->Status_2->setText("No");
                   }
                   else if(status2 == 1)
                   {
                       ui->Status_2->setFont(font);
                       ui->Status_2->setText("Pending");
                   }
                   else if(status2 == 2)
                   {
                       ui->Status_2->setFont(font);
                       ui->Status_2->setText("Accepted");
                   }
                   else if(status2 == 3)
                   {
                       ui->Status_2->setFont(font);
                       ui->Status_2->setText("Completed");

                   }
               }


}


void UserInter::on_pushButton_clicked()
{
   showData();
}


void UserInter::on_pushButton_2_clicked()
{
   Task1 *t1;
   t1 = new Task1(emailUser);
   t1->show();
}


void UserInter::on_pushButton_3_clicked()
{
   Task2 *t2;
   t2 = new Task2(emailUser);
   t2->show();
}


void UserInter::on_pushButton_4_clicked()
{
   Ulogin *log;
   log = new Ulogin;
   log->showMaximized();
   hide();
}


void UserInter::on_pushButton_5_clicked()
{
   historyUser *user;
   user = new historyUser(emailUser);
   user->show();
}


void UserInter::on_pushButton_8_clicked()
{
   ProfileU *pro;
   pro = new ProfileU(emailUser);
   pro->showMaximized();
}


void UserInter::on_pushButton_9_clicked()
{
   QWebEngineView* view;

   view = new QWebEngineView;
   view->setFixedSize(800, 600);

   view->setUrl(QUrl("myresource.qrc:/map/googlemap.html"));

   view->show();
}

