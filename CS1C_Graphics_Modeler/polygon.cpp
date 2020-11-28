//polygon(int id = -1) : shape{id, ShapeType::Polygon}{};
//virtual ~polygon() override;
//void setPoints(QPoint*, int pointCount);
//void move(const int x, const int y) override;
//void draw(QPaintDevice *device) override;
//double calcPerimeter() override {return 0;} //need to write implementation
//double calcArea() override {return 0;} //need to write implementation

#include "polygon.h"
#include <QDebug>

polygon::~polygon(){}

void polygon::setPoints(QPoint* newPoints, int count)
{
    points = newPoints;
    pointCount = count;
}

// NEED IMPLEMENTATION
void polygon::move(const int x, const int y)
{
    return;
}

void polygon::draw(QPaintDevice *device)
{
    QPainter &painter = get_painter();
    painter.begin(device);

    QString IdString = construct_ID_String(shapeName, getID());
    get_painter().drawText(getIDLocation().x(), getIDLocation().y() - 5, IdString);

    painter.setPen(get_pen());
    painter.setBrush(get_brush());

    painter.drawPolygon(points, pointCount);

    painter.end();
}

QPoint polygon::getIDLocation()
{
    QPoint leftMostPoint = points[0];
    for(int i = 1; i < pointCount; i++)
    {
        leftMostPoint = getLeftMostPoint(leftMostPoint, points[i]);
    }

    return leftMostPoint;
}

QPoint polygon::getLeftMostPoint(QPoint p1, QPoint p2)
{
    int x, y;
    if(p1.x() < p2.x())
        x = p1.x();
    else
        x = p2.x();

    if(p1.y() < p2.y())
        y = p1.y();
    else
        y = p2.y();

    return(QPoint(x,y));
}
