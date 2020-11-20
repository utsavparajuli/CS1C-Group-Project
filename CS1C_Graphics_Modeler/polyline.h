#ifndef POLYLINE_H
#define POLYLINE_H

#include "shape.h"

class polyline : public shape
{
public:
    polyline();
    polyline(int id = -1) : shape{id, ShapeType::Line}{};
    virtual ~polyline() override;
    void setPoints(QPoint*, int);
    void move(const int x_cord, const int y_cord)override;
    void draw(QPaintDevice *device)override;
    double calcPerimeter() override; //need to write implementation
    double calcArea() override; //need to write implementation

private:
    QPoint *points;
    int pointCount;
};

#endif // POLYLINE_H
