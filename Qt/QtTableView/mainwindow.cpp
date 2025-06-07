#include "mainwindow.h"
#include <QHeaderView>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    table = new QTableView(this);
    model = new QStandardItemModel(3, 3, this); // 3x3 table

    // Fill data
    for (int row = 0; row < 3; ++row)
        for (int col = 0; col < 3; ++col)
            model->setItem(row, col, new QStandardItem(QString("Item %1%2").arg(row).arg(col)));

    table->setModel(model);

    // Highlight header sections when selecting rows (toggle these to see effect)
    table->horizontalHeader()->setHighlightSections(false); // set false to test
    table->verticalHeader()->setHighlightSections(false);   // set false to test

    table->setSelectionBehavior(QAbstractItemView::SelectRows);

    setCentralWidget(table);
}
