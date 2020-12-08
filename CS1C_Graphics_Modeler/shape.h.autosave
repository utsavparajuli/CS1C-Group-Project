#ifndef SHAPE_H
#define SHAPE_H

#include <QPen>
#include <QPainter>
#include <QLabel>
#include <QFont>
#include <QString>
#include <QtMath>

/*! \file shape.h
 *  \brief A file outlining the shape class methods.
 */

using namespace std;

/*!
 * \brief The ShapeType emum class holds enumeration values for all available shapes that can be created and rendered in the program.
 */

enum class ShapeType
{
    NoShape,   /*!< No shape is selected.    */
    Line,      /*!< Shape is a 2D line.      */
    Polyline,  /*!< Shape is a 2D polyline.  */
    Polygon,   /*!< Shape is a 2D polygon.   */
    Rectangle, /*!< Shape is a 2D rectangle. */
    Ellipse,   /*!< Shape is a 2D ellipse.   */
    Square,    /*!< Shape is a 2D square.    */
    Circle,    /*!< Shape is a 2D circle.    */
    Text       /*!< Shape is a 2D text type. */
};

/*!
 * \brief The shape class is an abstract base class for all shapes and defines virtual functions to create, modify, and display shapes as well as retrieve member data.
 *
 * The shape class is an abstract base class for all shapes in the program. It holds numerous virtual functions to be overridden as well as defined functions to
 * return member data or to modify certain universal data members for all shapes.
 */

class shape
{

public:

    /* constructor */
    /*!
     * \brief Constructor creates a shape object with ShapeType NoShape and assigns an id from passed integer argument. Constructed shape defines only a brush and pen.
     * \param id is an integer argument to be assigned to the shape object's shapeId member, defaulting to -1.
     * \param shape is a ShapeType enumeration member which is assigned to the shape's shapeType member. Defaults to NoShape.
     */

    shape(int id = -1, ShapeType shape = ShapeType::NoShape);

    /* destructor */
    /*!
     * \brief Virtual destructor will automatically destroy the shape object when appropriate. Overridden in derived classes.
     */

        virtual ~shape() { };

    /* copy constructor */
    /*!
     * \brief Copy constructor is explicitly disallowed for the shape base class. A copy constructor will not be generated.
     * \param a constant shape object passed by reference
     */

        shape(const shape&) = delete;

        /* overloaded assignment operator */
        /*!
         * \brief Overloaded assignment operator is explicitly disallowed for the shape base class. Overloaded assignment will not be generated.
         * \param a constant shape object passed by reference
         */

        shape& operator=(const shape&) = delete;

        /* get_shape */
        /*!
         * \brief Function returns the shape type of this object. Function is constant.
         * \return ShapeType enumeration member containing the current object's shapeType.
         */

        ShapeType get_shape() const;

        /* get_pen */
        /*!
         * \brief Function returns the constant pen of this object. Function is constant.
         * \return a constant reference to a QPen object which holds the pen of this object.
         */

        const QPen& get_pen() const;

        /* get_brush */
        /*!
         * \brief Function returns the constant brush of this object. Function is constant.
         * \return a constant reference to a QBrush object which holds the brush of this object.
         */

        const QBrush& get_brush() const;

        /* get_text */
        /*!
         * \brief Function returns the constant text of this object. Function is constant.
         * \return a constant reference to a QLabel object which holds the text of this object.
         */

        const QLabel get_text() const;

        /* get_painter */
        /*!
         * \brief Function returns the QPainter of this object.
         * \return a constant reference to a QPainter object which holds the painter of this object.
         */

        QPainter& get_painter(){return painter;}

        /* get_penColorString */
        /*!
         * \brief Function returns a string holding this object's pen color.
         * \return a QString object which holds the penColorName member of this object.
         */

        QString get_penColorString(){return penColorName;}

        /* get_penStyleString */
        /*!
         * \brief Function returns a string holding this object's pen style.
         * \return a QString object which holds the penStyleName member of this object.
         */

        QString get_penStyleString(){return penStyleName;}

        /* get_penCapStyleString */
        /*!
         * \brief Function returns a string holding this object's pen cap style.
         * \return a QString object which holds the penCapStyleName member of this object.
         */

        QString get_penCapStyleString(){return penCapStyleName;}

        /* get_penJoinStyleString */
        /*!
         * \brief Function returns a string holding this object's pen join style.
         * \return a QString object which holds the penJoinStyleName member of this object.
         */

        QString get_penJoinStyleString(){return penJoinStyleName;}

        /* get_brushColorString */
        /*!
         * \brief Function returns a string holding this object's brush color.
         * \return a QString object which holds the brushColorName member of this object.
         */

        QString get_brushColorString(){return brushColorName;}

        /* get_brushStyleString */
        /*!
         * \brief Function returns a string holding this object's brush style.
         * \return a QString object which holds the brushStyleName member of this object.
         */

        QString get_brushStyleString(){return brushStyleName;}

