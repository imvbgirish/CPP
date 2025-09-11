
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

    // comboBox->showPopup();

    QTimer::singleShot(2000, [&comboBox](){
        comboBox->insertItem(0, "Item 0");
    });

    QTimer::singleShot(2000, [&comboBox](){
        comboBox->insertItem(1, "Item 1");
        comboBox->showPopup();
    });

    QTimer::singleShot(3000, [&comboBox](){
        comboBox->clear();
    });

    QTimer::singleShot(4000, [&comboBox](){
        comboBox->insertItem(0, "Item 1");
    });

    QTimer::singleShot(5000, [&comboBox](){
        comboBox->insertItem(1, "Item 2");
    });

    return app.exec();
}
