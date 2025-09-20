#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "mycombomodel.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    MyComboModel combo;
    QQmlApplicationEngine engine;

    engine.rootContext()->setContextProperty("ComboModel",&combo);
    // qmlRegisterType<MyComboModel>("MyModels", 1, 0, "MyComboModel");

    const QUrl url(QStringLiteral("qrc:/DynamicCombo/main.qml"));
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

    return app.exec();
}
