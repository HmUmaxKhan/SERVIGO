#ifndef PROFILEU_H
#define PROFILEU_H

#include <QMainWindow>
#include <QMessageBox>
#include "sql.h"
namespace Ui {
class ProfileU;
}

class ProfileU : public QMainWindow , public Sql
{
    Q_OBJECT

public:
    explicit ProfileU(QString& email,QWidget *parent = nullptr);
    ~ProfileU();

    bool TakeData();
    void getData();
    void SetData();
    void EditData();
    bool CheckData();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ProfileU *ui;
    QString Name,Phone,Email,Address;
};

#endif // PROFILEU_H
