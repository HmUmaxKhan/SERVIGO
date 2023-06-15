#ifndef EDITU_H
#define EDITU_H

#include <QDialog>
#include<QMessageBox>
#include "sql.h"

namespace Ui {
class editU;
}

class editU : public QDialog , public Sql
{
    Q_OBJECT

public:
    explicit editU(QWidget *parent = nullptr);
    ~editU();

    void setData();
    void setPass();
    bool checkSec();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::editU *ui;
    QString cnic,pass,cnfrmPass;
    QSqlDatabase db;
};

#endif // EDITU_H
