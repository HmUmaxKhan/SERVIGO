#ifndef SP_INTER_H
#define SP_INTER_H

#include <QMainWindow>
#include "PolySP.h"
#include "slogin.h"
#include "sql.h"
#include<QMessageBox>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>

namespace Ui {
class SPinter;
}

class SPinter : public QMainWindow , PolySP , public Sql
{
    Q_OBJECT

public:
    explicit SPinter(QString& email,QWidget *parent = nullptr);
    ~SPinter();

    bool check1();
    void getEmail1();
    void setData1();
    void getData1();
    void resetData1();

    bool check2();
    void getEmail2();
    void setData2();
    void getData2();
    void resetData2();

    void setAccept1();
    void setDecline1();
    void setComplete1();

    void setAccept2();
    void setDecline2();
    void setComplete2();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();


    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

private:
    Ui::SPinter *ui;

    QString emailU,phone1,name1,currentAdd1,msg1,time1;
    QString emailU2,phone2,name2,currentAdd2,msg2,time2;
    QString email1;
    QSqlDatabase db;

};

#endif // SP_INTER_H
