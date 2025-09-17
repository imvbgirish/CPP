#include "WComponents_plugin.h"

WComponents::WComponents(QQmlEngineExtensionPlugin *parent)
    : QQmlEngineExtensionPlugin(parent)
{
    qDebug()<<Q_FUNC_INFO<<"Constructor called";
}



WComponents::~WComponents()
{
    qDebug()<<Q_FUNC_INFO<<"Destructor called";
}
