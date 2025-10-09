#include "mainwindow.h"
#include "./ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowIcon(QIcon(":/image/Images/player_ico.png"));

    ui->centralwidget->setLayout(ui->gridL);
    ui->videoslider->installEventFilter(this);





    connect(ui->play_button, &QPushButton::clicked, this, &MainWindow::on_actionPlay_pause_triggered);



    player = new QMediaPlayer(this);
    videoWidget = ui->videoWidget;
    player->setVideoOutput(videoWidget);
    audioOutput = new QAudioOutput(this);
    player->setAudioOutput(audioOutput);
    audioOutput->setVolume(volume / 100.0);  // 0.0 - 1.0



    connect(player, &QMediaPlayer::positionChanged, this, &MainWindow::update_time);
    connect(player, &QMediaPlayer::durationChanged, this, &MainWindow::update_time);


    connect(player, &QMediaPlayer::durationChanged, this, [=](qint64 duration){
        ui->videoslider->setMaximum(duration);
    });

    connect(player, &QMediaPlayer::positionChanged, this, [=](qint64 position){
        if (!ui->videoslider->isSliderDown()) {
            ui->videoslider->setValue(position);
        }
    });

    connect(ui->videoslider, &QSlider::sliderMoved, this, [=](int position){
        player->setPosition(position);
    });


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}




void MainWindow::on_actionOpen_triggered()
{
    QString initialPath = QStandardPaths::writableLocation(QStandardPaths::MoviesLocation);

    if (initialPath.isEmpty()) {
        initialPath = QStandardPaths::writableLocation(QStandardPaths::HomeLocation);
    }

    QString newFileName = QFileDialog::getOpenFileName(
        this,
        tr("Open Video"),
        initialPath,
        tr("Video Files (*.mp4 *.avi *.mkv);;All Files (*.*)"));

    if (!newFileName.isEmpty()) {

        if (!currentVideoPath.isEmpty()) {
            previousVideoPath = currentVideoPath;
        }

        currentVideoPath = newFileName;
        fileName = newFileName;

        qDebug() << "Fișier video selectat:" << fileName;

        player->setSource(QUrl::fromLocalFile(fileName));
        player->setAudioOutput(audioOutput);
        audioOutput->setVolume(volume / 100.0);
        player->play();
        ui->play_button->setIcon(QIcon(":/image/Images/pause_ico.svg"));

        setWindowTitle("Qt Media Player - " + QFileInfo(fileName).fileName());
    } else {
        qDebug() << "The file doesn't open!";
    }
}


void MainWindow::on_actionClose_triggered()
{
    if (!player->source().isEmpty()) {
        qDebug() << "Closing video:" << currentVideoPath;

        // Oprește redarea
        player->stop();

        player->setSource(QUrl());

        ui->play_button->setIcon(QIcon(":/image/Images/Play_ico.svg"));

        fileName.clear();
        previousVideoPath = currentVideoPath;
        currentVideoPath.clear();

        setWindowTitle("Qt Media Player");
    } else {
        qDebug() << "No video to close.";
    }
}




void MainWindow::on_actionPlay_pause_triggered()
{
    if(player->playbackState() == 1) // Playing
    {
        player->pause();
        ui->play_button->setIcon(QIcon(":/image/Images/Play_ico.svg"));
    }
    else
    {
        player->play();
        ui->play_button->setIcon(QIcon(":/image/Images/pause_ico.svg"));
    }
}



void MainWindow::on_actionReset_triggered()
{
     player->stop();
     player->play();

}



void MainWindow::on_screan_b_clicked()
{
    if(!is_fullscreen){
        lastGeometry = this->geometry();

        this->showFullScreen();
        menuBar()->setVisible(false);
        is_fullscreen = true;
    }
    else {
        this->showNormal();
        this->setGeometry(lastGeometry);
        menuBar()->setVisible(true);
        is_fullscreen = false;
    }
}


void MainWindow::on_skipForwardButton_clicked()
{
    qint64 pos = player->position();
    qint64 dur = player->duration();
    qint64 newPos = pos + 10000; // +10 sec

    if (dur > 0 && newPos > dur)
        newPos = dur;

    player->setPosition(newPos);


}


