#include "text.h"

void text::set_rect(int x, int y, int l, int w)
{
    QRect newRect(x, y, l, w);

    rect = newRect;
}

void text::draw(QPaintDevice *device)
{
    QPainter &painter = get_painter();
    painter.begin(device);
    //get_painter().setPen(QPen(color));

    QFont font{family, pointSize};

//    font.setStyle(fontStyle);
//    font.setWeight(weight);

//    get_painter().setFont(font);

    //get_painter().translate(1,1);

    get_painter().setFont(font);
    get_painter().setPen(get_pen());

    get_painter().drawText(x, y, l, w, alignment, textStr);

    painter.end();
}

void text::set_text(QString text, Qt::GlobalColor color, Qt::AlignmentFlag alignment, int pointSize, QString fontFamily, QFont::Style style, QFont::Weight weight)
{
    textStr = text;
    this->color = color;
    this->alignment = alignment;
    this->pointSize = pointSize;
    this->family = fontFamily;
    this->fontStyle = style;
    this->weight = weight;
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

double text::calcArea()
{
    //test
}

double text::calcPerimeter()
{
    //test
}

void text::move(const int x_cord, const int y_cord)
{
    //test
}
