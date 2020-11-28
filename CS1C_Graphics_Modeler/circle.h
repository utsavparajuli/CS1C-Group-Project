#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"
#include <QtMath>

class circle : public shape
{
public:
    circle(int id = -1) : shape{id, ShapeType::Circle}{};
    virtual ~circle() override;
    void setPoints(int x, int y, int radius);
    void move(const int x, const int y) override;
    void draw(QPaintDevice *devive) override;
    double calcPerimeter() override {return  2 * M_PI * radius;}
    double calcArea() override {return radius * radius * M_PI;}
    virtual QString getShapeString()override{return QString("\ntest\n");};

private:
    int x;
    int y;
    int radius;
};


#endif // CIRCLE_H
