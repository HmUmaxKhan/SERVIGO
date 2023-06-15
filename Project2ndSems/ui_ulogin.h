/********************************************************************************
** Form generated from reading UI file 'ulogin.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ULOGIN_H
#define UI_ULOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ulogin
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *SignIn;
    QPushButton *Back;
    QPushButton *Signup;
    QPushButton *pushButton;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Ulogin)
    {
        if (Ulogin->objectName().isEmpty())
            Ulogin->setObjectName("Ulogin");
        Ulogin->resize(1300, 700);
        Ulogin->setStyleSheet(QString::fromUtf8("background-image: url(:/background/bG no arrows.png);\n"
"color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(Ulogin);
        centralwidget->setObjectName("centralwidget");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(530, 200, 71, 31));
        label_2->setStyleSheet(QString::fromUtf8("#label_2\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(520, 300, 101, 24));
        label_3->setStyleSheet(QString::fromUtf8("#label_3\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(650, 210, 231, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("#lineEdit\n"
"{\n"
"border-radius:10px;\n"
"background:rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0);\n"
"}"));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(650, 300, 231, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("#lineEdit_2\n"
"{\n"
"border-radius:10px;\n"
"background:rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0);\n"
"}"));
        SignIn = new QPushButton(centralwidget);
        SignIn->setObjectName("SignIn");
        SignIn->setGeometry(QRect(530, 370, 130, 40));
        SignIn->setStyleSheet(QString::fromUtf8("#SignIn\n"
"{\n"
"border-radius:10px;\n"
"font:bold;\n"
"border:3px solid rgb(255, 255, 255);\n"
"}"));
        Back = new QPushButton(centralwidget);
        Back->setObjectName("Back");
        Back->setGeometry(QRect(750, 370, 130, 40));
        Back->setStyleSheet(QString::fromUtf8("#Back\n"
"{\n"
"border-radius:10px;\n"
"font:bold;\n"
"border:3px solid rgb(255, 255, 255);\n"
"}"));
        Signup = new QPushButton(centralwidget);
        Signup->setObjectName("Signup");
        Signup->setGeometry(QRect(640, 600, 130, 40));
        Signup->setStyleSheet(QString::fromUtf8("#Signup\n"
"{\n"
"border-radius:10px;\n"
"font:bold;\n"
"border:3px solid rgb(255, 255, 255);\n"
"}"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(640, 450, 130, 40));
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton\n"
"{\n"
"border-radius:10px;\n"
"font:bold;\n"
"border:3px solid rgb(255, 255, 255);\n"
"}"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(320, 509, 801, 31));
        label_6->setStyleSheet(QString::fromUtf8("#label_6\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(560, 10, 291, 141));
        label_5->setStyleSheet(QString::fromUtf8("#label_5\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 341, 151));
        label->setStyleSheet(QString::fromUtf8("image: url(:/background/hmu logo.png);"));
        Ulogin->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Ulogin);
        statusbar->setObjectName("statusbar");
        Ulogin->setStatusBar(statusbar);

        retranslateUi(Ulogin);

        QMetaObject::connectSlotsByName(Ulogin);
    } // setupUi

    void retranslateUi(QMainWindow *Ulogin)
    {
        Ulogin->setWindowTitle(QCoreApplication::translate("Ulogin", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("Ulogin", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700; color:#ffffff;\">Email:</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Ulogin", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700; color:#ffffff;\">Password:</span></p></body></html>", nullptr));
        SignIn->setText(QCoreApplication::translate("Ulogin", "SIGN IN", nullptr));
        Back->setText(QCoreApplication::translate("Ulogin", "BACK", nullptr));
        Signup->setText(QCoreApplication::translate("Ulogin", "SIGN UP", nullptr));
        pushButton->setText(QCoreApplication::translate("Ulogin", "Forget Password", nullptr));
        label_6->setText(QCoreApplication::translate("Ulogin", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">If you don't have the account then create it now by clicking the Sign Up button</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("Ulogin", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:700; color:#ffffff;\">LOGIN</span></p><p align=\"center\"><span style=\" font-size:18pt; font-weight:700; color:#ffffff;\">INTO</span></p><p align=\"center\"><span style=\" font-size:18pt; font-weight:700; color:#ffffff;\">USER ACCOUNT</span></p></body></html>", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Ulogin: public Ui_Ulogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ULOGIN_H
