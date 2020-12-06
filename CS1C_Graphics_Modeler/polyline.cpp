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

// NEED HELP WITH MOVE
void polyline::move(int x, int y)
{
//    QPoint offset (p4 - p1);
//    QPoint tempOne(QPoint(x,y));
//    QPoint tempTwo(QPoint(x,y)+offset);
//    if(tempOne.x()<1000 &&tempOne.y()<500 && tempTwo.x()<1000 && tempTwo.y()<500)
//    {
//        p1 = tempOne;
//        p4 = tempOne+offset;
//    }
    return;
}

void polyline::setPoints(QPoint* newPoints, int count)
{
    points = newPoints;
    pointCount = count;
}

double polyline::calcPerimeter()
{
    return 0; //To edit!
}

double polyline::calcArea()
{
    return 0; //To edit!
}
//Shape ID
//QString outString = "\nShapeId: " + QString::number(getID());

////ShapeType
//outString += "\nShapeType: Line";

////ShapeDimensions
//outString += "\nShapeDimensions: " + QString::number(begin.x()) + ", "
//             +QString::number(begin.y()) + ", " + QString::number(end.x()) + ", "
//             +QString::number(end.y());

////Pen Color
//outString += "\nPenColor: " + penColorName;

////PenWidth
//outString += "\nPenWidth: " + QString::number(get_pen().width());

////PenStyle
//outString += "\nPenStyle: " + penStyleName;

////Pen Cap Style
//outString += "\nPenCapStyle: " + penCapStyleName;

////PenJoinStyle
//outString += "\nPenJoinStyle: " + penJoinStyleName + '\n';

//return outString;
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
