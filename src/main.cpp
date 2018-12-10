#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    // create application
    QApplication a(argc, argv);

    // show main window
    MainWindow w;
    w.show();
    return a.exec();
}
