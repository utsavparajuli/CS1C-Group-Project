#ifndef LINE_H
#define LINE_H

#include "shape.h"

class line: public shape
{
public:
    line(int id = -1) : shape{id, ShapeType::Line}{};
    virtual ~line()override;
    void setPoints(const QPoint &begin, const QPoint &end);
    void move(const int x, const int y) override;
    void draw(QPaintDevice *device)override;
    double calcPerimeter() override;
    double calcArea() override;
    QPoint get_begin(){return begin;}
    QPoint get_end(){return end;}
    QString getShapeString()override;
    QPoint get_cords()override{return begin;}

    QPoint getIDLocation();

private:
    QString shapeName = "Line";
    QPoint begin;
    QPoint end;
};

#endif // LINE_H
