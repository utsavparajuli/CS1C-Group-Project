#ifndef SHAPE_H
#define SHAPE_H

#include <QPen>
#include <QPainter>
#include <QLabel>
#include <QFont>

using namespace std;

class shape
{

public:
        enum class ShapeType { NoShape, Line, Polyline, Polygon, Rectangle, Ellipse, Text};

        //constructor
        shape(QPaintDevice* device = nullptr, int shapeId = -1, ShapeType = ShapeType::NoShape);

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
        void set_pen(Qt::GlobalColor, int width, Qt::PenStyle, Qt::PenCapStyle, Qt::PenJoinStyle);
        void set_pen(Qt::GlobalColor);
        void set_brush(Qt::GlobalColor, Qt::BrushStyle);

        //functions for text
        void set_text(string text, Qt::GlobalColor, Qt::AlignmentFlag, int pointSize, string fontFamily, QFont::Style, QFont::Weight);
        void set_text_color(Qt::GlobalColor);


        //default settings for brush and pen
        void default_style();

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
        QPainter get_qpainter();

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
