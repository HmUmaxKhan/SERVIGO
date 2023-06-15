/********************************************************************************
** Form generated from reading UI file 'profileu.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILEU_H
#define UI_PROFILEU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProfileU
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QLineEdit *Name;
    QLabel *label_4;
    QLineEdit *Address;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QLineEdit *Email;
    QLineEdit *Phone;
    QLabel *label_5;
    QLabel *label_6;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ProfileU)
    {
        if (ProfileU->objectName().isEmpty())
            ProfileU->setObjectName("ProfileU");
        ProfileU->resize(1300, 700);
        ProfileU->setStyleSheet(QString::fromUtf8("background-image: url(:/background/bG no arrows.png);\n"
"color:rgb(255, 255, 255)"));
        centralwidget = new QWidget(ProfileU);
        centralwidget->setObjectName("centralwidget");
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(660, 500, 130, 40));
        pushButton_2->setStyleSheet(QString::fromUtf8("#pushButton_2\n"
"{\n"
"border-radius:10px;\n"
"font:bold;\n"
"border:3px solid rgb(255, 255, 255);\n"
"}"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(460, 320, 71, 31));
        label_3->setStyleSheet(QString::fromUtf8("#label_3\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        Name = new QLineEdit(centralwidget);
        Name->setObjectName("Name");
        Name->setGeometry(QRect(660, 160, 231, 31));
        Name->setStyleSheet(QString::fromUtf8("#Name\n"
"{\n"
"border-radius:10px;\n"
"background:rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0);\n"
"}"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(460, 390, 111, 31));
        label_4->setStyleSheet(QString::fromUtf8("#label_4\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        Address = new QLineEdit(centralwidget);
        Address->setObjectName("Address");
        Address->setGeometry(QRect(660, 390, 231, 31));
        Address->setStyleSheet(QString::fromUtf8("#Address\n"
"{\n"
"border-radius:10px;\n"
"background:rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0);\n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(460, 160, 91, 31));
        label->setStyleSheet(QString::fromUtf8("#label\n"
"{\n"
"background:transparent;\n"
"}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(460, 240, 91, 31));
        label_2->setStyleSheet(QString::fromUtf8("#label_2\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(440, 500, 130, 40));
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton\n"
"{\n"
"border-radius:10px;\n"
"font:bold;\n"
"border:3px solid rgb(255, 255, 255);\n"
"}"));
        Email = new QLineEdit(centralwidget);
        Email->setObjectName("Email");
        Email->setGeometry(QRect(660, 320, 231, 31));
        Email->setStyleSheet(QString::fromUtf8("#Email\n"
"{\n"
"border-radius:10px;\n"
"background:rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0);\n"
"}"));
        Phone = new QLineEdit(centralwidget);
        Phone->setObjectName("Phone");
        Phone->setGeometry(QRect(660, 240, 231, 31));
        Phone->setStyleSheet(QString::fromUtf8("#Phone\n"
"{\n"
"border-radius:10px;\n"
"background:rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0);\n"
"}"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(0, 0, 341, 151));
        label_5->setStyleSheet(QString::fromUtf8("image: url(:/background/hmu logo.png);"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(520, 0, 251, 131));
        label_6->setStyleSheet(QString::fromUtf8("#label_6\n"
"{\n"
"background:transparent;\n"
"}"));
        ProfileU->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(ProfileU);
        statusbar->setObjectName("statusbar");
        ProfileU->setStatusBar(statusbar);

        retranslateUi(ProfileU);

        QMetaObject::connectSlotsByName(ProfileU);
    } // setupUi

    void retranslateUi(QMainWindow *ProfileU)
    {
        ProfileU->setWindowTitle(QCoreApplication::translate("ProfileU", "MainWindow", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ProfileU", "BACK", nullptr));
        label_3->setText(QCoreApplication::translate("ProfileU", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">EMAIL:</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("ProfileU", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">ADDRESS:</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("ProfileU", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">NAME:</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("ProfileU", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">PHONE :</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("ProfileU", "EDIT", nullptr));
        label_5->setText(QString());
        label_6->setText(QCoreApplication::translate("ProfileU", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:700;\">USER PROFILE</span></p><p align=\"center\"><span style=\" font-size:18pt; font-weight:700;\">EDITIOR</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProfileU: public Ui_ProfileU {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILEU_H
