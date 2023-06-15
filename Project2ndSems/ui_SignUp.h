/********************************************************************************
** Form generated from reading UI file 'SignUp.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUp
{
public:
    QWidget *centralwidget;
    QPushButton *Submit;
    QPushButton *Back;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit_0;
    QLineEdit *lineEdit_1;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLabel *label_10;
    QComboBox *comboBox;
    QLabel *label_9;
    QLabel *label_11;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName("SignUp");
        SignUp->resize(1200, 700);
        SignUp->setStyleSheet(QString::fromUtf8("background-image: url(:/background/bG no arrows.png);\n"
"color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(SignUp);
        centralwidget->setObjectName("centralwidget");
        Submit = new QPushButton(centralwidget);
        Submit->setObjectName("Submit");
        Submit->setGeometry(QRect(466, 580, 121, 41));
        Submit->setStyleSheet(QString::fromUtf8("#Submit\n"
"{\n"
"border-radius:10px;\n"
"font:bold;\n"
"border:3px solid rgb(255, 255, 255);\n"
"}"));
        Back = new QPushButton(centralwidget);
        Back->setObjectName("Back");
        Back->setGeometry(QRect(890, 580, 130, 40));
        Back->setStyleSheet(QString::fromUtf8("#Back\n"
"{\n"
"border-radius:10px;\n"
"font:bold;\n"
"border:3px solid rgb(255, 255, 255);\n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(470, 230, 71, 25));
        label->setStyleSheet(QString::fromUtf8("#label\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(470, 270, 81, 25));
        label_2->setStyleSheet(QString::fromUtf8("#label_2\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(410, 310, 201, 25));
        label_3->setStyleSheet(QString::fromUtf8("#label_3\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(460, 390, 141, 25));
        label_4->setStyleSheet(QString::fromUtf8("#label_4\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(410, 430, 191, 25));
        label_5->setStyleSheet(QString::fromUtf8("#label_5\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(400, 353, 211, 25));
        label_6->setStyleSheet(QString::fromUtf8("#label_6\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(470, 510, 111, 25));
        label_7->setStyleSheet(QString::fromUtf8("#label_7\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(470, 470, 131, 25));
        label_8->setStyleSheet(QString::fromUtf8("#label_8\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        lineEdit_0 = new QLineEdit(centralwidget);
        lineEdit_0->setObjectName("lineEdit_0");
        lineEdit_0->setGeometry(QRect(630, 230, 250, 31));
        lineEdit_0->setStyleSheet(QString::fromUtf8("#lineEdit_0\n"
"{\n"
"background:rgb(255, 255, 255);\n"
"border-radius:10px;\n"
"color:rgb(0, 0, 0);\n"
"border-color:rgb(255, 255, 255);\n"
"}"));
        lineEdit_1 = new QLineEdit(centralwidget);
        lineEdit_1->setObjectName("lineEdit_1");
        lineEdit_1->setGeometry(QRect(630, 270, 250, 31));
        lineEdit_1->setStyleSheet(QString::fromUtf8("#lineEdit_1\n"
"{\n"
"background:rgb(255, 255, 255);\n"
"border-radius:10px;\n"
"color:rgb(0, 0, 0);\n"
"border-color:rgb(255, 255, 255);\n"
"}"));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(630, 310, 250, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("#lineEdit_2\n"
"{\n"
"background:rgb(255, 255, 255);\n"
"border-radius:10px;\n"
"color:rgb(0, 0, 0);\n"
"border-color:rgb(255, 255, 255);\n"
"}"));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(630, 510, 600, 31));
        lineEdit_3->setStyleSheet(QString::fromUtf8("#lineEdit_3\n"
"{\n"
"background:rgb(255, 255, 255);\n"
"border-radius:10px;\n"
"color:rgb(0, 0, 0);\n"
"border-color:rgb(255, 255, 255);\n"
"}"));
        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(630, 390, 151, 31));
        lineEdit_4->setStyleSheet(QString::fromUtf8("#lineEdit_4\n"
"{\n"
"background:rgb(255, 255, 255);\n"
"border-radius:10px;\n"
"color:rgb(0, 0, 0);\n"
"border-color:rgb(255, 255, 255);\n"
"}"));
        lineEdit_5 = new QLineEdit(centralwidget);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(630, 430, 250, 31));
        lineEdit_5->setStyleSheet(QString::fromUtf8("#lineEdit_5\n"
"{\n"
"background:rgb(255, 255, 255);\n"
"border-radius:10px;\n"
"color:rgb(0, 0, 0);\n"
"border-color:rgb(255, 255, 255);\n"
"}"));
        lineEdit_6 = new QLineEdit(centralwidget);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(630, 350, 241, 31));
        lineEdit_6->setStyleSheet(QString::fromUtf8("#lineEdit_6\n"
"{\n"
"background:rgb(255, 255, 255);\n"
"border-radius:10px;\n"
"color:rgb(0, 0, 0);\n"
"border-color:rgb(255, 255, 255);\n"
"}"));
        lineEdit_7 = new QLineEdit(centralwidget);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setGeometry(QRect(630, 470, 250, 31));
        lineEdit_7->setStyleSheet(QString::fromUtf8("#lineEdit_7\n"
"{\n"
"background:rgb(255, 255, 255);\n"
"border-radius:10px;\n"
"color:rgb(0, 0, 0);\n"
"border-color:rgb(255, 255, 255);\n"
"}"));
        lineEdit_7->setEchoMode(QLineEdit::Password);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(470, 192, 141, 25));
        label_10->setStyleSheet(QString::fromUtf8("#label_10\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(630, 190, 251, 31));
        comboBox->setStyleSheet(QString::fromUtf8("#comboBox\n"
"{\n"
"background:rgb(255, 255, 255);\n"
"border-radius:10px;\n"
"color:rgb(0, 0, 0);\n"
"font:bold;\n"
"border-color:rgb(255, 255, 255);\n"
"}"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(580, 10, 291, 141));
        label_9->setStyleSheet(QString::fromUtf8("#label_9\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(0, 0, 341, 151));
        label_11->setStyleSheet(QString::fromUtf8("image: url(:/background/hmu logo.png);"));
        SignUp->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(SignUp);
        statusbar->setObjectName("statusbar");
        SignUp->setStatusBar(statusbar);

        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QMainWindow *SignUp)
    {
        SignUp->setWindowTitle(QCoreApplication::translate("SignUp", "MainWindow", nullptr));
        Submit->setText(QCoreApplication::translate("SignUp", "SUBMIT", nullptr));
        Back->setText(QCoreApplication::translate("SignUp", "BACK", nullptr));
        label->setText(QCoreApplication::translate("SignUp", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">NAME:</span></p><p><span style=\" font-size:14pt;\"><br/></span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("SignUp", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">EMAIL:</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("SignUp", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">PHONE:</span><span style=\" font-size:16pt;\">(include +92)</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("SignUp", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">EXPERIENCE:</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("SignUp", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">WAGES:</span><span style=\" font-size:16pt;\">(max=5000)</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("SignUp", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">CNIC:without dashes</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("SignUp", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">ADDRESS:</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("SignUp", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">PASSWORD:</span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("SignUp", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">PROFESSION:</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("SignUp", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:700; color:#ffffff;\">SIGNUP</span></p><p align=\"center\"><span style=\" font-size:20pt; font-weight:700; color:#ffffff;\">INTO</span></p><p align=\"center\"><span style=\" font-size:20pt; font-weight:700; color:#ffffff;\">SERVI</span><span style=\" font-size:20pt; font-weight:700; color:#1c71d8;\">GO</span><span style=\" font-size:20pt; font-weight:700; color:#ffffff;\"> ACCOUNT</span></p></body></html>", nullptr));
        label_11->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
