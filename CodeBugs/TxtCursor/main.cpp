#include <QApplication>
#include <QDebug>
#include <QTextEdit>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextEdit w;
    w.setPlainText("abcdef");
    QTextCursor tc = w.textCursor();
    tc.movePosition(QTextCursor::NextCharacter, QTextCursor::KeepAnchor, 3);
    qInfo() << tc.position() << tc.selectedText(); // prints: 3 "abc"
    tc.movePosition(QTextCursor::NextCharacter, QTextCursor::MoveAnchor);
    qInfo() << tc.position() << tc.selectedText(); // the cursor was not moved! prints: 3 ""
    // tc.movePosition(QTextCursor::NextCharacter, QTextCursor::MoveAnchor);
    // qInfo() << tc.position() << tc.selectedText();
    w.setTextCursor(tc);
    w.show();

    return a.exec();
}
