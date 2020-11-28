#include "line.h"
#include <cmath>
#include <QDebug>

line::~line(){}

void line::draw(QPaintDevice *device)
{
    //drawID();
    QPainter &painter = get_painter();
    painter.begin(device);
    painter.setPen(get_pen());
    //qDebug() << get_pen();
    painter.setBrush(get_brush());
    painter.drawLine(begin, end);
    painter.end();
}

void line::move(int x, int y)
{
    QPoint offset (end-begin);
    QPoint tempOne(QPoint(x,y));
    QPoint tempTwo(QPoint(x,y)+offset);
    if(tempOne.x()<1000 &&tempOne.y()<500 && tempTwo.x()<1000 && tempTwo.y()<500)
    {
        begin = tempOne;
        end = tempOne+offset;
    }
}

void line::setPoints(const QPoint &begin, const QPoint &end)
{
    this->begin = begin;
    this->end = end;
}

double line::calcPerimeter()
{
    return 0;
}

double line::calcArea()
{
    return 0;
}

QString line::getShapeString()
{
    //Shape ID
    QString outString = "\nShapeId: " + QString::number(getID());

    //ShapeType
    outString += "\nShapeType: Line";

    //ShapeDimensions
    outString += "\nShapeDimensions: " + QString::number(begin.x()) + ", "
                 +QString::number(begin.y()) + ", " + QString::number(end.x()) + ", "
                 +QString::number(end.y());

    //Pen Color
    outString += "\nPenColor: " + penColorName;

    //PenWidth
    outString += "\nPenWidth: " + QString::number(get_pen().width());

    //PenStyle
    outString += "\nPenStyle: " + penStyleName;

    //Pen Cap Style
    outString += "\nPenCapStyle: " + penCapStyleName;

    //PenJoinStyle
    outString += "\nPenJoinStyle: " + penJoinStyleName + '\n';

    return outString;
}
