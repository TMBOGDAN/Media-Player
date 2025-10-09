#include "volume_control.h"
#include "ui_volume_control.h"

Volume_control::Volume_control(QWidget *parent)
    : QDialog(parent),
    ui(new Ui::Volume_control)
{
    ui->setupUi(this);


    setWindowFlags(Qt::FramelessWindowHint | Qt::Popup);

    ui->VolumeS->setRange(0, 100);
    int initialVolume = ui->VolumeS->value();
    ui->VolumeL->setText(QString::number(initialVolume) + "%");

    connect(ui->VolumeS, &QSlider::valueChanged, this, [=](int value) {
        ui->VolumeL->setText(QString::number(value) + "%");
    });
}

Volume_control::~Volume_control()
{
    delete ui;
}


