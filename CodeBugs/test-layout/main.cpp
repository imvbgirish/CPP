
#include <QApplication>
#include <QMainWindow>
#include <QPainter>

#include "main.hpp"

static bool set_format_fully_translucent_background = false;

//-------------------------------------------------------------------------
struct format_desc_tuple_t
{
    int start;
    int length;
    const char *fg;
};

//-------------------------------------------------------------------------
static void make_formats(
    QList<QTextLayout::FormatRange> *out,
    const format_desc_tuple_t *descs,
    size_t ndescs)
{
    for ( size_t i = 0; i < ndescs; ++i )
    {
        auto &desc = descs[i];
        QTextLayout::FormatRange frange;
        frange.start = desc.start;
        frange.length = desc.length;
        frange.format.setForeground(QColor::fromString(QString::fromUtf8(desc.fg)));
        if ( set_format_fully_translucent_background )
            frange.format.setBackground(QColor::fromString(QString::fromUtf8("#00000000")));
        // frange.format.setBackground(Qt::transparent);

        out->push_back(frange);
    }
}

//-------------------------------------------------------------------------
text_viewer_t::text_viewer_t(QWidget *parent)
    : QWidget(parent)
{
    layout = new QTextLayout();
    layout->setText(QString::fromUtf8("ABCDEF"));
    QFont font = ((QApplication *) QApplication::instance())->font();
    font.setFamily(QString::fromUtf8("Courier New"));
    font.setPointSize(80);
    layout->setFont(font);

    // prepare the "selection" formats, that will be used at `QTextLayout::draw`-time
    format_desc_tuple_t selections_descs[] =
        {
         // { 0, 1, "red" },
         // { 1, 1, "red" },
         // // <========== THIS IS THE OVERRIDE THAT WON'T BE APPLIED (unless a background is effectively set to the FormatRange)
         // { 2, 2, "red" }

        // {0, 2, "blue"},    // DD
        // {1, 2, "red"},     // D3
        // {2, 3, "green"},   // 3

        {0, 6, "gray"},    // All characters gray
        {2, 6, "red"}    // CD should be red

        };
    make_formats(&selection_overrides, selections_descs, sizeof(selections_descs) / sizeof(selections_descs[0]));

    layout->beginLayout();
    {
        QTextLine line = layout->createLine();
        line.setLineWidth(100000000);
        line.setNumColumns(100000000);
    }
    layout->endLayout();
}

//-------------------------------------------------------------------------
void text_viewer_t::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    layout->draw(&painter, QPoint(0, 0), selection_overrides);
}

//-------------------------------------------------------------------------
int main(int argc, char *argv[])
{
    if ( argc > 1 )
        set_format_fully_translucent_background = true;

    QApplication a(argc, argv);
    QMainWindow mw;
    mw.resize(640, 480);
    mw.setCentralWidget(new text_viewer_t());
    mw.show();
    a.exec();
}
