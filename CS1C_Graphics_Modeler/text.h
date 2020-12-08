#ifndef TEXT_H
#define TEXT_H
#include "shape.h"

/*! \file text.h
 *  \brief A file outlining the text class methods.
 */

/*!
 * \brief The text class inherits from shape and is used to create, modify, and display a text label.
 *
 * The text class is derived from the shape class and overrides virtual function definitions declared in the shape class. The text
 * class offers member functions to display a text label on the canvas as well as change its location and get details about the object,
 * such as its area, perimeter, or member variables. A text object contains an x and y coordinate, a length, and a width. A text object
 * also holds a text string and its color, alignment, point size, font family, font type, and font weight.
 */

class text : public shape
{
public:

    /* constructor */
    /*!
     * \brief Constructor creates a shape object with ShapeType Text and assigns an id from passed integer argument.
     * \param id is an integer argument to be assigned to the text object's shapeId member.
     */

     text(int id = -1) :shape{id, ShapeType::Text}{};

     /* destructor */
     /*!
      * \brief Virtual destructor will automatically destroy the text object when appropriate. Overrides the shape class destructor.
      */

     virtual ~text() override {}

     /* set_rect */
     /*!
      * \brief Function takes four integer parameters and uses them to construct and assign the object's rect member variable.
      * \param x is an integer used to set the QRect's x coordinate.
      * \param y is an integer used to set the QRect's y coordinate.
      * \param l is an integer used to set the QRect's length.
      * \param w is an integer used to set the QRect's width.
      */

     void set_rect(int x, int y, int l, int w);

     /* setPoints */
     /*!
      * \brief Function takes four integer parameters and uses them to assign the text's x, y, width, and length member variables.
      * \param x is an integer used to set the text's x coordinate.
      * \param y is an integer used to set the text's y coordinate.
      * \param l is an integer used to set the text's length.
      * \param w is an integer used to set the text's width.
      */

     void setPoints(int x, int y, int l, int w);

     /* draw */
     /*!
      * \brief Function takes a QPaintDevice pointer as an argument and draws a text string with the text object's settings. Overrides the shape class method.
      * \param device is a QPaintDevice pointer holding the canvas to be drawn onto.
      */

     void draw(QPaintDevice *device)override;

     /* move */
     /*!
      * \brief Function takes two constant integer arguments and uses them to update the text's 'x' and 'y' coordinate values. Overrides the shape class method.
      * \param x_cord is an integer holding the amount of pixels to adjust the text's 'x' coordinate by. Has a default value of 0.
      * \param y_cord is an integer holding the amount of pixels to adjust the text's 'y' coordinate by. Has a default value of 0.
      */

     void move(const int x, const int y) override;

     /* calcPerimeter */
     /*!
      * \brief Function calculates and returns the perimeter of the text object. Overrides the shape class method.
      * \return A double value is returned holding the text object's perimeter.
      */

     double calcPerimeter() override {return (l * 2) + (w * 2);}

     /* calcArea */
     /*!
      * \brief Function calculates and returns the area of the text object. Overrides the shape class method.
      * \return A double value is returned holding the text object's area.
      */

     double calcArea() override {return l * w;}

     //functions for text

     /* set_text */
     /*!
      * \brief Function takes several arguments related to text customization and assigns them to the text object's member variables. Overrides the shape class method.
      * \param text is a QString object holding the string of text that the object contains and displays.
      * \param color is a GlobalColor enumeration member provided by Qt containing the desired color for the text.
      * \param alignment is an AlightmentFlag enumeration member provided by Qt containing the desired alignment option for the text.
      * \param pointSize is an integer to use as the text's point size.
      * \param fontFamily is a QString object holding the desired font family for the text to use.
      * \param style is a Style enumeration member provided by QFont containing the desired font style to be used for the text.
      * \param weight is a Weight enumeration member provided by QFont containing the desired font weight to be used for the text.
      * \param textStringName is a QString object containing the string of text that the object contains.
      * \param textColorName is a QString object containing the color being used for the text.
      * \param textAlignmentName is a QString object containing the alignment being used for the text.
      * \param textFontFamilyName is a QString object containing the font family being used by the text.
      * \param textFontStyleName is a QString object containing the font style being used by the text.
      * \param textFontWeightName is a QString object containing the font weight being used by the text.
      */

     void set_text(QString text, Qt::GlobalColor color, Qt::AlignmentFlag alignment, int pointSize,
                   QString fontFamily, QFont::Style style, QFont::Weight weight,
                   QString textStringName, QString textColorName, QString textAlignmentName, QString textFontFamilyNAme,
                   QString textFontStyleName, QString textFontWeightName) override;

     /* set_alignment */
     /*!
      * \brief Function takes an AlignmentFlag enum as an argument and assigns it to the text object's member variable.
      * \param alignment is an AlignmentFlag enumeration member provided by Qt containing the alignment to assign to the text object.
      */

     void set_alignment(Qt::AlignmentFlag alignment);

     /* set_text_color */
     /*!
      * \brief Function takes a GlobalColor enum as an argument and assigns it to the text object's member variable.
      * \param color is an GlobalColor enumeration member provided by Qt containing the color to assign to the text object.
      */

     void set_text_color(Qt::GlobalColor color);

