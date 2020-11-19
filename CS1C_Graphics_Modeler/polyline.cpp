#include "polyline.h"
#include <cmath>
#include <QDebug>

polyline::~polyline(){}

void polyline::draw(QPaintDevice *device)
{
//    get_qpainter().setPen(get_pen());
//    get_qpainter().setBrush(get_brush());
    //drawID();
    QPainter painter;
    painter.begin(device);
    painter.setPen(get_pen());
    //qDebug() << get_pen();
    painter.setBrush(get_brush());
    painter.drawLine(p1, p2);
    painter.drawLine(p2, p3);
    painter.drawLine(p3, p4);
    painter.end();
}

// NEED HELP WITH MOVE
void polyline::move(int x, int y)
{
    QPoint offset (p4 - p1);
    QPoint tempOne(QPoint(x,y));
    QPoint tempTwo(QPoint(x,y)+offset);
    if(tempOne.x()<1000 &&tempOne.y()<500 && tempTwo.x()<1000 && tempTwo.y()<500)
    {
        p1 = tempOne;
        p4 = tempOne+offset;
    }
}

void polyline::setPoints(const QPoint &p1, const QPoint &p2, const QPoint &p3, const QPoint &p4)
{
    this->p1 = p1;
    this->p2 = p2;
    this->p3 = p3;
    this->p4 = p4;
}

double polyline::calcPerimeter()
{
    return 0;
}

double polyline::calcArea()
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
