#include "text.h"
#include <QDebug>

void text::set_rect(int x, int y, int l, int w)
{
    QRect newRect(x, y, l, w);

    rect = newRect;
}

void text::draw(QPaintDevice *device)
{
    QPainter &painter = get_painter();
    painter.begin(device);

    QString IdString = construct_ID_String(shapeName, getID());
    get_painter().drawText(x + 50, y + 10, IdString);

    QFont font{family, pointSize};

    font.setStyle(fontStyle);
    font.setWeight(weight);

    get_painter().setFont(font);
    get_painter().setPen(get_pen());

    get_painter().drawText(x, y, l, w, alignment, textStr);

    painter.end();
}

void text::set_text(QString text, Qt::GlobalColor color, Qt::AlignmentFlag alignment, int pointSize,
                    QString fontFamily, QFont::Style style, QFont::Weight weight,
                    QString textStringName, QString textColorName, QString textAlignmentName, QString textFontFamilyName,
                    QString textFontStyleName, QString textFontWeightName)
{
    textStr = text;
    this->color = color;
    this->alignment = alignment;
    this->pointSize = pointSize;
    this->family = fontFamily;
    this->fontStyle = style;
    this->weight = weight;

    this->textStringName     = textStringName;
    this->textColorName      = textColorName;
    this->textAlignmentName  = textAlignmentName;
    this->textFontFamilyName = textFontFamilyName;
    this->textFontStyleName  = textFontStyleName;
    this->textFontWeightName = textFontWeightName;
}

void text::setPoints(int x, int y, int l, int w)
{
    this->x = x;
    this->y = y;
    this->l = l;
    this->w = w;
}

void text::set_text_color(Qt::GlobalColor color)
{
    this->color = color;
}

void text::set_alignment(Qt::AlignmentFlag alignment)
{
    this->alignment = alignment;
}


void text::move(const int x, const int y)
{
    this->x = x;
    this->y = y;
}


//QString rectangle::getShapeString()
//{
//    QString outString = "\nShapeId: " + QString::number(getID());
//    outString += "\nShapeType: Rectangle";

//    outString += "\nShapeDimensions: " + QString::number(x) + ", " + QString::number(y) + ", "
//                 + QString::number(length) + ", " + QString::number(width);

//    outString += "\nPenColor: " + penColorName;
//    outString += "\nPenWidth: " + QString::number(get_pen().width());
//    outString += "\nPenStyle: " + penStyleName;
//    outString += "\nPenCapStyle: " + penCapStyleName;
//    outString += "\nPenJoinStyle: " + penJoinStyleName;
//    outString += "\nBrushColor: " + brushColorName;
//    outString += "\nBrushStyle: " + brushStyleName + "\n";

//    return outString;
//}

QString text::getShapeString()
{
    QString outString = "\nShapeId: " + QString::number(getID());
    outString += "\nShapeType: Text";

    outString += "\nShapeDimensions: " + QString::number(x) + ", " + QString::number(y) + ", "
                 + QString::number(l) + ", " + QString::number(w);

    outString += "\nTextString: " + textStringName;
    outString += "\nTextColor: " + textColorName;
    outString += "\nTextAlignment: " + textAlignmentName;
    outString += "\nTextPointSize: " + QString::number(pointSize);
    outString += "\nTextFontFamily: " + textFontFamilyName;
    outString += "\nTextFontStyle: " + textFontStyleName;
    outString += "\nTextFontWeight: " + textFontWeightName + "\n";

    return outString;
}

QString text::get_textString()
{
    return textStr;
}
QString text::get_textColor()
{
    return textColorName;
}

QString text::get_textAllignment()
{
    return textAlignmentName;
}

int text::get_textPointSize()
{
    return pointSize;
}

QString text::get_textFont()
{
    return textFontFamilyName;
}

QString text::get_textFontStyle()
{
    return textFontStyleName;
}

QString text::get_textFontWeight()
{
    return textFontWeightName;
}
