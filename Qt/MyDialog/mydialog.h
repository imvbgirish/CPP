#ifndef MYDIALOG_H
#define MYDIALOG_H

#include <QDialog>

class MyDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MyDialog(QWidget *parent = nullptr);
    ~MyDialog();

protected:
    void closeEvent(QCloseEvent *event) override;  // Override closeEvent to test
    void reject() override;                         // Override reject to test
    void setVisible(bool visible) override;

};

#endif // MYDIALOG_H
