#include "selection1.h"
#include "ui_selection1.h"

Selection::Selection(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Selection1)
{
    ui->setupUi(this);
}

Selection::~Selection()
{
    delete ui;
}


void Selection::on_pushButton_2_clicked()
{
    Slogin *log;
    log = new Slogin;
    hide();
    log->showMaximized();
}


void Selection::on_pushButton_clicked()
{
    Ulogin *log;
    log = new Ulogin;
    log->showMaximized();
}


