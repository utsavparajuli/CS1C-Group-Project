#include "line.h"
#include <cmath>
#include <QDebug>

line::~line(){}

void line::draw(QPaintDevice *device)
{
    QPainter &painter = get_painter();
    painter.begin(device);

    QString IdString = construct_ID_String(shapeName, getID());
    get_painter().drawText(getIDLocation().x(), getIDLocation().y(), IdString);

    painter.setPen(get_pen());

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

QPoint line::getIDLocation()
{
    int x, y;
    if(begin.x() < end.x())
        x = begin.x();
    else
        x = end.x();

    if(begin.y() < end.y())
        y = begin.y();
    else
        y = end.y();

    return(QPoint(x,y));
}

//void Line::drawID()
//{
//    //! Int variables that hold the coordinates for left most point of the object
//    int leftmostPoint;  /*! < leftmostpoint holds the x- axis value*/
//    int upmostPoint;    /*! < upmostPoint holds the y- axis value*/

//    const int VERTICAL_BUFFER = 5; /*! <Vertical Buffer for Drawing ID*/

//    one.rx() < two.rx()? leftmostPoint = one.rx() : leftmostPoint = two.rx();
//    one.ry() < two.ry()? upmostPoint = one.ry() : upmostPoint = two.ry();
//    getQPainter()->drawText(leftmostPoint, upmostPoint - VERTICAL_BUFFER, stringID);
//}
