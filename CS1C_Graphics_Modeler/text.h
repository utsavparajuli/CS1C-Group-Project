#ifndef TEXT_H
#define TEXT_H
#include "shape.h"

class text : public shape
{
public:
    text(QPaintDevice* device = nullptr, int id = -1);
    ~text() override {}


     void set_rect(const QRect& rect);

     void draw(const int x_cord = 0, const int y_cord = 0) override;

     //functions for text
     void set_text(QString text, Qt::GlobalColor color, Qt::AlignmentFlag alignment, int pointSize, QString fontFamily, QFont::Style style, QFont::Weight weight);
     void set_alignment(Qt::AlignmentFlag alignment);
     void set_text_color(Qt::GlobalColor color);

private:
     QRect rect;
     QString textStr {"Class Project 2 - 2D Graphics Modeler"};
     Qt::GlobalColor color {Qt::blue};
     Qt::AlignmentFlag alignment {Qt::AlignCenter};
     int pointSize {10};
     QString family {"Comic Sans MS"};
     QFont::Style fontStyle {QFont::StyleNormal};
     QFont::Weight weight {QFont::Normal};
};

#endif // TEXT_H
