#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"

/*! \file rectangle.h
 *  \brief A file outlining the rectangle class methods.
 */

/*!
 * \brief The rectangle class inherits from shape and is used to create, modify, and draw a 2D rectangle.
 *
 * The rectangle class is derived from the shape class and overrides virtual function definitions declared in the shape class. The rectangle
 * class offers member functions to draw a rectangle on the canvas as well as change its location and get details about the object,
 * such as its area, perimeter, or member variables. A rectangle contains a unique name, x and y coordinate, length, and width.
 */

class rectangle : public shape
{
public:

    /* constructor */
    /*!
     * \brief Constructor creates a shape object with ShapeType Rectangle and assigns an id from passed integer argument.
     * \param id is an integer argument to be assigned to the rectangle object's shapeId member.
     */

    rectangle(int id = -1) : shape{id, ShapeType::Rectangle}{};

    /* destructor */
    /*!
     * \brief Virtual destructor will automatically destroy the rectangle object when appropriate. Overrides the shape class destructor.
     */

    virtual ~rectangle() override;

    /* setPoints */
    /*!
     * \brief Function takes four integer parameters and uses them to assign the rectangle's x, y, length, and width member variables.
     * \param x is an integer used to set the rectangle's x coordinate.
     * \param y is an integer used to set the rectangle's y coordinate.
     * \param length is an integer used to set the rectangle's length.
     * \param width is an integer used to set the rectangle's width.
     */

    void setPoints(int x, int y, int length, int width);

    /* move */
    /*!
     * \brief Function takes two constant integer arguments and uses them to update the rectangle's 'x' and 'y' coordinate values. Overrides the shape class method.
     * \param x is a constant integer holding the amount of pixels to adjust the rectangle's 'x' coordinate by.
     * \param y is a constant integer holding the amount of pixels to adjust the rectangle's 'y' coordinate by.
     */

    void move(const int x, const int y) override;

    /* draw */
    /*!
     * \brief Function takes a QPaintDevice pointer as an argument and draws a rectangle with the rectangle object's settings. Overrides the shape class method.
     * \param device is a QPaintDevice pointer holding the canvas to be drawn onto.
     */

    void draw(QPaintDevice *device) override;

    /* calcPerimeter */
    /*!
     * \brief Function calculates and returns the perimeter of the rectangle. Overrides the shape class method.
     * \return A double value is returned holding the rectangle's perimeter.
     */

    double calcPerimeter() override {return (length * 2) + (width * 2);}

    /* calcArea */
    /*!
     * \brief Function calculates and returns the area of the rectangle. Overrides the shape class method.
     * \return A double value is returned holding the rectangle's area.
     */

    double calcArea() override {return length * width;}

    /* getShapeString */
    /*!
     * \brief Virtual function returns a string documenting all of the object's member variables and their values. Overrides the shape class method.
     * \return A QString object holding a string list of all of the object's member variables and their values.
     */

    virtual QString getShapeString() override;

    /* get_cords */
    /*!
     * \brief This function returns a QPoint object which holds the rectangle's x and y coordinates. Overrides the shape class method.
     * \return A QPoint object constructed using the rectangle's x and y coordinates.
     */

    QPoint get_cords() override {return QPoint(this->x, this->y);}

private:

    /*!
     * \brief shapeName is a private QString variable holding the name of this shape.
     *
     * Used in creating and displaying the rectangle's label.
     */

    QString shapeName = "Rectangle";

    /*!
     * \brief x is a private integer variable holding the x coordinate of the rectangle.
     *
     * Used in drawing the rectangle on the canvas at a specific location.
     */

    int x;

    /*!
     * \brief y is a private integer variable holding the y coordinate of the rectangle.
     *
     * Used in drawing the rectangle on the canvas at a specific location.
     */

    int y;

    /*!
     * \brief length is a private integer variable holding the length of the rectangle.
     *
     * Used in drawing the rectangle on the canvas.
     */

    int length;

    /*!
     * \brief width is a private integer variable holding the width of the rectangle.
     *
     * Used in drawing the rectangle on the canvas.
     */

    int width;
};

#endif // RECTANGLE_H
