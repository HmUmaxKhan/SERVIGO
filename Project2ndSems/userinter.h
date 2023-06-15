#ifndef USERINTER_H
#define USERINTER_H

#include <QMainWindow>
#include<QSqlDatabase>
#include <QTableView>
#include<QSqlDriver>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QMessageBox>
#include"task_1.h"
#include"task2.h"
#include"ulogin.h"
#include <QWebEngineView>
#include <QUrl>
#include <QApplication>
#include "googlemaps.h"

namespace Ui {
class UserInter;
}

class UserInter : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserInter(QString& email1,QWidget *parent = nullptr);
    ~UserInter();

    void showData();
    void setData();
    void showStatus1();
    void showStatus2();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::UserInter *ui;

    QSqlDatabase db;
    QSqlQueryModel *model;
    QString profession,address,email,email2,emailUser;
    int status,status2;

};

#endif // USERINTER_H
