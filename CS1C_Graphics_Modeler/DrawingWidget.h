#ifndef DRAWINGWIDGET_H
#define DRAWINGWIDGET_H

#include <QWidget>

class DrawingWidget : public QWidget
{
protected:
    void paintEvent(QPaintEvent *e);
};

#endif // DRAWINGWIDGET_H
