#include "mainwindow.h"
#include "QDebug"
# include "QFile"
#include <QApplication>
#include <QTextStream>

QString readTextFile(const QString &path) {
    QFile file(path);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        return in.readAll();
    }
    return "";
}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("Fusion");
    QString css=readTextFile(":/style/Styles/style.css");
     a.setStyleSheet(css);
    MainWindow w;
    w.show();

    return a.exec();
}
