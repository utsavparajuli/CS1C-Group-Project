#include "shape.h"

//constructor
shape::shape(int id, ShapeType shape)
    :shapeId{id}, shapeType{shape}
{
    pen = Qt::SolidLine;
    brush = Qt::NoBrush;
}


//returns the shape
ShapeType shape::get_shape() const
{
    return shapeType;
}

//returns the pen
const QPen& shape::get_pen() const
{
    return pen;
}


//returns the brush
const QBrush& shape::get_brush() const
{
    return brush;
}

//sets the id of the shape
void shape::set_ShapeId(int id)
{
    this->shapeId = id;
}

//sets the type of shape
void shape::set_Shape(ShapeType shape)
{
    shapeType = shape;
}

//sets the brush
void shape::set_brush(Qt::GlobalColor color, Qt::BrushStyle brushStyle)
{
    brush.setColor(color);
    brush.setStyle(brushStyle);
}

//sets the pen
void shape::set_pen(Qt::GlobalColor color, int width, Qt::PenStyle penStyle, Qt::PenCapStyle penCapStyle, Qt::PenJoinStyle penJoinStyle)
{
    pen.setColor(color);
    pen.setWidth(width);
    pen.setStyle(penStyle);
    pen.setCapStyle(penCapStyle);
    pen.setJoinStyle(penJoinStyle);
}

//sets the pens color
void shape::set_pen(Qt::GlobalColor color)
{
    pen.setColor(color);
}

//default style for shape
void shape::default_style()
{
    pen = Qt::SolidLine;
    brush = Qt::NoBrush;
}

//void shape::set_text(string text, Qt::GlobalColor color, Qt::AlignmentFlag alignment, int pointSize, string fontFamily, QFont::Style style, QFont::Weight weight)
//{
//    font.setStyle(style);
//    text.


//}

//void shape::set_text_color(Qt::GlobalColor color)
//{
//    //text.setStyleSheet
//}

