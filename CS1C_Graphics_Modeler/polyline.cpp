#include "polyline.h"
#include <cmath>
#include <QDebug>

polyline::~polyline(){}

void polyline::draw(QPaintDevice *device)
{
    QPainter &painter = get_painter();
    painter.begin(device);
    painter.setPen(get_pen());
    painter.setBrush(get_brush());

    painter.drawPolyline(points, pointCount);

    painter.end();
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
