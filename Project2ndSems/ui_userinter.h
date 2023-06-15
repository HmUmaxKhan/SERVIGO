/********************************************************************************
** Form generated from reading UI file 'userinter.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERINTER_H
#define UI_USERINTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserInter
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QLabel *Status;
    QLabel *label;
    QLabel *Status_2;
    QLabel *label_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label_14;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QLabel *label_11;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLabel *label_13;
    QLabel *label_10;
    QComboBox *comboBox;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UserInter)
    {
        if (UserInter->objectName().isEmpty())
            UserInter->setObjectName("UserInter");
        UserInter->resize(1300, 700);
        UserInter->setStyleSheet(QString::fromUtf8("background-image: url(:/background/bG no arrows.png);\n"
"color:rgb(255, 255, 255);"));
        centralwidget = new QWidget(UserInter);
        centralwidget->setObjectName("centralwidget");
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(259, 400, 791, 181));
        tableView->setStyleSheet(QString::fromUtf8("#tableView\n"
"{\n"
"\n"
"background:rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0);\n"
"}\n"
"QHeaderView::section\n"
"{\n"
"    background:transparent;\n"
"    color:rgb(0, 0, 0);\n"
"}"));
        Status = new QLabel(centralwidget);
        Status->setObjectName("Status");
        Status->setGeometry(QRect(40, 420, 170, 36));
        Status->setStyleSheet(QString::fromUtf8("#Status\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 380, 161, 31));
        label->setStyleSheet(QString::fromUtf8("#label\n"
"{\n"
"background:transparent;\n"
"}"));
        Status_2 = new QLabel(centralwidget);
        Status_2->setObjectName("Status_2");
        Status_2->setGeometry(QRect(40, 510, 170, 36));
        Status_2->setStyleSheet(QString::fromUtf8("#Status_2\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 470, 161, 31));
        label_3->setStyleSheet(QString::fromUtf8("#label_3\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(620, 590, 130, 40));
        pushButton_8->setStyleSheet(QString::fromUtf8("#pushButton_8\n"
"{\n"
"border-radius:10px;\n"
"font:bold;\n"
"border:3px solid rgb(255, 255, 255);\n"
"}"));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(1110, 550, 130, 40));
        pushButton_9->setStyleSheet(QString::fromUtf8("#pushButton_9\n"
"{\n"
"border-radius:10px;\n"
"font:bold;\n"
"border:3px solid rgb(255, 255, 255);\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(1110, 480, 130, 40));
        pushButton_3->setStyleSheet(QString::fromUtf8("#pushButton_3\n"
"{\n"
"border-radius:10px;\n"
"font:bold;\n"
"border:3px solid rgb(255, 255, 255);\n"
"}"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(920, 590, 130, 40));
        pushButton_5->setStyleSheet(QString::fromUtf8("#pushButton_5\n"
"{\n"
"border-radius:10px;\n"
"font:bold;\n"
"border:3px solid rgb(255, 255, 255);\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(1110, 410, 130, 40));
        pushButton_2->setStyleSheet(QString::fromUtf8("#pushButton_2\n"
"{\n"
"border-radius:10px;\n"
"font:bold;\n"
"border:3px solid rgb(255, 255, 255);\n"
"}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 0, 341, 151));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/background/hmu logo.png);"));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(550, 0, 281, 101));
        label_14->setStyleSheet(QString::fromUtf8("#label_14\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(260, 590, 130, 40));
        pushButton_4->setStyleSheet(QString::fromUtf8("#pushButton_4\n"
"{\n"
"border-radius:10px;\n"
"font:bold;\n"
"border:3px solid rgb(255, 255, 255);\n"
"}"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(620, 350, 130, 40));
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton\n"
"{\n"
"border-radius:10px;\n"
"font:bold;\n"
"border:3px solid rgb(255, 255, 255);\n"
"}"));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(520, 190, 111, 31));
        label_11->setStyleSheet(QString::fromUtf8("#label_11\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(630, 190, 231, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("#lineEdit\n"
"{\n"
"border-radius:10px;\n"
"background:rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0);\n"
"}"));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(630, 230, 231, 31));
        lineEdit_3->setStyleSheet(QString::fromUtf8("#lineEdit_3\n"
"{\n"
"border-radius:10px;\n"
"background:rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0);\n"
"}"));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(550, 230, 81, 31));
        label_13->setStyleSheet(QString::fromUtf8("#label_13\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(480, 150, 141, 31));
        label_10->setStyleSheet(QString::fromUtf8("#label_10\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(630, 150, 231, 31));
        UserInter->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(UserInter);
        statusbar->setObjectName("statusbar");
        UserInter->setStatusBar(statusbar);

        retranslateUi(UserInter);

        QMetaObject::connectSlotsByName(UserInter);
    } // setupUi

    void retranslateUi(QMainWindow *UserInter)
    {
        UserInter->setWindowTitle(QCoreApplication::translate("UserInter", "MainWindow", nullptr));
        Status->setText(QCoreApplication::translate("UserInter", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("UserInter", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">TASK 1 STATUS</span></p></body></html>", nullptr));
        Status_2->setText(QCoreApplication::translate("UserInter", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("UserInter", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">TASK 2 STATUS</span></p></body></html>", nullptr));
        pushButton_8->setText(QCoreApplication::translate("UserInter", " Profile", nullptr));
        pushButton_9->setText(QCoreApplication::translate("UserInter", "Maps", nullptr));
        pushButton_3->setText(QCoreApplication::translate("UserInter", "TASK 2", nullptr));
        pushButton_5->setText(QCoreApplication::translate("UserInter", "HISTORY", nullptr));
        pushButton_2->setText(QCoreApplication::translate("UserInter", "TASK 1", nullptr));
        label_2->setText(QString());
        label_14->setText(QCoreApplication::translate("UserInter", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:700;\">USER </span></p><p align=\"center\"><span style=\" font-size:18pt; font-weight:700;\">INTERFACE</span></p></body></html>", nullptr));
        pushButton_4->setText(QCoreApplication::translate("UserInter", "BACK", nullptr));
        pushButton->setText(QCoreApplication::translate("UserInter", "CONFIRM", nullptr));
        label_11->setText(QCoreApplication::translate("UserInter", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">ADDRESS:</span></p></body></html>", nullptr));
        label_13->setText(QCoreApplication::translate("UserInter", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">EMAIL:</span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("UserInter", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:700;\">PROFESSION:</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserInter: public Ui_UserInter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINTER_H
