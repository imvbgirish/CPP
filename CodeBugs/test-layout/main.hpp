#pragma once

#include <QWidget>
#include <QTextLayout>

class text_viewer_t : public QWidget
{
  Q_OBJECT;

  QTextLayout *layout = nullptr;
  QList<QTextLayout::FormatRange> selection_overrides;

public:
  text_viewer_t(QWidget *parent = nullptr);

protected:
  virtual void paintEvent(QPaintEvent *e);
};
