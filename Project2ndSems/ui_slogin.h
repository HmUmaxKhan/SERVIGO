/********************************************************************************
** Form generated from reading UI file 'slogin.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLOGIN_H
#define UI_SLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Slogin
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QPushButton *SignIn;
    QPushButton *Back;
    QPushButton *SignUp;
    QPushButton *SignIn_2;
    QLabel *label;
    QLabel *label_5;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Slogin)
    {
        if (Slogin->objectName().isEmpty())
            Slogin->setObjectName("Slogin");
        Slogin->resize(1200, 700);
        Slogin->setStyleSheet(QString::fromUtf8("background-image: url(:/background/bG no arrows.png);\n"
"color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(Slogin);
        centralwidget->setObjectName("centralwidget");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(470, 240, 71, 25));
        label_2->setStyleSheet(QString::fromUtf8("#label_2\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(470, 320, 111, 25));
        label_3->setStyleSheet(QString::fromUtf8("#label_3\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(610, 240, 230, 30));
        lineEdit->setStyleSheet(QString::fromUtf8("#lineEdit\n"
"{\n"
"border-radius:10px;\n"
"background:rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0);\n"
"}"));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(610, 320, 230, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("#lineEdit_2\n"
"{\n"
"border-radius:10px;\n"
"background:rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0)\n"
"}"));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(270, 490, 791, 50));
        label_4->setStyleSheet(QString::fromUtf8("#label_4\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        SignIn = new QPushButton(centralwidget);
        SignIn->setObjectName("SignIn");
        SignIn->setGeometry(QRect(550, 390, 110, 37));
        SignIn->setStyleSheet(QString::fromUtf8("#SignIn\n"
"{\n"
"border-radius:10px;\n"
"font:bold;\n"
"border:3px solid rgb(255, 255, 255);\n"
"}"));
        Back = new QPushButton(centralwidget);
        Back->setObjectName("Back");
        Back->setGeometry(QRect(770, 390, 110, 37));
        Back->setStyleSheet(QString::fromUtf8("#Back\n"
"{\n"
"border-radius:10px;\n"
"font:bold;\n"
"border:3px solid rgb(255, 255, 255);\n"
"}"));
        SignUp = new QPushButton(centralwidget);
        SignUp->setObjectName("SignUp");
        SignUp->setGeometry(QRect(680, 580, 110, 37));
        SignUp->setStyleSheet(QString::fromUtf8("#SignUp\n"
"{\n"
"border-radius:10px;\n"
"font:bold;\n"
"border:3px solid rgb(255, 255, 255);\n"
"}"));
        SignIn_2 = new QPushButton(centralwidget);
        SignIn_2->setObjectName("SignIn_2");
        SignIn_2->setGeometry(QRect(650, 450, 141, 37));
        SignIn_2->setStyleSheet(QString::fromUtf8("#SignIn_2\n"
"{\n"
"border-radius:10px;\n"
"font:bold;\n"
"border:3px solid rgb(255, 255, 255);\n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 341, 151));
        label->setStyleSheet(QString::fromUtf8("image: url(:/background/hmu logo.png);"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(550, 30, 291, 141));
        label_5->setStyleSheet(QString::fromUtf8("#label_5\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        Slogin->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Slogin);
        statusbar->setObjectName("statusbar");
        Slogin->setStatusBar(statusbar);

        retranslateUi(Slogin);

        QMetaObject::connectSlotsByName(Slogin);
    } // setupUi

    void retranslateUi(QMainWindow *Slogin)
    {
        Slogin->setWindowTitle(QCoreApplication::translate("Slogin", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("Slogin", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">Email:</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Slogin", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">Password:</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("Slogin", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">If you don't have the account then create it now by clicking the Sign Up button</span></p></body></html>", nullptr));
        SignIn->setText(QCoreApplication::translate("Slogin", "SIGN IN", nullptr));
        Back->setText(QCoreApplication::translate("Slogin", "BACK", nullptr));
        SignUp->setText(QCoreApplication::translate("Slogin", "SIGN UP", nullptr));
        SignIn_2->setText(QCoreApplication::translate("Slogin", "Forget Password", nullptr));
        label->setText(QString());
        label_5->setText(QCoreApplication::translate("Slogin", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:700; color:#ffffff;\">LOGIN</span></p><p align=\"center\"><span style=\" font-size:20pt; font-weight:700; color:#ffffff;\">INTO</span></p><p align=\"center\"><span style=\" font-size:20pt; font-weight:700; color:#ffffff;\">SERVI</span><span style=\" font-size:20pt; font-weight:700; color:#1c71d8;\">GO </span><span style=\" font-size:20pt; font-weight:700; color:#ffffff;\">ACCOUNT</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Slogin: public Ui_Slogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLOGIN_H
