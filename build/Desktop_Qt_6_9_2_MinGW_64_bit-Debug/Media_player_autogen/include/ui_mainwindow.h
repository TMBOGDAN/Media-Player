/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtMultimediaWidgets/QVideoWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionClose;
    QAction *actionExit;
    QAction *actionPlay_pause;
    QAction *actionReset;
    QAction *actionNext;
    QAction *actionFullscrean;
    QAction *actionZoom_in;
    QAction *actionZoom_out;
    QAction *actionMute_unmute;
    QAction *actionAbout;
    QAction *actionhf;
    QAction *actionOpen;
    QAction *actionMute_Unmute;
    QAction *actionPrevieus_Video;
    QAction *actionMinimize;
    QAction *actionWindowedFullscrean;
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *gridL;
    QHBoxLayout *buttonsL;
    QHBoxLayout *horizontalLayout;
    QPushButton *screan_b;
    QPushButton *skipBackwardButton;
    QPushButton *play_button;
    QPushButton *skipForwardButton;
    QPushButton *VolumeB;
    QLabel *timeL;
    QVBoxLayout *VL_video_sidebar;
    QVideoWidget *videoWidget;
    QSlider *videoslider;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuPlayback;
    QMenu *menuHelp;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(976, 586);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName("actionClose");
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        actionPlay_pause = new QAction(MainWindow);
        actionPlay_pause->setObjectName("actionPlay_pause");
        actionReset = new QAction(MainWindow);
        actionReset->setObjectName("actionReset");
        actionNext = new QAction(MainWindow);
        actionNext->setObjectName("actionNext");
        actionFullscrean = new QAction(MainWindow);
        actionFullscrean->setObjectName("actionFullscrean");
        actionZoom_in = new QAction(MainWindow);
        actionZoom_in->setObjectName("actionZoom_in");
        actionZoom_out = new QAction(MainWindow);
        actionZoom_out->setObjectName("actionZoom_out");
        actionMute_unmute = new QAction(MainWindow);
        actionMute_unmute->setObjectName("actionMute_unmute");
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        actionhf = new QAction(MainWindow);
        actionhf->setObjectName("actionhf");
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        actionMute_Unmute = new QAction(MainWindow);
        actionMute_Unmute->setObjectName("actionMute_Unmute");
        actionPrevieus_Video = new QAction(MainWindow);
        actionPrevieus_Video->setObjectName("actionPrevieus_Video");
        actionMinimize = new QAction(MainWindow);
        actionMinimize->setObjectName("actionMinimize");
        actionWindowedFullscrean = new QAction(MainWindow);
        actionWindowedFullscrean->setObjectName("actionWindowedFullscrean");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(10);
        sizePolicy.setVerticalStretch(10);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: rgb(3, 19, 75);"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 971, 541));
        gridL = new QGridLayout(layoutWidget);
        gridL->setObjectName("gridL");
        gridL->setContentsMargins(0, 0, 0, 0);
        buttonsL = new QHBoxLayout();
        buttonsL->setObjectName("buttonsL");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SizeConstraint::SetNoConstraint);
        screan_b = new QPushButton(layoutWidget);
        screan_b->setObjectName("screan_b");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(screan_b->sizePolicy().hasHeightForWidth());
        screan_b->setSizePolicy(sizePolicy1);
        screan_b->setMaximumSize(QSize(70, 40));
        screan_b->setBaseSize(QSize(70, 40));
        screan_b->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 211, 211);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/Images/screan_ico.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        screan_b->setIcon(icon);

        horizontalLayout->addWidget(screan_b);

        skipBackwardButton = new QPushButton(layoutWidget);
        skipBackwardButton->setObjectName("skipBackwardButton");
        sizePolicy1.setHeightForWidth(skipBackwardButton->sizePolicy().hasHeightForWidth());
        skipBackwardButton->setSizePolicy(sizePolicy1);
        skipBackwardButton->setMaximumSize(QSize(70, 40));
        skipBackwardButton->setBaseSize(QSize(70, 40));
        skipBackwardButton->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 211, 211);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/Images/backward_ico.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        skipBackwardButton->setIcon(icon1);

        horizontalLayout->addWidget(skipBackwardButton);

        play_button = new QPushButton(layoutWidget);
        play_button->setObjectName("play_button");
        sizePolicy1.setHeightForWidth(play_button->sizePolicy().hasHeightForWidth());
        play_button->setSizePolicy(sizePolicy1);
        play_button->setMaximumSize(QSize(70, 40));
        play_button->setBaseSize(QSize(70, 40));
        play_button->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 211, 211);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/Images/Play_ico.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        play_button->setIcon(icon2);

        horizontalLayout->addWidget(play_button);

        skipForwardButton = new QPushButton(layoutWidget);
        skipForwardButton->setObjectName("skipForwardButton");
        sizePolicy1.setHeightForWidth(skipForwardButton->sizePolicy().hasHeightForWidth());
        skipForwardButton->setSizePolicy(sizePolicy1);
        skipForwardButton->setMaximumSize(QSize(70, 40));
        skipForwardButton->setBaseSize(QSize(70, 40));
        skipForwardButton->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 211, 211);"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/Images/forward_ico.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        skipForwardButton->setIcon(icon3);

        horizontalLayout->addWidget(skipForwardButton);

        VolumeB = new QPushButton(layoutWidget);
        VolumeB->setObjectName("VolumeB");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(10);
        sizePolicy2.setHeightForWidth(VolumeB->sizePolicy().hasHeightForWidth());
        VolumeB->setSizePolicy(sizePolicy2);
        VolumeB->setMaximumSize(QSize(80, 50));
        VolumeB->setBaseSize(QSize(200, 40));
        VolumeB->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 211, 211);"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/Images/audio_ico.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        VolumeB->setIcon(icon4);

        horizontalLayout->addWidget(VolumeB);

        timeL = new QLabel(layoutWidget);
        timeL->setObjectName("timeL");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(timeL->sizePolicy().hasHeightForWidth());
        timeL->setSizePolicy(sizePolicy3);
        timeL->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(timeL);


        buttonsL->addLayout(horizontalLayout);


        gridL->addLayout(buttonsL, 2, 0, 1, 1);

        VL_video_sidebar = new QVBoxLayout();
        VL_video_sidebar->setObjectName("VL_video_sidebar");
        videoWidget = new QVideoWidget(layoutWidget);
        videoWidget->setObjectName("videoWidget");
        sizePolicy.setHeightForWidth(videoWidget->sizePolicy().hasHeightForWidth());
        videoWidget->setSizePolicy(sizePolicy);
        videoWidget->setMaximumSize(QSize(16777215, 16777215));
        videoWidget->setStyleSheet(QString::fromUtf8("border : 1px solid black;"));

        VL_video_sidebar->addWidget(videoWidget);


        gridL->addLayout(VL_video_sidebar, 0, 0, 1, 1);

        videoslider = new QSlider(layoutWidget);
        videoslider->setObjectName("videoslider");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(1);
        sizePolicy4.setHeightForWidth(videoslider->sizePolicy().hasHeightForWidth());
        videoslider->setSizePolicy(sizePolicy4);
        videoslider->setMinimumSize(QSize(0, 15));
        videoslider->setMaximumSize(QSize(16777215, 16777215));
        videoslider->setOrientation(Qt::Orientation::Horizontal);

        gridL->addWidget(videoslider, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 976, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuPlayback = new QMenu(menubar);
        menuPlayback->setObjectName("menuPlayback");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuPlayback->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionClose);
        menuFile->addAction(actionExit);
        menuPlayback->addAction(actionPlay_pause);
        menuPlayback->addAction(actionReset);
        menuPlayback->addAction(actionPrevieus_Video);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Media Player", nullptr));
        actionClose->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionPlay_pause->setText(QCoreApplication::translate("MainWindow", "Play/pause", nullptr));
        actionReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        actionNext->setText(QCoreApplication::translate("MainWindow", "Next Video", nullptr));
        actionFullscrean->setText(QCoreApplication::translate("MainWindow", "Fullscrean", nullptr));
        actionZoom_in->setText(QCoreApplication::translate("MainWindow", "Zoom in", nullptr));
        actionZoom_out->setText(QCoreApplication::translate("MainWindow", "Zoom out", nullptr));
        actionMute_unmute->setText(QCoreApplication::translate("MainWindow", "Mute/unmute", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "I nead help", nullptr));
        actionhf->setText(QCoreApplication::translate("MainWindow", "hf", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionMute_Unmute->setText(QCoreApplication::translate("MainWindow", "Mute/Unmute", nullptr));
        actionPrevieus_Video->setText(QCoreApplication::translate("MainWindow", "Previeus Video", nullptr));
        actionMinimize->setText(QCoreApplication::translate("MainWindow", "Minimize", nullptr));
        actionWindowedFullscrean->setText(QCoreApplication::translate("MainWindow", "WindowedFullscrean", nullptr));
        screan_b->setText(QString());
        skipBackwardButton->setText(QString());
        play_button->setText(QString());
        skipForwardButton->setText(QString());
        VolumeB->setText(QString());
        timeL->setText(QString());
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuPlayback->setTitle(QCoreApplication::translate("MainWindow", "Playback", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
