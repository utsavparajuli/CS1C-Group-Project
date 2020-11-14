#include "shape.h"

//constructor
shape::shape(QPaintDevice* device, int id, ShapeType shape)
    :qpainter{device}, shapeId{id}, shapeType{shape}
{
    pen = Qt::SolidLine;
    brush = Qt::NoBrush;
}


//returns the shape
ShapeType shape::get_shape() const
{
    return shapeType;
}


//returns the qpainter
QPainter& shape::get_qpainter()
{
    return qpainter;
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

    qpainter.setPen(pen);
    qpainter.setBrush(brush);
}

//drawing rectagnle
void shape::draw_rect(int width, int height)
{
    qpainter.drawRect(QRect(0, 0, width, height));
}
