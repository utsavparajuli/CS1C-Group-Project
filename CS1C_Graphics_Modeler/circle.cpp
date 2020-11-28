#include "circle.h"

//circle(int id = -1) : shape{id, ShapeType::Circle}{};
//virtual ~circle() override;
//void setPoints(int x, int y, int radius);
//void move(const int x, const int y) override;
//void draw(QPaintDevice *devive) override;
//double calcPerimeter() override {return  2 * M_PI * radius;}
//double calcArea() override {return radius * radius * M_PI;}

circle::~circle(){}

void circle::setPoints(int x, int y, int radius)
{
    this->x = x;
    this->y = y;
    this->radius = radius;
}

void circle::move(const int x, const int y)
{
    this->x = x;
    this->y = y;
}

void circle::draw(QPaintDevice *device)
{
    QPainter &painter = get_painter();
    painter.begin(device);

    // draw the id number label for the circle
    QString IdString = construct_ID_String(shapeName, getID());
    get_painter().drawText(x + (radius/2 - 30), y - 10, IdString);

    // set the pen and brush
    get_painter().setPen(get_pen());
    get_painter().setBrush(get_brush());
    // draw the circle
    get_painter().drawEllipse(x, y, radius, radius);
    painter.end();
}
