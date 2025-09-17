#ifndef WCOMPONENTS_PLUGIN_H
#define WCOMPONENTS_PLUGIN_H

#include <QQmlEngineExtensionPlugin>

class WComponents : public QQmlEngineExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlEngineExtensionInterface_iid)
public:
    explicit WComponents(QQmlEngineExtensionPlugin *parent = nullptr);
    ~WComponents() override;
};
#endif // WCOMPONENTS_PLUGIN_H
