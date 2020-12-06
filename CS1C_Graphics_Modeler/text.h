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

     void move(const int x, const int y) override;

     double calcPerimeter() override {return (l * 2) + (w * 2);}
     double calcArea() override {return l * w;}

     //functions for text
     void set_text(QString text, Qt::GlobalColor color, Qt::AlignmentFlag alignment, int pointSize,
                   QString fontFamily, QFont::Style style, QFont::Weight weight,
                   QString textStringName, QString textColorName, QString textAlignmentName, QString textFontFamilyNAme,
                   QString textFontStyleName, QString textFontWeightName);
     void set_alignment(Qt::AlignmentFlag alignment);
     void set_text_color(Qt::GlobalColor color);
     virtual QString getShapeString()override;

     QString get_textString()override;
     QString get_textColor()override;
     QString get_textAllignment()override;
     int     get_textPointSize()override;
     QString get_textFont()override;
     QString get_textFontStyle()override;
     QString get_textFontWeight()override;

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

     QString textStringName;
     QString textColorName;
     QString textAlignmentName;
     QString textFontFamilyName;
     QString textFontStyleName;
     QString textFontWeightName;

};

#endif // TEXT_H
