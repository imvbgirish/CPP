#include <QPushButton>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QPushButton button;
    QWidget window;
    window.setFixedSize(500,300);
    QPushButton *pushbutton = new QPushButton("Hello world",&window);
    pushbutton->setGeometry(10,10,100,50);
    window.show();

    // QFont font ("Courier");
    // button.setFont(font);

    // QPushButton button1("Girish");
    // QPushButton button2("Inside", &button1);



    return a.exec();
}
