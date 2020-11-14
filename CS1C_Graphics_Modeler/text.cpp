#include "text.h"

text::text(QPaintDevice* device, int id)
    :shape(device, id, ShapeType::Text)
{

}

void text::set_rect(const QRect &rect)
{
    this->rect = rect;
}

void text::draw(const int x_cord, const int y_cord)
{
    get_qpainter().setPen(QPen(color));

    QFont font{family, pointSize};

    font.setStyle(fontStyle);
    font.setWeight(weight);

    get_qpainter().setFont(font);

    get_qpainter().save();
    get_qpainter().translate(x_cord, y_cord);

    get_qpainter().drawText(rect, alignment, textStr);

    get_qpainter().restore();
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

void text::set_text_color(Qt::GlobalColor color)
{
    this->color = color;
}

void text::set_alignment(Qt::AlignmentFlag alignment)
{
    this->alignment = alignment;
}
