#include "ui_SignUp.h"
#include "SignUp.h"
#include<QLineEdit>

Doctor::Doctor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SignUp)
{
    ui->setupUi(this);

    ui->comboBox->addItem("Doctor");
    ui->comboBox->addItem("Cable Operator");
    ui->comboBox->addItem("Mechanic");
    ui->comboBox->addItem("Plumber");
    ui->comboBox->addItem("Electrician");
    ui->comboBox->addItem("Laundary");

    if(SqlSet())
    {
        QMessageBox::information(this,"Database Issue","Please connect to same internet connection as Server.");
    }
}

Doctor::~Doctor()
{
    delete ui;
}

void Doctor::setData()
{
    name= ui->lineEdit_0->text();
    email = ui->lineEdit_1->text();
    phone= ui->lineEdit_2->text();
    address= ui->lineEdit_3->text();
    experience = ui->lineEdit_4->text();
    price = ui->lineEdit_5->text();
    cnic = ui->lineEdit_6->text();
    password = ui->lineEdit_7->text();
    profession = ui->comboBox->currentText();
}

void Doctor::setupdatabase()
{
    setData();

    if(!checkCNIC())
    {
        if(!checkEmail())
        {
            if(!checkPhone())
            {
                QSqlQuery query;
                QString insertData = "INSERT INTO Service (NAME,EMAIL,PHONE,ADDRESS,EXPERIENCE,PRICE,CNIC,PASSWORD,PROFESSION,Accepted1,Accepted2) VALUES (:val0,:val1,:val2,:val3,:val4,:val5,:val6,:val7,:val8,:val9,:val10)";
                query.prepare(insertData);

                query.bindValue(":val0",name);
                query.bindValue(":val1",email);
                query.bindValue(":val2",phone);
                query.bindValue(":val3",address);
                query.bindValue(":val4",experience);
                query.bindValue(":val5",price);
                query.bindValue(":val6",cnic);
                query.bindValue(":val7",password);
                query.bindValue(":val8",profession);
                query.bindValue(":val9",2);
                query.bindValue(":val10",2);

                if(query.exec())
                {
                    db.commit();
                    RegComplete *reg;
                    reg = new RegComplete;
                    hide();
                    reg->showMaximized();
                    db.close();
                }
                else
                {
                    QMessageBox::information(this,"Database Issue","Database (Query) is not working yet. Please try again later.");
                }
            }
            else
            {
                QMessageBox::information(this,"SignUp Failure","Phone number is already registered.");
            }
        }
        else
        {
            QMessageBox::information(this,"SignUp Failure","Email is already registered.");
        }
    }
    else
    {
        QMessageBox::information(this,"SignUp Failure","CNIC is already registered.");
    }

}

bool Doctor::checkEmail()
{
    setData();
    QString tab = "Service";
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

bool Doctor::checkPhone()
{
    SqlSet();
    setData();

    QString tab = "Service";
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

bool Doctor::checkCNIC()
{
    SqlSet();
    QString tab = "Service";
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


void Doctor::on_Back_clicked()
{
    Slogin *pro;
    pro = new Slogin;
    pro->showMaximized();
    hide();
}


void Doctor::on_Submit_clicked()

{


    static  QRegularExpression reg1("^[A-Za-z\\ ]+$");
    static  QRegularExpression reg2("^[0-9]{13}$");
    static  QRegularExpression reg3("^[0-9\\+]{13}$");

    if(ui->lineEdit_0->text().isEmpty() || ui->lineEdit_1->text().isEmpty() || ui->lineEdit_2->text().isEmpty() ||
        ui->lineEdit_3->text().isEmpty() || ui->lineEdit_4->text().isEmpty() || ui->lineEdit_5->text().isEmpty() ||
        ui->lineEdit_6->text().isEmpty() || ui->lineEdit_7->text().isEmpty())
    {
        QMessageBox::information(this,"Incomplete Information", "Please fill all the sections");
    }
    else if (!reg1.match(ui->lineEdit_0->text()).hasMatch())
    {
        QMessageBox::information(this,"Incomplete Information", "Only alphabets are allowed");
    }
    else if (!(reg2.match(ui->lineEdit_6->text()).hasMatch()))
    {
        QMessageBox::information(this,"Incomplete Information", "CNIC is not valid. Insert only numbers");
    }
    else if (!reg3.match(ui->lineEdit_2->text()).hasMatch())
    {
        QMessageBox::information(this,"Incomplete Information", "Phone number is not valis.Use country code");
    }
    else if(!(ui->lineEdit_4->text().toInt()<=50 && ui->lineEdit_4->text().toInt()>=1))
    {
        QMessageBox::information(this,"Incomplete Information", "Experience must not greater than 30 years");
    }
    else if(!(ui->lineEdit_5->text().toInt()<=5000 && ui->lineEdit_5->text().toInt()>=100))
    {
        QMessageBox::information(this,"Incomplete Information", "Price must not be greater then 5000 Rs and must not be lesser than 100 Rs");
    }
    else
    {
        setupdatabase();
    }
}

