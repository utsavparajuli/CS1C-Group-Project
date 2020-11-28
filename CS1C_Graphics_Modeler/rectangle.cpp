#include "rectangle.h"

rectangle::~rectangle(){}

void rectangle::setPoints(int x, int y, int length, int width)
{
    this->x = x;
    this->y = y;
    this->length = length;
    this->width = width;
}

void rectangle::move(const int x, const int y)
{
    this->x = x;
    this->y = y;
}

void rectangle::draw(QPaintDevice *device)
{
    QPainter &painter = get_painter();
    painter.begin(device);

    QString IdString = construct_ID_String(shapeName, getID());
    get_painter().drawText(x, y - 10, IdString);

    get_painter().setPen(get_pen());
    get_painter().setBrush(get_brush());

    // draw the id number label for the ellipse
    //drawID();

    get_painter().drawRect(x, y, length, width);
    painter.end();
}
