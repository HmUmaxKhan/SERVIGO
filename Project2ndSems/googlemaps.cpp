#include "googlemaps.h"
#include "ui_googlemaps.h"

googlemaps::googlemaps(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::googlemaps)
{
    ui->setupUi(this);

    ui->quickWidget->setSource(QUrl(QStringLiteral("qrc:/map/googlemap.html")));
    ui->quickWidget->show();
}

googlemaps::~googlemaps()
{
    delete ui;
}
