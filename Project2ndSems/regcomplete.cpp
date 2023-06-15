#include "regcomplete.h"
#include "ui_regcomplete.h"

RegComplete::RegComplete(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RegComplete)
{
    ui->setupUi(this);
}

RegComplete::~RegComplete()
{
    delete ui;
}

void RegComplete::on_pushButton_clicked()
{
    Ulogin *log;
    log =new Ulogin;
    hide();
    log->showMaximized();
}


void RegComplete::on_pushButton_2_clicked()
{
    Slogin *log;
    log =new Slogin;
    hide();
    log->showMaximized();
}

