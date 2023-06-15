#ifndef EDITSP_H
#define EDITSP_H

#include <QDialog>
#include<QMessageBox>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include "slogin.h"
#include "sql.h"

namespace Ui {
class EditSP;
}

class EditSP : public QDialog, Sql
{
    Q_OBJECT

public:
    explicit EditSP(QWidget *parent = nullptr);
    ~EditSP();



    void setData();
    void setPass();
    bool checkSec();


public slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::EditSP *ui;
    QString cnic,pass,cnfrmPass;


};

#endif // EDITSP_H
