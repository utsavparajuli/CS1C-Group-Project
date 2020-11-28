#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

class square: public shape
{
public:
    square(int id = -1) : shape{id, ShapeType::Square}{};
    virtual ~square() override;
    void setPoints(int x, int y, int length);
    void move(const int x, const int y) override;
    void draw(QPaintDevice *devive) override;
    double calcPerimeter() {return length * 4;}
    double calcArea() {return length * length;}
    virtual QString getShapeString()override{return QString("\ntest\n");};

private:
    QString shapeName = "Square";
    int x;
    int y;
    int length;
};

#endif // SQUARE_H
