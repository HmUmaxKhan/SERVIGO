#ifndef PROFESSION_H
#define PROFESSION_H

#include <QMainWindow>
#include"slogin.h"
#include"SignUp.h"
//#include"electrician.h"
//#include"laundary.h"


namespace Ui {
class Profession;
}

class Profession : public QMainWindow
{
    Q_OBJECT

public:
    explicit Profession(QWidget *parent = nullptr);
    ~Profession();

private slots:
    void on_Doctor_clicked();

    void on_Cable_clicked();

    void on_Mechanic_clicked();

    void on_Plumber_clicked();

    void on_Electrician_clicked();

    void on_Laundary_clicked();

    void on_Back_clicked();

private:
    Ui::Profession *ui;
};

#endif // PROFESSION_H
