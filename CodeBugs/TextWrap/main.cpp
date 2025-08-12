#include <QApplication>
#include <QTextEdit>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    QTextEdit edit;
    edit.setWindowTitle("WrapAtWordBoundaryOrAnywhere Bug Demo");

    // Set the wrap mode to WrapAtWordBoundaryOrAnywhere
    QTextOption opt = edit.document()->defaultTextOption();
    opt.setWrapMode(QTextOption::WrapAtWordBoundaryOrAnywhere);
    edit.document()->setDefaultTextOption(opt);

    // Add some short text
    edit.setText("abcd");

    // Set very narrow width to trigger incorrect wrap behavior
    edit.resize(10, 100); // 10px width is very small
    edit.show();

    return app.exec();
}
