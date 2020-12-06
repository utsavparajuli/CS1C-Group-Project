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
    double calcPerimeter() override {return length * 4;}
    double calcArea() override {return length * length;}
    virtual QString getShapeString()override;
    QPoint get_cords() override {return QPoint(this->x, this->y);}

private:
    QString shapeName = "Square";
    int x;
    int y;
    int length;
};

#endif // SQUARE_H
