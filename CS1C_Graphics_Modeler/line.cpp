#include "line.h"
#include <cmath>
#include <QDebug>

line::~line(){}

void line::draw(QPaintDevice *device)
{
//    get_qpainter().setPen(get_pen());
//    get_qpainter().setBrush(get_brush());
    //drawID();
    QPainter painter;
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
