/********************************************************************************
** Form generated from reading UI file 'task_2.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK_2_H
#define UI_TASK_2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Task2
{
public:
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QTextEdit *textEdit;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QLineEdit *lineEdit;

    void setupUi(QDialog *Task2)
    {
        if (Task2->objectName().isEmpty())
            Task2->setObjectName("Task2");
        Task2->resize(661, 468);
        Task2->setStyleSheet(QString::fromUtf8("background-image: url(:/background/bG no arrows.png);\n"
"color:rgb(255, 255, 255);"));
        label_5 = new QLabel(Task2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(50, 80, 211, 31));
        lineEdit_2 = new QLineEdit(Task2);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(290, 80, 231, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("#lineEdit_2\n"
"{\n"
"border-radius:10px;\n"
"background:rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0);\n"
"}"));
        textEdit = new QTextEdit(Task2);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(50, 220, 531, 166));
        textEdit->setStyleSheet(QString::fromUtf8("#textEdit\n"
"{\n"
"background:rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0)\n"
"}"));
        label_2 = new QLabel(Task2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 180, 211, 31));
        pushButton = new QPushButton(Task2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(300, 410, 130, 40));
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton\n"
"{\n"
"border-radius:10px;\n"
"font:bold;\n"
"border:3px solid rgb(255, 255, 255);\n"
"}"));
        pushButton_2 = new QPushButton(Task2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(450, 410, 130, 40));
        pushButton_2->setStyleSheet(QString::fromUtf8("#pushButton_2\n"
"{\n"
"border-radius:10px;\n"
"font:bold;\n"
"border:3px solid rgb(255, 255, 255);\n"
"}"));
        label_4 = new QLabel(Task2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 130, 141, 31));
        lineEdit = new QLineEdit(Task2);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(290, 140, 231, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("#lineEdit\n"
"{\n"
"border-radius:10px;\n"
"background:rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0);\n"
"}"));

        retranslateUi(Task2);

        QMetaObject::connectSlotsByName(Task2);
    } // setupUi

    void retranslateUi(QDialog *Task2)
    {
        Task2->setWindowTitle(QCoreApplication::translate("Task2", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("Task2", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">CURRENT ADDRESS:</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Task2", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">Write your message:</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("Task2", "CANCEL", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Task2", "SEND", nullptr));
        label_4->setText(QCoreApplication::translate("Task2", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">EMAIL OF SP:</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Task2: public Ui_Task2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK_2_H
