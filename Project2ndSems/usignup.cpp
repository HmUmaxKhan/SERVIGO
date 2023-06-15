#include "usignup.h"
#include "ui_usignup.h"

USignUp::USignUp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::USignUp)
{
    ui->setupUi(this);

    if(SqlSet())
    {
        QMessageBox::information(this,"Database Issue","Please connect to same internet connection as Server.");
    }
}

USignUp::~USignUp()
{
    delete ui;
}

void USignUp::setData()
{
    name = ui->lineEdit_0->text();
    email = ui->lineEdit_1->text();
    phone = ui->lineEdit_2->text();
    cnic = ui->lineEdit_3->text();
    password = ui->lineEdit_4->text();
    address = ui->lineEdit_5->text();
}

void USignUp::setupdatabase()
{
    setData();

    if(!checkCNIC())
    {
    if(!checkEmail())
    {
    if(!checkPhone())
    {
    QSqlQuery query;
    QString insertData = "INSERT INTO User1 (NAME,EMAIL,PHONE,CNIC,PASSWORD,ADDRESS,STATUS,STATUS2) VALUES (:val0, :val1, :val2, :val3, :val4, :val5, :val6, :val7)";
    query.prepare(insertData);

    query.bindValue(":val0",name);
    query.bindValue(":val1",email);
    query.bindValue(":val2",phone);
    query.bindValue(":val3",cnic);
    query.bindValue(":val4",password);
    query.bindValue(":val5",address);
    query.bindValue(":val6",0);
    query.bindValue(":val7",0);

    if(query.exec())
    {
        db.close();
        RegComplete *reg;
        reg = new RegComplete;
        hide();
        reg->showMaximized();
    }
    else
    {
        QMessageBox::information(this,"Database Issue","Database (Query) is not working yet. Please try again later.");
    }
    }
    else
    {
       QMessageBox::information(this,"SignUp Failure","This phone number is already registered.");
    }
    }
    else
    {
       QMessageBox::information(this,"SignUp Failure","This Email is already registered.");
    }
    }
    else
    {
      QMessageBox::information(this,"SignUp Failure","CNIC is already registered.");
    }


}

bool USignUp::checkEmail()
{
    setData();
    QString tab = "User1";
    QString con = "EMAIL";

    if(SetCheck(tab,con,email))
    {
       return true;
    }
    else
    {
       return false;
    }

}

bool USignUp::checkPhone()
{
    SqlSet();
    setData();

    QString tab = "User1";
    QString con = "PHONE";

    if(SetCheck(tab,con,phone))
    {
       return true;
    }
    else
    {
       return false;
    }
}

bool USignUp::checkCNIC()
{
    SqlSet();
    QString tab = "User1";
    QString con = "CNIC";

    if(SetCheck(tab,con,cnic))
    {
       return true;
    }
    else
    {
       return false;
    }
}

void USignUp::on_SUBMIT_clicked()
{
    static  QRegularExpression reg1("^[A-Za-z\\ ]+$");
    static  QRegularExpression reg2("^[0-9]{13}$");
    static  QRegularExpression reg3("^[0-9\\+]{13}$");

    if(ui->lineEdit_0->text().isEmpty() || ui->lineEdit_1->text().isEmpty() || ui->lineEdit_2->text().isEmpty() ||
        ui->lineEdit_3->text().isEmpty() || ui->lineEdit_4->text().isEmpty() || ui->lineEdit_5->text().isEmpty() )
    {
        QMessageBox::information(this,"Incomplete Information", "Please fill all the sections");
    }
    else if (!reg1.match(ui->lineEdit_0->text()).hasMatch())
    {
        QMessageBox::information(this,"Incomplete Information", "Only alphabets are allowed");
    }
    else if (!(reg2.match(ui->lineEdit_3->text()).hasMatch()))
    {
        QMessageBox::information(this,"Incomplete Information", "CNIC is not valid. Insert only numbers");
    }
    else if (!reg3.match(ui->lineEdit_2->text()).hasMatch())
    {
        QMessageBox::information(this,"Incomplete Information", "Phone number is not valis.Use country code code");
    }
    else
    {
        setupdatabase();
    }
}


void USignUp::on_Back_clicked()
{
    Ulogin *log;
    log = new Ulogin;
    hide();
    log->showMaximized();

}

