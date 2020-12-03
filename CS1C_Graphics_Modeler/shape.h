#ifndef SHAPE_H
#define SHAPE_H

#include <QPen>
#include <QPainter>
#include <QLabel>
#include <QFont>
#include <QString>
#include <QtMath>

using namespace std;
enum class ShapeType { NoShape, Line, Polyline, Polygon, Rectangle, Ellipse, Square, Circle, Text};

class shape
{

public:
    shape(int id = -1, ShapeType shape = ShapeType::NoShape);

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
        QPainter& get_painter(){return painter;}
        QString get_penColorString(){return penColorName;}
        QString get_penStyleString(){return penStyleName;}
        QString get_penCapStyleString(){return penCapStyleName;}
        QString get_penJoinStyleString(){return penJoinStyleName;}
        QString get_brushColorString(){return brushColorName;}
        QString get_brushStyleString(){return brushStyleName;}


        //functions that will set the shape, pen and brush
        void set_ShapeId(int id);
        void set_Shape(ShapeType shape);
        void set_pen(Qt::GlobalColor color, int width, Qt::PenStyle penStyle, Qt::PenCapStyle penCapStyle, Qt::PenJoinStyle penJoinStyle,
                     QString newPenColorName,  QString newPenStyleName, QString newPenCapStyleName, QString newPenJoinStyleName);
        void set_pen(Qt::GlobalColor color, QString newPenColorName);
        void set_brush(Qt::GlobalColor color, Qt::BrushStyle brushStyle, QString newBrushColorName, QString newBrushStyleName);


        //default settings for brush and pen
        void default_style();
        void draw_rect(int width, int height);

        QString construct_ID_String(QString shapeName, int shapeID);

        //equality operator overloading
        bool operator==(const shape& otherShape) const;

        //less than operator oveloading
        bool operator<(const shape& otherShape) const;

        //virtual methods
        virtual void draw(QPaintDevice *device) = 0;
        virtual void move(const int x_cord, const int y_cord) = 0;
        virtual double calcPerimeter() = 0;
        virtual double calcArea() = 0;
        virtual QString getShapeString() = 0;

        virtual QString get_textString(){return "";}
        virtual QString get_textColor(){return "";}
        virtual QString get_textAllignment(){return "";}
        virtual int get_textPointSize(){return 0;}
        virtual QString get_textFont(){return "";}
        virtual QString get_textFontStyle(){return "";}
        virtual QString get_textFontWeight(){return "";}
        virtual QPoint get_cords(){return QPoint(0,0);}

        // TESTNIG
        int getID() {return shapeId;}

protected:
        QString   penColorName;
        QString   penStyleName;
        QString   penCapStyleName;
        QString   penJoinStyleName;
        QString   brushColorName;
        QString   brushStyleName;

private:
        int       shapeId;
        QPen      pen;
        QBrush    brush;
        ShapeType shapeType;
        QPainter  painter;
};
#endif // SHAPE_H
