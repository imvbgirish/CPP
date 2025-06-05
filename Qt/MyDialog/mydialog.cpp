#include "mydialog.h"
#include <QDebug>
#include <QCloseEvent>

MyDialog::MyDialog(QWidget *parent)
    : QDialog(parent)
{
}

MyDialog::~MyDialog()
{
}

void MyDialog::closeEvent(QCloseEvent *event)
{
    qDebug() << "closeEvent called";
    QDialog::closeEvent(event);
}

void MyDialog::reject()
{
    qDebug() << "reject called";
    QDialog::reject();
}
