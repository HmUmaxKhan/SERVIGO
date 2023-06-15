/********************************************************************************
** Form generated from reading UI file 'historysp.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORYSP_H
#define UI_HISTORYSP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_historySP
{
public:
    QTableView *tableView;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *historySP)
    {
        if (historySP->objectName().isEmpty())
            historySP->setObjectName("historySP");
        historySP->resize(823, 404);
        historySP->setStyleSheet(QString::fromUtf8("background-image: url(:/background/bG no arrows.png);"));
        tableView = new QTableView(historySP);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(150, 160, 601, 221));
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
        label = new QLabel(historySP);
        label->setObjectName("label");
        label->setGeometry(QRect(370, 10, 191, 131));
        label->setStyleSheet(QString::fromUtf8("#label\n"
"{\n"
"background:rgb(134,207,234);\n"
"}"));
        label_2 = new QLabel(historySP);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 0, 341, 151));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/background/hmu logo.png);"));

        retranslateUi(historySP);

        QMetaObject::connectSlotsByName(historySP);
    } // setupUi

    void retranslateUi(QDialog *historySP)
    {
        historySP->setWindowTitle(QCoreApplication::translate("historySP", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("historySP", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:700; color:#ffffff;\">HISTORY</span></p><p align=\"center\"><span style=\" font-size:20pt; font-weight:700; color:#ffffff;\">OF</span></p><p align=\"center\"><span style=\" font-size:20pt; font-weight:700; color:#ffffff;\">SERVI</span><span style=\" font-size:20pt; font-weight:700; color:#1a5fb4;\">GO</span></p></body></html>", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class historySP: public Ui_historySP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORYSP_H
