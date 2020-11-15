 #ifndef DRAWINGWIDGET_H
#define DRAWINGWIDGET_H

#include <QWidget>

class DrawingWidget : public QWidget
{
public:
    enum class ShapeType { NoShape, Line, Polyline, Polygon, Rectangle, Ellipse, Text};
    explicit DrawingWidget(QWidget *parent = nullptr);

    void setShape(ShapeType);
    void setBegin(QPoint);
    void setEnd(QPoint);

protected:
    void paintEvent(QPaintEvent *event);

private:
    ShapeType shape;
    QPoint begin;
    QPoint end;
};

#endif // DRAWINGWIDGET_H
