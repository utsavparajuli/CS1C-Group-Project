#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

/*! \file square.h
 *  \brief A file outlining the square class methods.
 */

/*!
 * \brief The square class inherits from shape and is used to create, modify, and draw a 2D square.
 *
 * The square class is derived from the shape class and overrides virtual function definitions declared in the shape class. The square
 * class offers member functions to draw a square on the canvas as well as change its location and get details about the object,
 * such as its area, perimeter, or member variables. A square contains a unique name, x and y coordinate, and length.
 */

class square: public shape
{
public:

    /* constructor */
    /*!
     * \brief Constructor creates a shape object with ShapeType Square and assigns an id from passed integer argument.
     * \param id is an integer argument to be assigned to the square object's shapeId member.
     */

    square(int id = -1) : shape{id, ShapeType::Square}{};

    /* destructor */
    /*!
     * \brief Virtual destructor will automatically destroy the square object when appropriate. Overrides the shape class destructor.
     */

    virtual ~square() override;

    /* setPoints */
    /*!
     * \brief Function takes four integer parameters and uses them to assign the square's x, y, and length member variables.
     * \param x is an integer used to set the square's x coordinate.
     * \param y is an integer used to set the square's y coordinate.
     * \param length is an integer used to set the square's length.
     */

    void setPoints(int x, int y, int length);

    /* move */
    /*!
     * \brief Function takes two constant integer arguments and uses them to update the square's 'x' and 'y' coordinate values. Overrides the shape class method.
     * \param x is a constant integer holding the amount of pixels to adjust the square's 'x' coordinate by.
     * \param y is a constant integer holding the amount of pixels to adjust the square's 'y' coordinate by.
     */

    void move(const int x, const int y) override;

    /* draw */
    /*!
     * \brief Function takes a QPaintDevice pointer as an argument and draws a square with the square object's settings. Overrides the shape class method.
     * \param device is a QPaintDevice pointer holding the canvas to be drawn onto.
     */

    void draw(QPaintDevice *devive) override;

    /* calcPerimeter */
    /*!
     * \brief Function calculates and returns the perimeter of the square. Overrides the shape class method.
     * \return A double value is returned holding the square's perimeter.
     */

    double calcPerimeter() override {return length * 4;}

    /* calcArea */
    /*!
     * \brief Function calculates and returns the area of the square. Overrides the shape class method.
     * \return A double value is returned holding the square's area.
     */

    double calcArea() override {return length * length;}

    /* getShapeString */
    /*!
     * \brief Virtual function returns a string documenting all of the object's member variables and their values. Overrides the shape class method.
     * \return A QString object holding a string list of all of the object's member variables and their values.
     */

    virtual QString getShapeString()override;

    /* get_cords */
    /*!
     * \brief This function returns a QPoint object which holds the square's x and y coordinates. Overrides the shape class method.
     * \return A QPoint object constructed using the square's x and y coordinates.
     */

    QPoint get_cords() override {return QPoint(this->x, this->y);}

private:

    /*!
     * \brief shapeName is a private QString variable holding the name of this shape.
     *
     * Used in creating and displaying the square's label.
     */

    QString shapeName = "Square";

    /*!
     * \brief x is a private integer variable holding the x coordinate of the square.
     *
     * Used in drawing the square on the canvas at a specific location.
     */

    int x;

    /*!
     * \brief y is a private integer variable holding the y coordinate of the square.
     *
     * Used in drawing the square on the canvas at a specific location.
     */

    int y;

    /*!
     * \brief length is a private integer variable holding the length of the square.
     *
     * Used in drawing the square on the canvas.
     */

    int length;
};

#endif // SQUARE_H
