#ifndef OBSOLETECOMMAND_H
#define OBSOLETECOMMAND_H

#include <QUndoCommand>
#include <QDebug>

// A command that becomes obsolete during redo()
class ObsoleteCommand : public QUndoCommand
{
public:
    void redo() override {
        qDebug() << "Redo called, setting obsolete = true";
        setObsolete(true);
    }

    void undo() override {
        qDebug() << "Undo called";
    }
};

#endif // OBSOLETECOMMAND_H
