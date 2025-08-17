#include <QApplication>
#include <QWidget>
#include <QDebug>
#include <QTimer>
#include "ApplicationInterface.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    bool multiProcessMode = true; // toggle to true to simulate multi-process

    ApplicationInterface iface(multiProcessMode);

    // Create a real window
    QWidget window;
    window.setWindowTitle("Test Window");
    window.resize(400, 300);
    window.show();

    // Connect window close to ApplicationInterface
    QObject::connect(&window, &QWidget::destroyed, &iface, &ApplicationInterface::windowClosed);

    // Connect quit signal to application exit
    QObject::connect(&iface, &ApplicationInterface::quit, &app, [&]() {
        qDebug() << "Quit signal received. Exiting app.";
        app.quit();
    });

    return app.exec();
}
