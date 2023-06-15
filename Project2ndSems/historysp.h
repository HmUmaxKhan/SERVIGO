#ifndef HISTORYSP_H
#define HISTORYSP_H

#include <QDialog>
#include<QMessageBox>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include <QSqlQueryModel>


namespace Ui {
class historySP;
}

class historySP : public QDialog
{
    Q_OBJECT

public:
    explicit historySP(QString& email,QWidget *parent = nullptr);
    ~historySP();

    void historyShow();
private:
    Ui::historySP *ui;

    QSqlQueryModel *model;
    QSqlDatabase db;
    QString emailSP;
};

#endif // HISTORYSP_H
