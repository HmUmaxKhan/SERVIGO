/********************************************************************************
** Form generated from reading UI file 'editu.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITU_H
#define UI_EDITU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_editU
{
public:
    QLabel *label_4;
    QLabel *label_11;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;

    void setupUi(QDialog *editU)
    {
        if (editU->objectName().isEmpty())
            editU->setObjectName("editU");
        editU->resize(851, 493);
        editU->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-image: url(:/background/bG no arrows.png);"));
        label_4 = new QLabel(editU);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(360, 20, 301, 51));
        label_4->setStyleSheet(QString::fromUtf8("#label_4\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        label_11 = new QLabel(editU);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(0, 0, 341, 151));
        label_11->setStyleSheet(QString::fromUtf8("image: url(:/background/hmu logo.png);"));
        pushButton = new QPushButton(editU);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(590, 410, 130, 40));
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton\n"
"{\n"
"border-radius:10px;\n"
"font:bold;\n"
"border:3px solid rgb(255, 255, 255);\n"
"}"));
        pushButton_2 = new QPushButton(editU);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(410, 410, 130, 40));
        pushButton_2->setStyleSheet(QString::fromUtf8("#pushButton_2\n"
"{\n"
"border-radius:10px;\n"
"font:bold;\n"
"border:3px solid rgb(255, 255, 255);\n"
"}"));
        lineEdit_2 = new QLineEdit(editU);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(530, 270, 231, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("#lineEdit_2\n"
"{\n"
"border-radius:10px;\n"
"background:rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0);\n"
"}"));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        lineEdit_3 = new QLineEdit(editU);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(530, 330, 231, 31));
        lineEdit_3->setStyleSheet(QString::fromUtf8("#lineEdit_3\n"
"{\n"
"border-radius:10px;\n"
"background:rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0);\n"
"}"));
        lineEdit_3->setEchoMode(QLineEdit::Password);
        lineEdit = new QLineEdit(editU);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(530, 210, 231, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("#lineEdit\n"
"{\n"
"border-radius:10px;\n"
"background:rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0);\n"
"}"));
        label_2 = new QLabel(editU);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(370, 270, 121, 31));
        label_2->setStyleSheet(QString::fromUtf8("#label_2\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        label = new QLabel(editU);
        label->setObjectName("label");
        label->setGeometry(QRect(430, 210, 71, 31));
        label->setStyleSheet(QString::fromUtf8("#label\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        label_3 = new QLabel(editU);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(290, 330, 231, 31));
        label_3->setStyleSheet(QString::fromUtf8("#label_3\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));

        retranslateUi(editU);

        QMetaObject::connectSlotsByName(editU);
    } // setupUi

    void retranslateUi(QDialog *editU)
    {
        editU->setWindowTitle(QCoreApplication::translate("editU", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("editU", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:700;\">PASSWORD CHANGE</span></p></body></html>", nullptr));
        label_11->setText(QString());
        pushButton->setText(QCoreApplication::translate("editU", "CONFIRM", nullptr));
        pushButton_2->setText(QCoreApplication::translate("editU", "CANCEL", nullptr));
        label_2->setText(QCoreApplication::translate("editU", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">PASSWORD: </span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("editU", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">CNIC: </span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("editU", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">CONFIRM PASSWORD: </span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editU: public Ui_editU {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITU_H
