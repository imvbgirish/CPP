#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFontMetrics>
#include <QPainter>


class FontMetricsWidget : public QWidget
{

protected:
    void paintEvent(QPaintEvent* event){

        Q_UNUSED(event);
        QPainter p(this);

        QFont f;
        f.setPixelSize(18);
        f.setWeight(QFont::Normal);
        p.setFont(f);

        const QString text = "5";

        auto fm = p.fontMetrics();

        // text width = 10
        auto textWidth = fm.horizontalAdvance(text);

        // elieded text should be empty, but here "5"
        auto elidedText = fm.elidedText(text, Qt::ElideRight, 10);

        QRect targetRect(100, 100, 5, 20);
        p.drawText(targetRect, Qt::AlignCenter, elidedText);
    }
};


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    static void fun(){
        qDebug() << "Hey" ;
    }
};
#endif // MAINWINDOW_H
