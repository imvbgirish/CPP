#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QUndoStack>

class QLabel;
class QPushButton;

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

private:
    QUndoStack *m_stack;
    QLabel *m_redoStatus;
    QLabel *m_redoText;
    QPushButton *m_redoButton;

    void setupUI();
    void connectSignals();
    void updateUI();
};

#endif // MAINWINDOW_H
