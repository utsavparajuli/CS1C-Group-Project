#ifndef LINE_H
#define LINE_H

#include "shape.h"

class line: public shape
{
public:
    line(QPaintDevice* device = NULL, int id = -1) : shape{device, id, ShapeType::Line}{};
    virtual ~line()override;
    void setPoints(const QPoint &begin, const QPoint &end);
    void move(const int x_cord, const int y_cord)override;
    void draw(QPaintDevice *device)override;
    double calcPerimeter() override; //need to write implementation
    double calcArea() override; //need to write implementation

private:
    QPoint begin;
    QPoint end;
};

#endif // LINE_H
