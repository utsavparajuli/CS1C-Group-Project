#ifndef SHAPE_H
#define SHAPE_H

#include <QPen>
#include <QPainter>
#include <QLabel>
#include <QFont>
#include <QString>

using namespace std;
enum class ShapeType { NoShape, Line, Polyline, Polygon, Rectangle, Ellipse, Text};

class shape
{

public:
        shape(QPaintDevice* device = nullptr, int id = -1, ShapeType shape = ShapeType::NoShape);

        //destructor
        virtual ~shape() { };

        //deleted copy constructor and assignment
        shape(const shape&) = delete;
        shape& operator=(const shape&) = delete;

        //functions that will get the type of shape, the pen and brush
        ShapeType get_shape() const;
        const QPen& get_pen() const;
        const QBrush& get_brush() const;
        const QLabel get_text() const;

        //functions that will set the shape, pen and brush
        void set_ShapeId(int id);
        void set_Shape(ShapeType shape);
        void set_pen(Qt::GlobalColor color, int width, Qt::PenStyle penStyle, Qt::PenCapStyle penCapStyle, Qt::PenJoinStyle penJoinStyle);
        void set_pen(Qt::GlobalColor color);
        void set_brush(Qt::GlobalColor color, Qt::BrushStyle brushStyle);

        //default settings for brush and pen
        void default_style();
        void draw_rect(int width, int height);

        //equality operator overloading
        bool operator==(const shape& otherShape) const;

        //less than operator oveloading
        bool operator<(const shape& otherShape) const;

        //virtual methods
        virtual void draw(const int x_cord, const int y_cord) = 0;
        virtual void move(const int x_cord, const int y_cord) = 0;
        virtual double calcPerimeter() = 0;
        virtual double calcArea() = 0;

protected:
        QPainter& get_qpainter();

private:
        QPainter  qpainter;
        int       shapeId;
        QPen      pen;
        QBrush    brush;
        ShapeType shapeType;
        QFont     font;
        QLabel    text;
};
#endif // SHAPE_H
