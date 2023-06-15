/********************************************************************************
** Form generated from reading UI file 'task1.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK1_H
#define UI_TASK1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Task1
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QLabel *label_2;
    QTextEdit *textEdit;
    QLabel *label_4;
    QLineEdit *lineEdit;

    void setupUi(QDialog *Task1)
    {
        if (Task1->objectName().isEmpty())
            Task1->setObjectName("Task1");
        Task1->resize(718, 484);
        Task1->setStyleSheet(QString::fromUtf8("background-image: url(:/background/bG no arrows.png);\n"
"color:rgb(255, 255, 255);"));
        pushButton = new QPushButton(Task1);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(350, 430, 130, 40));
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton\n"
"{\n"
"border-radius:10px;\n"
"font:bold;\n"
"border:3px solid rgb(255, 255, 255);\n"
"}"));
        pushButton_2 = new QPushButton(Task1);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(510, 430, 130, 40));
        pushButton_2->setStyleSheet(QString::fromUtf8("#pushButton_2\n"
"{\n"
"border-radius:10px;\n"
"font:bold;\n"
"border:3px solid rgb(255, 255, 255);\n"
"}"));
        lineEdit_2 = new QLineEdit(Task1);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(350, 80, 231, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("#lineEdit_2\n"
"{\n"
"border-radius:10px;\n"
"background:rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0);\n"
"}"));
        label_5 = new QLabel(Task1);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(120, 70, 201, 41));
        label_2 = new QLabel(Task1);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(120, 170, 201, 31));
        textEdit = new QTextEdit(Task1);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(120, 210, 531, 192));
        textEdit->setStyleSheet(QString::fromUtf8("#textEdit\n"
"{\n"
"background:rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0)\n"
"}"));
        label_4 = new QLabel(Task1);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(120, 120, 141, 31));
        lineEdit = new QLineEdit(Task1);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(350, 130, 231, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("#lineEdit\n"
"{\n"
"border-radius:10px;\n"
"background:rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0);\n"
"}"));

        retranslateUi(Task1);

        QMetaObject::connectSlotsByName(Task1);
    } // setupUi

    void retranslateUi(QDialog *Task1)
    {
        Task1->setWindowTitle(QCoreApplication::translate("Task1", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Task1", "CANCEL", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Task1", "SEND", nullptr));
        label_5->setText(QCoreApplication::translate("Task1", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">CURRENT ADDRESS:</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Task1", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">Write your message:</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("Task1", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">EMAIL OF SP:</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Task1: public Ui_Task1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK1_H
