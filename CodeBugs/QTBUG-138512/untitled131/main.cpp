#include <QApplication>
#include <QLabel>
#include <QLocale>
#include <QTextEdit>
#include <QtDataVisualization/Q3DBars>
#include <QtDataVisualization/Q3DSurface>

int main(int argc, char *argv[])
{
    qDebug() << "Qt version: " << QT_VERSION_STR;
    // QLocale::setDefault(QLocale::system());
    QApplication a(argc, argv);

    QLocale defaultLocale;

    qDebug() << "Default Locale:" << defaultLocale.name();

    QLabel *text_wid = new QLabel();
    qDebug() << "label:" << text_wid->locale().name();

    QTextEdit *edit = new QTextEdit();
    qDebug() << "text edit: " << edit->locale().name();
    Q3DSurface *t = new Q3DSurface();
    qDebug() << "surface: " << t->locale().name();
    Q3DBars *m_bars = new Q3DBars();
    qDebug() << "bar:" << m_bars->locale().name();

    qDebug() << "System locale:" << QLocale::system().name();
    qDebug() << "Decimal point:" << QLocale::system().decimalPoint();
    qDebug() << "Group separator:" << QLocale::system().groupSeparator();

    return a.exec();
}
