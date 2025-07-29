#include "qevent.h"
#include "widget.h"
#include <QPainter>
#include <QFont>

TextWidget::TextWidget(QWidget *parent)
    : QWidget(parent)
{
    layout = new QTextLayout(QStringLiteral("ABCDEF"));

    QFont font;
    font.setFamily("Courier New");
    font.setPointSize(80);
    layout->setFont(font);

    // Setup FormatRanges to test setFormats() — this does NOT suffer from the bug
    QList<QTextLayout::FormatRange> formats;

    QTextLayout::FormatRange blue;
    blue.start = 0;
    blue.length = 6;
    blue.format.setForeground(Qt::gray);
    formats.append(blue);

    QTextLayout::FormatRange red;
    red.start = 2;
    red.length = 6;
    red.format.setForeground(Qt::red);
    formats.append(red);

    // QTextLayout::FormatRange green;
    // green.start = 2;
    // green.length = 2;
    // green.format.setForeground(Qt::green);
    // formats.append(green);

    layout->setFormats(formats); // ✅ setFormats, not selection at draw()

    layout->beginLayout();
    QTextLine line = layout->createLine();
    line.setLineWidth(10000);  // large enough to avoid wrapping
    layout->endLayout();
}

void TextWidget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    layout->draw(&painter, QPoint(0, 0));
}
