#ifndef APPLICATIONINTERFACE_H
#define APPLICATIONINTERFACE_H

#include <QObject>

class ApplicationInterface : public QObject
{
    Q_OBJECT
public:
    explicit ApplicationInterface(bool multiProcessMode, QObject *parent = nullptr);

    void windowClosed();

signals:
    void quit();

private:
    bool m_multiProcessMode;

    void handleWindowClose();
    void emitQuit();
};

#endif // APPLICATIONINTERFACE_H
