#ifndef HISTORYUSER_H
#define HISTORYUSER_H

#include <QDialog>
#include<QMessageBox>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include <QSqlQueryModel>

namespace Ui {
class historyUser;
}

class historyUser : public QDialog
{
    Q_OBJECT


public:
    explicit historyUser(QString& email,QWidget *parent = nullptr);
    ~historyUser();

    void historyShow();

private:
    Ui::historyUser *ui;

    QSqlQueryModel *model;
    QSqlDatabase db;
    QString emailU;
};

#endif // HISTORYUSER_H
