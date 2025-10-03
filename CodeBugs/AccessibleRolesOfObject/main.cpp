#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QAccessible>
#include <QDebug>

// Helper to convert role to string
static const QString roleName(QAccessible::Role role)
{
    switch (role) {
    case QAccessible::Pane: return "Pane";
    case QAccessible::Grouping: return "Grouping";
    case QAccessible::PageTab: return "PageTab";
    case QAccessible::Button: return "Button";
    case QAccessible::StaticText: return "StaticText";
    case QAccessible::EditableText: return "EditableText";
    case QAccessible::Window: return "Window";
    default: return "other";
    }
}

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreated,
        &app,
        [url](QObject *obj, const QUrl &objUrl) {
            if (!obj && url == objUrl)
                QCoreApplication::exit(-1);
        },
        Qt::QueuedConnection);
    engine.load(url);

    if (engine.rootObjects().isEmpty())
        return -1;

    QObject *root = engine.rootObjects().first();

    // List of objectNames we want to test
    QStringList names = {"page1", "label1"};

    for (const QString &name : names) {
        QObject *obj = root->findChild<QObject*>(name);
        if (obj) {
            QAccessibleInterface *iface = QAccessible::queryAccessibleInterface(obj);
            if (iface) {
                qDebug() << "Accessible role for" << name << ":" << roleName(iface->role());
            } else {
                qDebug() << "No accessible interface found for" << name;
            }
        } else {
            qDebug() << "Object not found:" << name;
        }
    }

    return app.exec();
}
