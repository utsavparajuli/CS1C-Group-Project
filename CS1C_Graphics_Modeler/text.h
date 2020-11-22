#ifndef TEXT_H
#define TEXT_H
#include "shape.h"

class text : public shape
{
public:
     text(int id = -1) :shape{id, ShapeType::Text}{};
     virtual ~text() override {}

     void set_rect(int x, int y, int l, int w);
     void setPoints(int x, int y, int l, int w);
     void draw(QPaintDevice *device)override;

     void move(const int x_cord = 0, const int y_cord = 0) override;

     double calcPerimeter() override; //need to write implementation
     double calcArea() override;

     //functions for text
     void set_text(QString text, Qt::GlobalColor color, Qt::AlignmentFlag alignment, int pointSize, QString fontFamily, QFont::Style style, QFont::Weight weight);
     void set_alignment(Qt::AlignmentFlag alignment);
     void set_text_color(Qt::GlobalColor color);

private:
     int x;
     int y;
     int w;
     int l;
     QRect             rect;
     QString           textStr;
     Qt::GlobalColor   color;
     Qt::AlignmentFlag alignment;
     int               pointSize;
     QString           family;
     QFont::Style      fontStyle;
     QFont::Weight     weight;
};

#endif // TEXT_H
