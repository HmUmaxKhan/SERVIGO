/********************************************************************************
** Form generated from reading UI file 'googlemaps.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOOGLEMAPS_H
#define UI_GOOGLEMAPS_H

#include <QtCore/QVariant>
#include <QtQuickWidgets/QQuickWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_googlemaps
{
public:
    QWidget *centralwidget;
    QQuickWidget *quickWidget;

    void setupUi(QMainWindow *googlemaps)
    {
        if (googlemaps->objectName().isEmpty())
            googlemaps->setObjectName("googlemaps");
        googlemaps->resize(800, 600);
        centralwidget = new QWidget(googlemaps);
        centralwidget->setObjectName("centralwidget");
        quickWidget = new QQuickWidget(centralwidget);
        quickWidget->setObjectName("quickWidget");
        quickWidget->setGeometry(QRect(-1, -91, 801, 681));
        quickWidget->setResizeMode(QQuickWidget::SizeRootObjectToView);
        googlemaps->setCentralWidget(centralwidget);

        retranslateUi(googlemaps);

        QMetaObject::connectSlotsByName(googlemaps);
    } // setupUi

    void retranslateUi(QMainWindow *googlemaps)
    {
        googlemaps->setWindowTitle(QCoreApplication::translate("googlemaps", "googlemaps", nullptr));
    } // retranslateUi

};

namespace Ui {
    class googlemaps: public Ui_googlemaps {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOOGLEMAPS_H
