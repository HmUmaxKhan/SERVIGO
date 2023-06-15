/********************************************************************************
** Form generated from reading UI file 'usignup.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USIGNUP_H
#define UI_USIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_USignUp
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_3;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_0;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_1;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_3;
    QPushButton *Back;
    QPushButton *SUBMIT;
    QLabel *label_4;
    QLabel *label_5;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *USignUp)
    {
        if (USignUp->objectName().isEmpty())
            USignUp->setObjectName("USignUp");
        USignUp->resize(1300, 700);
        USignUp->setStyleSheet(QString::fromUtf8("background-image: url(:/background/bG no arrows.png);\n"
"color:rgb(255, 255, 255)"));
        centralwidget = new QWidget(USignUp);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(500, 190, 91, 25));
        label->setStyleSheet(QString::fromUtf8("#label\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(500, 250, 91, 25));
        label_2->setStyleSheet(QString::fromUtf8("#label_2\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(500, 450, 101, 25));
        label_7->setStyleSheet(QString::fromUtf8("#label_7\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(500, 400, 131, 25));
        label_8->setStyleSheet(QString::fromUtf8("#label_8\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(440, 300, 211, 25));
        label_3->setStyleSheet(QString::fromUtf8("#label_3\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(440, 360, 201, 25));
        label_6->setStyleSheet(QString::fromUtf8("#label_6\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        lineEdit_5 = new QLineEdit(centralwidget);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(670, 450, 231, 31));
        lineEdit_5->setStyleSheet(QString::fromUtf8("#lineEdit_5\n"
"{\n"
"border-radius:10px;\n"
"background:rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0);\n"
"}"));
        lineEdit_0 = new QLineEdit(centralwidget);
        lineEdit_0->setObjectName("lineEdit_0");
        lineEdit_0->setGeometry(QRect(670, 200, 231, 31));
        lineEdit_0->setStyleSheet(QString::fromUtf8("#lineEdit_0\n"
"{\n"
"border-radius:10px;\n"
"background:rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0);\n"
"}"));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(670, 300, 231, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("#lineEdit_2\n"
"{\n"
"border-radius:10px;\n"
"background:rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0);\n"
"}"));
        lineEdit_1 = new QLineEdit(centralwidget);
        lineEdit_1->setObjectName("lineEdit_1");
        lineEdit_1->setGeometry(QRect(670, 250, 231, 31));
        lineEdit_1->setStyleSheet(QString::fromUtf8("#lineEdit_1\n"
"{\n"
"border-radius:10px;\n"
"background:rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0);\n"
"}"));
        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(670, 400, 231, 31));
        lineEdit_4->setStyleSheet(QString::fromUtf8("#lineEdit_4\n"
"{\n"
"border-radius:10px;\n"
"background:rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0);\n"
"}"));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(670, 350, 231, 31));
        lineEdit_3->setStyleSheet(QString::fromUtf8("#lineEdit_3\n"
"{\n"
"border-radius:10px;\n"
"background:rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0);\n"
"}"));
        Back = new QPushButton(centralwidget);
        Back->setObjectName("Back");
        Back->setGeometry(QRect(820, 530, 130, 40));
        Back->setStyleSheet(QString::fromUtf8("#Back\n"
"{\n"
"border-radius:10px;\n"
"font:bold;\n"
"border:3px solid rgb(255, 255, 255);\n"
"}"));
        SUBMIT = new QPushButton(centralwidget);
        SUBMIT->setObjectName("SUBMIT");
        SUBMIT->setGeometry(QRect(520, 530, 130, 40));
        SUBMIT->setStyleSheet(QString::fromUtf8("#SUBMIT\n"
"{\n"
"border-radius:10px;\n"
"font:bold;\n"
"border:3px solid rgb(255, 255, 255);\n"
"}"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(560, 40, 301, 121));
        label_4->setStyleSheet(QString::fromUtf8("#label_4\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(0, 0, 341, 151));
        label_5->setStyleSheet(QString::fromUtf8("image: url(:/background/hmu logo.png);"));
        USignUp->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(USignUp);
        statusbar->setObjectName("statusbar");
        USignUp->setStatusBar(statusbar);

        retranslateUi(USignUp);

        QMetaObject::connectSlotsByName(USignUp);
    } // setupUi

    void retranslateUi(QMainWindow *USignUp)
    {
        USignUp->setWindowTitle(QCoreApplication::translate("USignUp", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("USignUp", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">NAME:</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("USignUp", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">EMAIL:</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("USignUp", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">ADDRESS:</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("USignUp", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">PASSWORD:</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("USignUp", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">PHONE:</span><span style=\" font-size:16pt;\">(include +92)</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("USignUp", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">CNIC:</span><span style=\" font-size:16pt;\">without dashes</span></p></body></html>", nullptr));
        Back->setText(QCoreApplication::translate("USignUp", "BACK", nullptr));
        SUBMIT->setText(QCoreApplication::translate("USignUp", "SUBMIT", nullptr));
        label_4->setText(QCoreApplication::translate("USignUp", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:700; color:#ffffff;\">SIGNUP</span></p><p align=\"center\"><span style=\" font-size:18pt; font-weight:700; color:#ffffff;\">FOR</span></p><p align=\"center\"><span style=\" font-size:18pt; font-weight:700; color:#ffffff;\">USERS</span></p></body></html>", nullptr));
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class USignUp: public Ui_USignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USIGNUP_H
