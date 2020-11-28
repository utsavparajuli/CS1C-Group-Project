#ifndef POLYGON_H
#define POLYGON_H

#include "shape.h"

class polygon : public shape
{
public:
    polygon(int id = -1) : shape{id, ShapeType::Polygon}{};
    virtual ~polygon() override;
    void setPoints(QPoint*, int pointCount);
    void move(const int x, const int y) override;
    void draw(QPaintDevice *device) override;
    double calcPerimeter() override {return 0;} //need to write implementation
    double calcArea() override {return 0;} //need to write implementation
    virtual QString getShapeString()override{return QString("\ntest\n");};

private:
    QPoint *points;
    int pointCount;
};

#endif // POLYGON_H
