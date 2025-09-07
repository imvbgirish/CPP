
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QMainWindow mainWindow;

    auto *centralWidget = new QWidget;

    auto *layout = new QVBoxLayout(centralWidget);

    auto *comboBox = new QComboBox(centralWidget);
    layout->addWidget(comboBox);

    mainWindow.setCentralWidget(centralWidget);

    mainWindow.resize(400, 400);
    mainWindow.show();

    QTimer::singleShot(1000, [&comboBox](){
        comboBox->insertItem(0, "Item 0");
        comboBox->showPopup();
    });

    QTimer::singleShot(2000, [&comboBox](){
        comboBox->clear();
    });

    QTimer::singleShot(3000, [&comboBox](){
        comboBox->insertItem(0, "Item 1");
    });

    return app.exec();
}
