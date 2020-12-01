#include "square.h"

square::~square(){}

void square::setPoints(int x, int y, int length)
{
    this->x = x;
    this->y = y;
    this->length = length;
}

void square::move(const int x, const int y)
{
    this->x = x;
    this->y = y;
}

void square::draw(QPaintDevice *device)
{
    QPainter &painter = get_painter();
    painter.begin(device);

    QString IdString = construct_ID_String(shapeName, getID());
    get_painter().drawText(x, y - 10, IdString);

    get_painter().setPen(get_pen());
    get_painter().setBrush(get_brush());

    // draw the id number label for the ellipse
    //drawID();

    get_painter().drawRect(x, y, length, length);
    painter.end();
}

QString square::getShapeString()
{
    //Shape ID
    QString outputString = "\nShapeId: " + QString::number(getID());

    //ShapeType
    outputString += "\nShapeType: Square";

    //Shape Dimensions
    outputString += "\nShapeDimensions: " + QString::number(x) + ", " + QString::number(y) + ", " + QString::number(length);

    //Pen Color
    outputString += "\nPenColor: " + penColorName;

    //Pen Width
    outputString += "\nPenWidth: " + QString::number(get_pen().width());

    //Pen Style
    outputString += "\nPenStyle: " + penStyleName;

    //Pen Cap Style
    outputString += "\nPenCapStyle: " + penCapStyleName;

    //Pen Join Style
    outputString += "\nPenJoinStyle: " + penJoinStyleName;

    //Brush Color
    outputString += "\nBrushColor: " + brushColorName;

    //Brush Style
    outputString += "\nBrushStyle: " + brushStyleName + '\n';

    return outputString;
}
