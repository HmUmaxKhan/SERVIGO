/********************************************************************************
** Form generated from reading UI file 'historyuser.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORYUSER_H
#define UI_HISTORYUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_historyUser
{
public:
    QTableView *tableView;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *historyUser)
    {
        if (historyUser->objectName().isEmpty())
            historyUser->setObjectName("historyUser");
        historyUser->resize(851, 406);
        historyUser->setStyleSheet(QString::fromUtf8("background-image: url(:/background/bG no arrows.png);"));
        tableView = new QTableView(historyUser);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(130, 160, 631, 211));
        tableView->setStyleSheet(QString::fromUtf8("#tableView\n"
"{\n"
"background:rgb(255, 255, 255)\n"
"}"));
        label = new QLabel(historyUser);
        label->setObjectName("label");
        label->setGeometry(QRect(370, 10, 191, 131));
        label->setStyleSheet(QString::fromUtf8("#label\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        label_2 = new QLabel(historyUser);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 0, 341, 151));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/background/hmu logo.png);"));

        retranslateUi(historyUser);

        QMetaObject::connectSlotsByName(historyUser);
    } // setupUi

    void retranslateUi(QDialog *historyUser)
    {
        historyUser->setWindowTitle(QCoreApplication::translate("historyUser", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("historyUser", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:700; color:#ffffff;\">HISTORY</span></p><p align=\"center\"><span style=\" font-size:20pt; font-weight:700; color:#ffffff;\">OF</span></p><p align=\"center\"><span style=\" font-size:20pt; font-weight:700; color:#ffffff;\">USER</span></p></body></html>", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class historyUser: public Ui_historyUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORYUSER_H