        /* get_shapeTypeString */
        /*!
         * \brief Function returns a string holding this object's shape type.
         * \return a QString object which holds the shapeTypeName member of this object.
         */

        QString get_shapeTypeString();

        /* set_ShapeId */
        /*!
         * \brief Function accepts an integer argument and assigns it to this shape object's shapeId member variable.
         * \param id is an integer which holds the id number to assign to this shape object.
         */

        void set_ShapeId(int id);

        /* set_Shape */
        /*!
         * \brief Function accepts a ShapeType argument and assigns it to this shape object's shapeType member variable.
         * \param shape is a ShapeType enumeration member which holds the type of shape that belongs to this shape object.
         */

        void set_Shape(ShapeType shape);

        /* set_pen */
        /*!
         * \brief Overloaded function accepts several arguments to assign to this shape object's pen attributes.
         * \param color is a GlobalColor enumeration member, provided by Qt, which holds the color to be assigned to this pen.
         * \param width is an integer which holds the pen width to be assigned to this pen.
         * \param penStyle is a PenStyle enumeration member, provided by Qt, which holds the pen style to be assigned to this pen.
         * \param penCapStyle is a PenCapStyle enumeration member, provided by Qt, which holds the pen cap style to be assigned to this pen.
         * \param penJoinStyle is a PenJoinStyle enumeration member, provided by Qt, which holds the pen join style to be assigned to this pen.
         * \param newPenColorName is a QString object which holds the name of the new pen color in string text.
         * \param newPenStyleName is a QString object which holds the name of the new pen style in string text.
         * \param newPenCapStyleName is a QString object which holds the name of the new pen cap style in string text.
         * \param newPenJoinStyleName is a QString object which holds the name of the new pen join style in string text.
         */

        void set_pen(Qt::GlobalColor color, int width, Qt::PenStyle penStyle, Qt::PenCapStyle penCapStyle, Qt::PenJoinStyle penJoinStyle,
                     QString newPenColorName,  QString newPenStyleName, QString newPenCapStyleName, QString newPenJoinStyleName);

        /* set_pen */
        /*!
         * \brief Overloaded function accepts arguments to change the color of the shape object's pen.
         * \param color is a GlobalColor enumeration member, provided by Qt, which holds the color to be assigned to this pen.
         * \param newPenColorName is a QString object which holds the name of the new pen color in string text.
         */

        void set_pen(Qt::GlobalColor color, QString newPenColorName);

        /* set_brush */
        /*!
         * \brief Function accepts several arguments to assign to this shape object's brush attributes.
         * \param color is a GlobalColor enumeration member, provided by Qt, which holds the color to be assigned to this brush.
         * \param brushStyle is a BrushStyle enumeration member, provided by Qt, which holds the brush style to be assigned to this brush.
         * \param newBrushColorName is a QString object which holds the name of the new brush color in string text.
         * \param newBrushStyleName is a QString object which holds the name of the new brush style in string text.
         */

        void set_brush(Qt::GlobalColor color, Qt::BrushStyle brushStyle, QString newBrushColorName, QString newBrushStyleName);


        /* default_style */
        /*!
         * \brief Function sets this shape object's pen and brush to a default value of SolidLine and NoBrush, respectively.
         */

        void default_style();

        /* construct_ID_String */
        /*!
         * \brief Function accepts a name and id for a shape and returns a QString holding an ID label string.
         * \param shapeName is a QString object holding the name of this shape object.
         * \param shapeID is an integer holding the id of this shape object.
         * \return a QString object which holds the name and ID of this shape object.
         */

        QString construct_ID_String(QString shapeName, int shapeID);

        /* overloaded equality operator */
        /*!
         * \brief Overloaded equality operator compares the calling shape's id with another shape's id to check for equality.
         * \param otherShape is a constant reference to a shape object whose id is getting compared.
         * \return bool returns true if the shape ids match, false otherwise.
         */

        bool operator==(const shape& otherShape) const {return shapeId == otherShape.shapeId;}

        /* overloaded less than operator */
        /*!
         * \brief Overloaded less than operator compares the calling shape's id with another shape's id to check which is lower.
         * \param otherShape is a constant reference to a shape object whose id is getting compared.
         * \return bool returns true if the calling shape has an id less than otherShape, false otherwise.
         */

        bool operator<(const shape& otherShape) const {return shapeId < otherShape.shapeId;}

        //virtual methods

        /* draw */
        /*!
         * \brief Pure virtual function draw has no definition and is redefined in derived classes.
         * \param device is a QPaintDevice pointer.
         */

        virtual void draw(QPaintDevice *device) = 0;

        /* move */
        /*!
         * \brief Pure virtual function move has no definition and is redefined in derived classes.
         * \param x_cord is a constant integer.
         * \param y_cord is a constant integer.
         */

        virtual void move(const int x_cord, const int y_cord) = 0;

        /* calcPerimeter */
        /*!
         * \brief Pure virtual function calcPerimeter has no definition and is redefined in derived classes.
         * \return A double value.
         */

