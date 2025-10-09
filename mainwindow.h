#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QApplication>
#include <QMainWindow>
#include <QFileDialog>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QSlider>
#include <QStandardPaths>
#include <QUrl>
#include <QDebug>
#include <QFileInfo>
#include <QScreen>
#include <QGuiApplication>
#include <QtMultimedia/QMediaPlayer>
#include <QtMultimediaWidgets/QVideoWidget>
#include <QAudioOutput>
#include <QMouseEvent>
#include <QSlider>
#include <QLabel>
#include <QMessageBox>
#include <QDesktopServices>
#include <QUrl>
#include <QIcon>
#include "volume_control.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

    public:
        MainWindow(QWidget *parent = nullptr);
        ~MainWindow();

        QString fileName;

        private slots:
        void on_actionExit_triggered();

        void on_actionOpen_triggered();

        void on_actionClose_triggered();

        void on_actionPlay_pause_triggered();

        void on_actionReset_triggered();

        void on_screan_b_clicked();

        void on_skipForwardButton_clicked();

        void on_skipBackwardButton_clicked();

        void on_VolumeB_clicked();

        void on_actionPrevieus_Video_triggered();

        void on_actionAbout_triggered();

        void update_time();

    protected :
         bool eventFilter(QObject *obj, QEvent *event) override;

    private:
          void setupIcons();
        QString previousVideoPath;
        QString currentVideoPath;
            Ui::MainWindow *ui;
            QMediaPlayer *player;
            QVideoWidget *videoWidget;
            bool is_fullscreen= false;
            QRect lastGeometry;
            int volume = 100;
            QAudioOutput* audioOutput = nullptr;

};
#endif
