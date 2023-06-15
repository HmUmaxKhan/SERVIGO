#ifndef PROFILESP_H
#define PROFILESP_H

#include <QMainWindow>
#include <QMessageBox>
#include "sql.h"

namespace Ui {
class ProfileSP;
}

class ProfileSP : public QMainWindow , public Sql
{
    Q_OBJECT

public:
    explicit ProfileSP(QString& email, QWidget *parent = nullptr);
    ~ProfileSP();

    bool TakeData();
    void getData();
    void SetData();
    void EditData();
    bool CheckData();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ProfileSP *ui;

    QString Name,Phone,Experience,Weges,Email,Address,Ratings;
    int Rate;
};

#endif // PROFILESP_H
