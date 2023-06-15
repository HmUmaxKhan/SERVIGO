#include "historyuser.h"
#include "ui_historyuser.h"

historyUser::historyUser(QString& email,QWidget *parent) :
    emailU(email),QDialog(parent),
    ui(new Ui::historyUser)
{
    ui->setupUi(this);
    model= new QSqlQueryModel;

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


    QString str = "QHeaderView::section{" "background: white;" "color black;" "}";

    ui->tableView->horizontalHeader()->setStyleSheet(str);

    historyShow();
}

historyUser::~historyUser()
{
    delete ui;
}

void historyUser::historyShow()
{
    QSqlQuery qry;
    QString str="SELECT TASKS,SERVIGO,DATE FROM Recod WHERE USERS=:user ";
    qry.prepare(str);
    qry.bindValue(":user",emailU);

    if (qry.exec())
    {
        model->setQuery(qry);
        ui->tableView->setModel(model);
    }
    else
    {
        QMessageBox::information(this,"Database","Not Available  Required Srvice");
    }

}
