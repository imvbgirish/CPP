#include "mainwindow.h"
#include "obsoletecommand.h"

#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent),
    m_stack(new QUndoStack(this)),
    m_redoStatus(new QLabel(this)),
    m_redoText(new QLabel(this)),
    m_redoButton(new QPushButton("Redo", this))
{
    setupUI();
    connectSignals();

    // Push and undo a command, so redo becomes available
    m_stack->push(new ObsoleteCommand());
    m_stack->undo();

    updateUI();
}

void MainWindow::setupUI()
{
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(m_redoStatus);
    layout->addWidget(m_redoText);
    layout->addWidget(m_redoButton);
    setLayout(layout);
    setWindowTitle("QTBUG-138567 Demo");
}

void MainWindow::connectSignals()
{
    connect(m_stack, &QUndoStack::canRedoChanged, this, [this]() {
        m_redoStatus->setText(QString("Redo status: %1").arg(m_stack->canRedo() ? "true" : "false"));
        qDebug() << "[Signal] canRedoChanged emitted";
    });

    connect(m_stack, &QUndoStack::redoTextChanged, this, [this]() {
        m_redoText->setText(QString("Redo text: %1").arg(m_stack->redoText()));
        qDebug() << "[Signal] redoTextChanged emitted";
    });

    connect(m_redoButton, &QPushButton::clicked, this, [this]() {
        qDebug() << "redo() called";
        m_stack->redo();
        updateUI();  // just in case signals don't update the UI (due to bug)
    });
}

void MainWindow::updateUI()
{
    m_redoStatus->setText(QString("Redo status: %1").arg(m_stack->canRedo() ? "true" : "false"));
    m_redoText->setText(QString("Redo text: %1").arg(m_stack->redoText()));
}