     /* getShapeString */
     /*!
      * \brief Virtual function returns a string documenting all of the object's member variables and their values. Overrides the shape class method.
      * \return A QString object holding a string list of all of the object's member variables and their values.
      */

     virtual QString getShapeString()override;

     /* get_textString */
     /*!
      * \brief Virtual function returns a QString holding this text object's textStr member. Overrides the shape class method.
      * \return A QString object matching this text object's textStr member.
      */

     QString get_textString()override;

     /* get_textColor */
     /*!
      * \brief Virtual function returns a QString holding this text object's color member variable. Overrides the shape class method.
      * \return A QString object matching this text object's color member variable.
      */

     QString get_textColor()override;

     /* get_textAllignment */
     /*!
      * \brief Virtual function returns a QString holding this text object's alignment member variable. Overrides the shape class method.
      * \return A QString object matching this text object's alignment member variable.
      */

     QString get_textAllignment()override;

     /* get_textPointSize */
     /*!
      * \brief Virtual function returns an integer holding this text object's pointSize member variable. Overrides the shape class method.
      * \return An integer matching this text object's pointSize member variable.
      */

     int     get_textPointSize()override;

     /* get_textFont */
     /*!
      * \brief Virtual function returns a QString holding this text object's family member variable. Overrides the shape class method.
      * \return A QString object matching this text object's family member variable.
      */

     QString get_textFont()override;

     /* get_textFontStyle */
     /*!
      * \brief Virtual function returns a QString holding this text object's fontStyle member variable. Overrides the shape class method.
      * \return A QString object matching this text object's fontStyle member variable.
      */

     QString get_textFontStyle()override;

     /* get_textFontWeight */
     /*!
      * \brief Virtual function returns a QString holding this text object's weight member variable. Overrides the shape class method.
      * \return A QString object matching this text object's weight member variable.
      */

     QString get_textFontWeight()override;

     /* get_cords */
     /*!
      * \brief This function returns a QPoint object which holds the text's x and y coordinates. Overrides the shape class method.
      * \return A QPoint object constructed using the text's x and y coordinates.
      */

     QPoint get_cords() override {return QPoint(this->x, this->y);}

private:

     /*!
      * \brief x is a private integer variable holding the x coordinate of the text object.
      */

     int x;

     /*!
      * \brief y is a private integer variable holding the x coordinate of the text object.
      */

     int y;

     /*!
      * \brief w is a private integer variable holding the width of the text object.
      */

     int w;

     /*!
      * \brief l is a private integer variable holding the length of the text object.
      */

     int l;

     /*!
      * \brief rect is a private QRect variable holding specifications for a rectangle of the text object.
      */

     QRect             rect;

     /*!
      * \brief textStr is a private QString variable holding the visible text of the text object.
      *
      * Used in displaying the text itself on the canvas.
      */

     QString           textStr;

     /*!
      * \brief color is a private GlobalColor variable holding the text color of the text object.
      *
      * Used in displaying the text on the canvas as a specific color.
      */

     Qt::GlobalColor   color;

     /*!
      * \brief alignment is a private AlignmentFlag variable holding the alignment of text for the text object.
      *
      * Used in displaying the text on the canvas in a certain alignment. GlobalColor is an enum provided by Qt.
      */

     Qt::AlignmentFlag alignment;

     /*!
      * \brief pointSize is a private integer variable holding the point size of the text object.
      *
      * Used in displaying the text on the canvas in a certain size. AlignmentFlag is an enum provided by Qt.
      */

     int               pointSize;

     /*!
      * \brief family is a private QString variable holding the font family of the text object.
      *
      * Used in displaying the text in a certain font on the canvas.
      */

     QString           family;

     /*!
      * \brief fontStyle is a private Style variable holding the font of the text object.
      *
      * Used in displaying the text in a certain font on the canvas. Style is an enum provided by QFont.
      */

     QFont::Style      fontStyle;

     /*!
      * \brief weight is a private Weight variable holding the text weight of the text object.
      *
      * Used in displaying the text at a specified thickness on the canvas. Weight is an enum provided by QFont.
      */

     QFont::Weight     weight;

     /*!
      * \brief textStringName is a private QString variable holding the string of the text object.
      *
      * Used in retrieving information about the text object's members.
      */

     QString textStringName;

     /*!
      * \brief textColorName is a private QString variable holding the color of the text object.
      *
      * Used in retrieving information about the text object's members.
      */

     QString textColorName;

     /*!
      * \brief textAlignmentName is a private QString variable holding the alignment of the text object.
      *
      * Used in retrieving information about the text object's members.
      */

     QString textAlignmentName;

     /*!
      * \brief textFontFamilyName is a private QString variable holding the font family of the text object.
      *
      * Used in retrieving information about the text object's members.
      */

     QString textFontFamilyName;

     /*!
      * \brief textFontStyleName is a private QString variable holding the font of the text object.
      *
      * Used in retrieving information about the text object's members.
      */

     QString textFontStyleName;

     /*!
      * \brief textFontWeightName is a private QString variable holding the font weight of the text object.
      *
      * Used in retrieving information about the text object's members.
      */

     QString textFontWeightName;

     /*!
      * \brief shapeName is a private QString variable holding the name of the text object.
      *
      * Used in displaying the text ID
      */
     QString shapeName = "Text";

};

#endif // TEXT_H
