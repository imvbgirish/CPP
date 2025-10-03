#include "mainwindow.h"

#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setFixedSize(500,500);
    w.show();

    qDebug() << sizeof(NULL);
    qDebug() << sizeof(nullptr);

    int *p = nullptr;
    qDebug() << sizeof(p);

    return a.exec();
}
