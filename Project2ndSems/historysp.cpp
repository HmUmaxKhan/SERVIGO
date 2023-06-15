#include "historysp.h"
#include "ui_historysp.h"

historySP::historySP(QString& email,QWidget *parent) :
    emailSP(email),QDialog(parent),
    ui(new Ui::historySP)

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

historySP::~historySP()
{
    delete ui;
}

void historySP::historyShow()
{
    QSqlQuery qry;
    QString str="SELECT TASKS,USERS,DATE FROM Recod WHERE SERVIGO=:email ";
    qry.prepare(str);
    qry.bindValue(":email",emailSP);

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
