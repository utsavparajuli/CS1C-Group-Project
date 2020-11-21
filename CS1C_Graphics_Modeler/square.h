#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

class square: public shape
{
public:
//    line(int id = -1) : shape{id, ShapeType::Line}{};
//    virtual ~line()override;
//    void setPoints(const QPoint &begin, const QPoint &end);
//    void move(const int x_cord, const int y_cord)override;
//    void draw(QPaintDevice *device)override;
//    double calcPerimeter() override; //need to write implementation
//    double calcArea() override; //need to write implementation
    square(int id = -1) : shape{id, ShapeType::Square}{};
    virtual ~square() override;
    void setPoints(int x, int y, int length);
    void move(const int x, const int y) override;
    void draw(QPaintDevice *devive) override;
    double calcPerimeter() {return length * 4;}
    double calcArea() {return length * length;}

private:
    int x;
    int y;
    int length;

};

#endif // SQUARE_H
