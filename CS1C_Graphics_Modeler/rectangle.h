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
    double calcPerimeter() override {return (length * 2) + (width * 2);}
    double calcArea() override {return length * width;}
    virtual QString getShapeString() override;
    QPoint get_cords() override {return QPoint(this->x, this->y);}

private:
    QString shapeName = "Rectangle";
    int x;
    int y;
    int length;
    int width;
};

#endif // RECTANGLE_H
