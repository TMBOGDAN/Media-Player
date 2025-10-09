/********************************************************************************
** Form generated from reading UI file 'volume_control.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOLUME_CONTROL_H
#define UI_VOLUME_CONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Volume_control
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSlider *VolumeS;
    QLabel *VolumeL;

    void setupUi(QDialog *Volume_control)
    {
        if (Volume_control->objectName().isEmpty())
            Volume_control->setObjectName("Volume_control");
        Volume_control->resize(201, 30);
        widget = new QWidget(Volume_control);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 201, 31));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        VolumeS = new QSlider(widget);
        VolumeS->setObjectName("VolumeS");
        VolumeS->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout->addWidget(VolumeS);

        VolumeL = new QLabel(widget);
        VolumeL->setObjectName("VolumeL");

        horizontalLayout->addWidget(VolumeL);


        retranslateUi(Volume_control);

        QMetaObject::connectSlotsByName(Volume_control);
    } // setupUi

    void retranslateUi(QDialog *Volume_control)
    {
        Volume_control->setWindowTitle(QCoreApplication::translate("Volume_control", "Dialog", nullptr));
        VolumeL->setText(QCoreApplication::translate("Volume_control", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Volume_control: public Ui_Volume_control {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOLUME_CONTROL_H
