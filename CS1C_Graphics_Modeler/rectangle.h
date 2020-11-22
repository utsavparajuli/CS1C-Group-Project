#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"

class rectangle : public shape
{
public:
    rectangle(int id = -1) : shape{id, ShapeType::Rectangle}{};
    virtual ~rectangle() override;
    void setPoints(int x, int y, int length, int width);
    void move(const int x, const int y) override;
    void draw(QPaintDevice *devive) override;
    double calcPerimeter() {return (length * 2) + (width * 2);}
    double calcArea() {return length * width;}

private:
    int x;
    int y;
    int length;
    int width;
};

#endif // RECTANGLE_H
