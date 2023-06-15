#include "profession.h"
#include "ui_profession.h"


Profession::Profession(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Profession)
{
    ui->setupUi(this);
}

Profession::~Profession()
{
    delete ui;
}

void Profession::on_Doctor_clicked()
{
    Doctor *doc;
    doc = new Doctor;
    doc->showMaximized();
    hide();
}


void Profession::on_Cable_clicked()
{
    Cable *doc;
    doc = new Cable;
    doc->showMaximized();
    hide();
}


void Profession::on_Mechanic_clicked()
{

}


void Profession::on_Plumber_clicked()
{

}


void Profession::on_Electrician_clicked()
{

}


void Profession::on_Laundary_clicked()
{
//    Laundary *doc;
//    doc = new Laundary;
//    doc->showMaximized();
//    hide();
}


void Profession::on_Back_clicked()
{
    Slogin *log;
    log = new Slogin;
    log->showMaximized();
    hide();
}

