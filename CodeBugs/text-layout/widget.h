#ifndef TEXTWIDGET_H
#define TEXTWIDGET_H

#include <QWidget>
#include <QTextLayout>

class TextWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TextWidget(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    QTextLayout *layout;
};

#endif // TEXTWIDGET_H
