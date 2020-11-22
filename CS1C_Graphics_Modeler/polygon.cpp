//polygon(int id = -1) : shape{id, ShapeType::Polygon}{};
//virtual ~polygon() override;
//void setPoints(QPoint*, int pointCount);
//void move(const int x, const int y) override;
//void draw(QPaintDevice *device) override;
//double calcPerimeter() override {return 0;} //need to write implementation
//double calcArea() override {return 0;} //need to write implementation

#include "polygon.h"

polygon::~polygon() {}

void polygon::setPoints(QPoint* newPoints, int count)
{
    points = newPoints;
    pointCount = count;
}

// NEED IMPLEMENTATION
void polygon::move(const int x, const int y)
{
    return;
}

void polygon::draw(QPaintDevice *device)
{
    QPainter &painter = get_painter();
    painter.begin(device);
    painter.setPen(get_pen());
    painter.setBrush(get_brush());

    painter.drawPolygon(points, pointCount);

    painter.end();
}
