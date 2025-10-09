#ifndef VOLUME_CONTROL_H
#define VOLUME_CONTROL_H

#include <QDialog>

namespace Ui {
class Volume_control;
}

class Volume_control : public QDialog
{
    Q_OBJECT

public:
    explicit Volume_control(QWidget *parent = nullptr);
    ~Volume_control();

private:
    Ui::Volume_control *ui;
};

#endif // VOLUME_CONTROL_H
