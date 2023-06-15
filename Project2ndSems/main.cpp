#include <QApplication>
#include "selection1.h"

void maps();

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Selection w;
    w.showMaximized();

    return a.exec();
}

