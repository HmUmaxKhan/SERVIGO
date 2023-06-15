#ifndef GOOGLEMAPS_H
#define GOOGLEMAPS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class googlemaps; }
QT_END_NAMESPACE

class googlemaps : public QMainWindow
{
    Q_OBJECT

public:
    googlemaps(QWidget *parent = nullptr);
    ~googlemaps();

private:
    Ui::googlemaps *ui;
};
#endif
