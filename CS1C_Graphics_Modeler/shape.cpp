#include "shape.h"


shape::shape(QPaintDevice* device, int id, ShapeType shape)
    :qpainter{device}, shapeId{id}, shapeType{shape}
{
    pen = Qt::SolidLine;
    brush = Qt::NoBrush;
}


ShapeType shape::get_shape() const
{
    return shapeType;
}


QPainter& shape::get_qpainter()
{
    return qpainter;
}

const QPen& shape::get_pen() const
{
    return pen;
}

const QBrush& shape::get_brush() const
{
    return brush;
}

void shape::set_ShapeId(int id)
{
    this->shapeId = id;
}

void shape::set_Shape(ShapeType shape)
{
    shapeType = shape;
}

void shape::set_brush(Qt::GlobalColor color, Qt::BrushStyle brushStyle)
{
    brush.setColor(color);
    brush.setStyle(brushStyle);
}

void shape::set_pen(Qt::GlobalColor color, int width, Qt::PenStyle penStyle, Qt::PenCapStyle penCapStyle, Qt::PenJoinStyle penJoinStyle)
{
    pen.setColor(color);
    pen.setWidth(width);
    pen.setStyle(penStyle);
    pen.setCapStyle(penCapStyle);
    pen.setJoinStyle(penJoinStyle);
}

void shape::set_pen(Qt::GlobalColor color)
{
    pen.setColor(color);
}

void shape::default_style()
{
    pen = Qt::SolidLine;
    brush = Qt::NoBrush;

    qpainter.setPen(pen);
    qpainter.setBrush(brush);
}

void shape::draw_rect(int width, int height)
{
    qpainter.drawRect(QRect(0, 0, width, height));
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

