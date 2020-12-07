#include "polyline.h"
#include <cmath>
#include <QDebug>

polyline::~polyline(){}

void polyline::draw(QPaintDevice *device)
{
    QPainter &painter = get_painter();
    painter.begin(device);

    QString IdString = construct_ID_String(shapeName, getID());
    get_painter().drawText(getIDLocation().x(), getIDLocation().y() - 5, IdString);

    painter.setPen(get_pen());
    painter.setBrush(get_brush());

    painter.drawPolyline(points, pointCount);

    painter.end();
}

QPoint polyline::getIDLocation()
{
    QPoint leftMostPoint = points[0];
    for(int i = 1; i < pointCount; i++)
    {
        leftMostPoint = getLeftMostPoint(leftMostPoint, points[i]);
    }

    return leftMostPoint;
}

QPoint polyline::getLeftMostPoint(QPoint p1, QPoint p2)
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

void polyline::move(int x, int y)
{
    QPoint currentTopLeft = getIDLocation();
    float distanceX = x - currentTopLeft.x();
    float distanceY = y - currentTopLeft.y();

    for(int i = 0; i < pointCount; i++)
    {
       points[i].setX(points[i].x() + distanceX);
       points[i].setY(points[i].y() + distanceY);
    }
    return;
}

void polyline::setPoints(QPoint* newPoints, int count)
{
    points = newPoints;
    pointCount = count;
}

double polyline::calcPerimeter()
{
    double perimeter = 0;
    for(int i = 0; i < pointCount; i += 2)
    {
        // Gets the perimeter of the poly's unique points
        perimeter += sqrt(pow(points[i+1].x() - points[i].x(), 2) + pow(points[i+1].y() - points[i].y(), 2));
    }
    return perimeter;
}

double polyline::calcArea()
{
    double perimeter = 0;
    for(int i = 0; i < pointCount; i += 2)
    {
        // Gets the perimeter of the poly's unique points
        perimeter += sqrt(pow(points[i+1].x() - points[i].x(), 2) + pow(points[i+1].y() - points[i].y(), 2));
    }
    return perimeter;
}

QString polyline::getShapeString()
{
    QString outString = "\nShapeId: " + QString::number(getID());
    outString += "\nShapeType: Polyline";

    outString += "\nShapeDimensions: ";
    for(int i = 0; i < pointCount; i++)
    {
        outString += QString::number(points[i].x()) + ", " + QString::number(points[i].y());

        if(i != pointCount - 1)
            outString += ", ";
    }

    outString += "\nPenColor: " + penColorName;
    outString += "\nPenWidth: " + QString::number(get_pen().width());
    outString += "\nPenStyle: " + penStyleName;
    outString += "\nPenCapStyle: " + penCapStyleName;
    outString += "\nPenJoinStyle: " + penJoinStyleName + '\n';

    return outString;
}