        virtual double calcPerimeter() = 0;

        /* calcArea */
        /*!
         * \brief Pure virtual function calcPerimeter has no definition and is redefined in derived classes.
         * \return A double value.
         */

        virtual double calcArea() = 0;

        /* getShapeString */
        /*!
         * \brief Pure virtual function getShapeString has no definition and is redefined in derived classes.
         * \return A QString object.
         */

        virtual QString getShapeString() = 0;

        /* get_textString */
        /*!
         * \brief Virtual function returns an empty string.
         *
         * Redefined in text derived class to return a string holding object text.
         * \return A QString object with empty contents.
         */

        virtual QString get_textString(){return "";}

        /* get_textColor */
        /*!
         * \brief Virtual function returns an empty string.
         *
         * Redefined in text derived class to return a string holding a text color.
         * \return A QString object with empty contents.
         */

        virtual QString get_textColor(){return "";}

        /* get_textAllignment */
        /*!
         * \brief Virtual function returns an empty string.
         *
         * Redefined in text derived class to return a string holding a text alignment.
         * \return A QString object with empty contents.
         */

        virtual QString get_textAllignment(){return "";}

        /* get_textPointSize */
        /*!
         * \brief Virtual function returns 0.
         *
         * Redefined in text derived class to return a text point size.
         * \return An integer 0.
         */

        virtual int get_textPointSize(){return 0;}

        /* get_textFont */
        /*!
         * \brief Virtual function returns an empty string.
         *
         * Redefined in text derived class to return a text font name.
         * \return A QString object with empty contents.
         */

        virtual QString get_textFont(){return "";}

        /* get_textFontStyle */
        /*!
         * \brief Virtual function returns an empty string.
         *
         * Redefined in text derived class to return a text font style name.
         * \return A QString object with empty contents.
         */

        virtual QString get_textFontStyle(){return "";}

        /* get_textFontWeight */
        /*!
         * \brief Virtual function returns an empty string.
         *
         * Redefined in text derived class to return a text font weight.
         * \return A QString object with empty contents.
         */

        virtual QString get_textFontWeight(){return "";}

        /* get_cords */
        /*!
         * \brief Virtual function returns a QPoint with coordinates (0,0). Redefined in derived classes.
         * \return A QPoint object with coordinates (0,0).
         */

        virtual QPoint get_cords(){return QPoint(0,0);}

        /* set_text */
        /*!
         * \brief Virtual function returns without making any changes. Redefined in the text derived class.
         * \param text is a QString object.
         * \param color is a GlobalColor enumeration member provided by Qt.
         * \param alignment is an AlightmentFlag enumeration member.
         * \param pointSize is an integer.
         * \param fontFamily is a QString object.
         * \param style is a Style enumeration member provided by QFont.
         * \param weight is a Weight enumeration member provided by QFont.
         * \param textStringName is a QString object.
         * \param textColorName is a QString object.
         * \param textAlignmentName is a QString object.
         * \param textFontFamilyName is a QString object.
         * \param textFontStyleName is a QString object.
         * \param textFontWeightName is a QString object.
         */

        virtual void set_text(QString text, Qt::GlobalColor color, Qt::AlignmentFlag alignment, int pointSize,
                      QString fontFamily, QFont::Style style, QFont::Weight weight,
                      QString textStringName, QString textColorName, QString textAlignmentName, QString textFontFamilyNAme,
                              QString textFontStyleName, QString textFontWeightName){return;}

        // TESTNIG
        int getID() {return shapeId;}

protected:

        /*!
         * \brief penColorName is a protected QString variable holding the pen color name of this shape.
         */

        QString   penColorName;

        /*!
         * \brief penStyleName is a protected QString variable holding the pen style name of this shape.
         */

        QString   penStyleName;

        /*!
         * \brief penCapStyleName is a protected QString variable holding the pen cap style name of this shape.
         */

        QString   penCapStyleName;

        /*!
          * \brief penJoinStyleName is a protected QString variable holding the pen join style name of this shape.
          */

        QString   penJoinStyleName;

        /*!
         * \brief brushColorName is a protected QString variable holding the brush color name of this shape.
         */

        QString   brushColorName;

        /*!
         * \brief brushStyleName is a protected QString variable holding the brush style name of this shape.
         */

        QString   brushStyleName;

private:

        /*!
         * \brief brushStyleName is a private integer variable holding the id of this shape.
         */

        int       shapeId;

        /*!
         * \brief pen is a private QPen variable holding the pen of this shape.
         */

        QPen      pen;

        /*!
         * \brief brush is a private QBrush variable holding the brush of this shape.
         */

        QBrush    brush;

        /*!
         * \brief shapeType is a private ShapeType variable holding the shape type enumeration of this shape.
         */

        ShapeType shapeType;

        /*!
         * \brief painter is a private QPainter variable holding the painter object of this shape.
         */

        QPainter  painter;
};
#endif // SHAPE_H
