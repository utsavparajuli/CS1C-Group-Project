#include "ellipse.h"

Ellipse::Ellipse():shape()
{
    set_Shape(ShapeType::Ellipse);
    // default values for the ellipse
    setCenter(100, 100);
    setWidth(10);
    setHeight(10);
}



Ellipse::Ellipse(int x, int y, int width, int height):shape()
{
    set_Shape(ShapeType::Ellipse);
    setCenter(x, y);
    setWidth(width);
    setHeight(height);
}



Ellipse::Ellipse(const Ellipse& source)
{
    x = source.getX();
    y = source.getY();
    width = source.getWidth();
    height = source.getHeight();
    stringID = source.getShapeID();
}



Ellipse::~Ellipse() {}



void Ellipse::setCenter(int newx, int newy)
{
    x = newx;
    y = newy;
}



void Ellipse::setWidth(int width)
{
    this->width = width;
}



void Ellipse::setHeight(int height)
{
    this->height = height;
}


int Ellipse::getX()const
{
    return x;
}



int Ellipse::getY()const
{
    return y;
}



int Ellipse::getWidth()const
{
    return width;
}



int Ellipse::getHeight()const
{
    return height;
}



QString Ellipse::getShapeID()const
{
    return stringID;
}


void Ellipse::draw(QPaintDevice *device)
{
    QPainter &painter = get_painter();
    painter.begin(device);
    // set the pen and brush
    get_painter().setPen(get_pen());
    get_painter().setBrush(get_brush());
    // draw the id number label for the ellipse
    //drawID();
    // draw the ellipse
    get_painter().drawEllipse(x, y, width, height);
    painter.end();
}



void Ellipse::drawID()
{
//    // Int variables that hold the coordinates for left most point of the object
//    int leftmostPoint;  // < leftmostpoint holds the x- axis value
//    int upmostPoint;    // < upmostPoint holds the y- axis value

//    const int VERTICAL_BUFFER = 5; // < Vertical Buffer for Drawing ID

//    leftmostPoint = center.x() -  width;

//    upmostPoint = center.y() - height;

//    get_painter().drawText(leftmostPoint, upmostPoint - VERTICAL_BUFFER, stringID);
    return;
}



void Ellipse::move(const int x,const int y)
{
//    QPoint newCenter(QPoint(x, y));

//    // check to make sure the new location does not go off the right edge of the canvas
//    if (newCenter.x() < 1000 && newCenter.y() < 500)
//    {
//        center = newCenter;
//    }
    return;
}



double Ellipse::calcPerimeter()
{
    return (width * 2) + (height * 2);
}



double Ellipse::calcArea()
{
    return width * height;
}
