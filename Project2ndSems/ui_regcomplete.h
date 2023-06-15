/********************************************************************************
** Form generated from reading UI file 'regcomplete.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGCOMPLETE_H
#define UI_REGCOMPLETE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegComplete
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RegComplete)
    {
        if (RegComplete->objectName().isEmpty())
            RegComplete->setObjectName("RegComplete");
        RegComplete->resize(1300, 700);
        RegComplete->setStyleSheet(QString::fromUtf8("background-image: url(:/background/bG no arrows.png);\n"
"color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(RegComplete);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(430, 110, 401, 61));
        label->setStyleSheet(QString::fromUtf8("#label\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(390, 200, 461, 201));
        label_2->setStyleSheet(QString::fromUtf8("#label_2\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(440, 440, 161, 50));
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton\n"
"{\n"
"border-radius:10px;\n"
"font:bold;\n"
"border:3px solid rgb(255, 255, 255);\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(640, 440, 161, 50));
        pushButton_2->setStyleSheet(QString::fromUtf8("#pushButton_2\n"
"{\n"
"border-radius:10px;\n"
"font:bold;\n"
"border:3px solid rgb(255, 255, 255);\n"
"}"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 0, 341, 151));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/background/hmu logo.png);\n"
"background-color: rgb(98, 160, 234);"));
        RegComplete->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(RegComplete);
        statusbar->setObjectName("statusbar");
        RegComplete->setStatusBar(statusbar);

        retranslateUi(RegComplete);

        QMetaObject::connectSlotsByName(RegComplete);
    } // setupUi

    void retranslateUi(QMainWindow *RegComplete)
    {
        RegComplete->setWindowTitle(QCoreApplication::translate("RegComplete", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("RegComplete", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:700;\">REGISTRATION COMPLETE</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("RegComplete", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700; color:#ffffff;\">Your Registration is complete.</span></p><p align=\"center\"><span style=\" font-size:16pt; font-weight:700; color:#ffffff;\">Congratulations you are member of</span></p><p align=\"center\"><span style=\" font-size:16pt; font-weight:700; color:#ffffff;\">SERVI</span><span style=\" font-size:16pt; font-weight:700; color:#1a5fb4;\">GO</span></p><p align=\"center\"><span style=\" font-size:16pt; font-weight:700; color:#ffffff;\">If you have any issues you can email us at</span></p><p align=\"center\"><a href=\"mailto:mukhan.bese22seecs@seecs.edu.pk\"><span style=\" font-size:16pt; font-weight:700; text-decoration: underline; color:#1a5fb4;\">mukhan.bese22seecs@seecs.edu.pk</span></a></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("RegComplete", "SIGN IN AS USER", nullptr));
        pushButton_2->setText(QCoreApplication::translate("RegComplete", "SIGN IN AS SERVIGO", nullptr));
        label_3->setText(QCoreApplication::translate("RegComplete", "<html><head/><body><p><br/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegComplete: public Ui_RegComplete {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGCOMPLETE_H
