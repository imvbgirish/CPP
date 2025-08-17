#include "ApplicationInterface.h"
#include <QTimer>
#include <QDebug>

ApplicationInterface::ApplicationInterface(bool multiProcessMode, QObject *parent)
    : QObject(parent), m_multiProcessMode(multiProcessMode)
{}

void ApplicationInterface::windowClosed()
{
    qDebug() << "Window closed";
    handleWindowClose();
}

void ApplicationInterface::handleWindowClose()
{
    if (m_multiProcessMode) {
        qDebug() << "Multi-process mode: Delaying quit signal emission";
        QTimer::singleShot(1000, this, &ApplicationInterface::emitQuit);
    } else {
        qDebug() << "Single-process mode: Emitting quit signal immediately";
        emit quit();
    }
}

void ApplicationInterface::emitQuit()
{
    qDebug() << "Emitting quit signal now";
    emit quit();
}
