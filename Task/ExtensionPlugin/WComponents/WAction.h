#ifndef WACTION_H
#define WACTION_H

#include <QObject>
#include <QQmlEngine>

class WAction : public QObject
{
    Q_OBJECT
    QML_ELEMENT
public:
    explicit WAction(QObject *parent = nullptr);
    ~WAction();
signals:
};

#endif // WACTION_H
