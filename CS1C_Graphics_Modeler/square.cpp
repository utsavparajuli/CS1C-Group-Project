#include "square.h"

square::~square(){}

void square::setPoints(int x, int y, int length)
{
    this->x = x;
    this->y = y;
    this->length = length;
}

void square::move(const int x, const int y)
{
    this->x = x;
    this->y = y;
}

void square::draw(QPaintDevice *device)
{
//    QPainter &painter = get_painter();
//    painter.begin(device);
//    // set the pen and brush
//    get_painter().setPen(get_pen());
//    get_painter().setBrush(get_brush());
//    // draw the id number label for the ellipse
//    //drawID();
//    // draw the ellipse
//    get_painter().drawEllipse(x, y, width, height);
//    painter.end();

    QPainter &painter = get_painter();
    painter.begin(device);
    get_painter().setPen(get_pen());
    get_painter().setBrush(get_brush());

    // draw the id number label for the ellipse
    //drawID();

    get_painter().drawRect(x, y, length, length);
    painter.end();
}