void MainWindow::on_skipBackwardButton_clicked()
{

    if (player->playbackState() != QMediaPlayer::PlayingState)
        player->play();

    qint64 pos = player->position();
    qint64 newPos = pos - 10000; // -10 sec
    if (newPos < 0) newPos = 0;

    player->setPosition(newPos);
}


bool MainWindow::eventFilter(QObject *obj, QEvent *event) {
    if (obj == ui->videoslider && event->type() == QEvent::MouseButtonPress) {
        QMouseEvent *mouseEvent = static_cast<QMouseEvent*>(event);

        // Calculate the new pos of the video
        int newValue = ui->videoslider->minimum() +
                       ((ui->videoslider->maximum() - ui->videoslider->minimum()) * mouseEvent->x()) / ui->videoslider->width();

        // Set the slider and the player
        ui->videoslider->setValue(newValue);
        player->setPosition(newValue);

        return true;
    }
    return QMainWindow::eventFilter(obj, event);
}


void MainWindow::on_VolumeB_clicked()
{

    Volume_control volumeDialog(this);


    QSlider* slider = volumeDialog.findChild<QSlider*>("VolumeS");
    QLabel* label  = volumeDialog.findChild<QLabel*>("VolumeL");


    int currentVolume = static_cast<int>(audioOutput->volume() * 100);
    slider->setValue(currentVolume);
    label->setText(QString::number(currentVolume) + "%");

    connect(slider, &QSlider::valueChanged, this, [=](int value) {
        audioOutput->setVolume(value / 100.0);
        label->setText(QString::number(value) + "%");
    });


    volumeDialog.setWindowFlags(Qt::FramelessWindowHint | Qt::Popup);

    volumeDialog.adjustSize();


    int offset = 30;
    QPoint globalPos = ui->VolumeB->mapToGlobal(QPoint(0, 0));
    volumeDialog.move(globalPos.x() + ui->VolumeB->width()/2 - volumeDialog.width()/2,
                      globalPos.y() - volumeDialog.height() - offset);


    volumeDialog.exec();
}


void MainWindow::on_actionPrevieus_Video_triggered()
{
    if (!previousVideoPath.isEmpty()) {
        qDebug() << "Opening previous video:" << previousVideoPath;


        player->stop();


        player->setSource(QUrl::fromLocalFile(previousVideoPath));
        player->setAudioOutput(audioOutput);
        audioOutput->setVolume(volume / 100.0);
        player->play();
        setWindowTitle("Qt Media Player - " + QFileInfo(previousVideoPath).fileName());
        QString temp = currentVideoPath;
        currentVideoPath = previousVideoPath;
        previousVideoPath = temp;
    } else {
        qDebug() << "No previous video available.";

    }
}


void MainWindow::on_actionAbout_triggered()
{
    QMessageBox msgBox;
    msgBox.setWindowTitle("About Developer");
    msgBox.setTextFormat(Qt::RichText);  // Enable rich text formatting
    msgBox.setText(
        "Hire me!<br>"
        "Visit my <a href=\"https://github.com/TMBOGDAN\">GitHub</a> for more projects."
        );
    msgBox.setIcon(QMessageBox::Information);
    msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Help);
    msgBox.setDefaultButton(QMessageBox::Ok);

    int ret = msgBox.exec();

    if (ret == QMessageBox::Help) {
        QDesktopServices::openUrl(QUrl("https://github.com/TMBOGDAN"));
    }
}

void MainWindow::update_time()
{
    if (!player) return;

    qint64 current = player->position(); // poziția curentă (ms)
    qint64 total = player->duration();   // durata totală (ms)

    QTime currentTime(0, 0);
    currentTime = currentTime.addMSecs(current);

    QTime totalTime(0, 0);
    totalTime = totalTime.addMSecs(total);

    QString timeText = currentTime.toString("mm:ss") + " / " + totalTime.toString("mm:ss");

    ui->timeL->setText(timeText);
}




