/********************************************************************************
** Form generated from reading UI file 'selection.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTION_H
#define UI_SELECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Selection
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_5;
    QPushButton *pushButton_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Selection)
    {
        if (Selection->objectName().isEmpty())
            Selection->setObjectName("Selection");
        Selection->resize(1300, 700);
        Selection->setStyleSheet(QString::fromUtf8("background-image: url(:/background/bG no arrows.png);\n"
"color:rgb(255, 255, 255)"));
        centralwidget = new QWidget(Selection);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(750, 390, 130, 40));
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton\n"
"{\n"
"border-radius:10px;\n"
"font:bold;\n"
"border:3px solid rgb(255, 255, 255);\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(470, 390, 130, 40));
        pushButton_2->setStyleSheet(QString::fromUtf8("#pushButton_2\n"
"{\n"
"border-radius:10px;\n"
"font:bold;\n"
"border:3px solid rgb(255, 255, 255);\n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 341, 151));
        label->setStyleSheet(QString::fromUtf8("image: url(:/background/hmu logo.png);\n"
"background-color: rgb(98, 160, 234);"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(500, 110, 351, 161));
        label_5->setStyleSheet(QString::fromUtf8("#label_5\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(360, 180, 75, 24));
        Selection->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Selection);
        statusbar->setObjectName("statusbar");
        Selection->setStatusBar(statusbar);

        retranslateUi(Selection);

        QMetaObject::connectSlotsByName(Selection);
    } // setupUi

    void retranslateUi(QMainWindow *Selection)
    {
        Selection->setWindowTitle(QCoreApplication::translate("Selection", "Selection", nullptr));
        pushButton->setText(QCoreApplication::translate("Selection", "USER", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Selection", "SERVIGO", nullptr));
        label->setText(QCoreApplication::translate("Selection", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("Selection", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:700; color:#ffffff;\">WELCOME</span></p><p align=\"center\"><span style=\" font-size:20pt; font-weight:700; color:#ffffff;\">TO</span></p><p align=\"center\"><span style=\" font-size:20pt; font-weight:700; color:#ffffff;\">SERVI</span><span style=\" font-size:20pt; font-weight:700; color:#1c71d8;\">GO</span></p></body></html>", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Selection", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Selection1: public Ui_Selection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTION_H
