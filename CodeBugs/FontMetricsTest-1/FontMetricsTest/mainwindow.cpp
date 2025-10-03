#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setCentralWidget(new FontMetricsWidget);
}

MainWindow::~MainWindow()
{

}

