#include <QApplication>
#include <QMainWindow>
#include "widget.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QMainWindow window;
    window.setCentralWidget(new TextWidget());
    window.resize(400, 200);
    window.show();
    return app.exec();
}
