#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"
#include <QtMath>

/*! \file circle.h
 *  \brief A file outlining circle class methods.
 */

/*!
 * \brief The circle class inherits from shape and is used to create, modify, and draw a 2D circle.
 *
 * The circle class inherits from shape and overrides virtual functions declared in the shape class.
 * The circle class includes functions to set the points of the circle, move the circle, draw the circle
 * to the canvas, calculate the perimeter, and calculate the area.
 */

class circle : public shape
{
public:

    /* constructor */
    /*!
     * \brief The constructor creates a shape object with ShapeType Circle and assigns an id from the passed integer argument.
     * \param id is an integer argument to be assigned to the circle object's shapeId member.
     */

    circle(int id = -1) : shape{id, ShapeType::Circle}{};

    /* destructor */
    /*!
     * \brief virtual destructor will automatically destroy the circle object when appropriate. Overrides the shape class destructor.
     */

    virtual ~circle() override;

    /* setPoints */
    /*!
     * \brief This function takes three integer parameters and uses them to set the circle's x, y, and radius member variables.
     * \param x is an integer used to set the circle's x coordinate
     * \param y is an integer used to set the circle's y coordinate
     * \param radius is an integer used to set the radius of the circle
     */

    void setPoints(int x, int y, int radius);

    /* move */
    /*!
     * \brief This function takes two constant integer parameters to move the coordinates of the circle.
     * \param x is the new x coordinate the circle will be moved to.
     * \param y is the new y coordinate the circle will be moved to.
     */

    void move(const int x, const int y) override;

    /* draw */
    /*!
     * \brief This function takes a QPaintDevice as an argument and draws the circle on the canvas.
     * \param device is a QPaintDevice pointer holding the canvas to be drawn onto.
     */

    void draw(QPaintDevice *devive) override;

    /* calcPerimeter */
    /*!
     * \brief This function calculates and returns the circumference of the circle. Overrides the shape class method.
     * \return A double value is returned holding the circumference of the circle.
     */

    double calcPerimeter() override {return  2 * M_PI * radius;}

    /* calcArea */
    /*!
     * \brief This function calculates and returns the area of the circle. Overrides the shape class method.
     * \return A double value is returned holding the circle's area.
     */

    double calcArea() override {return radius * radius * M_PI;}

    /* getShapeString */
    /*!
     * \brief This virtual function returns a string documenting all of the object's member variables and their values.
     * \return A QString object holding a string list of all of the object's member variables and their values.
     */

    virtual QString getShapeString()override;

    /* get_cords */
    /*!
     * \brief This function returns a QPoint object which holds the circle's x and y coordinates. Overrides the shape class method.
     * \return A QPoint object constructed using the circle's x and y coordinates.
     */

    QPoint get_cords() override {return QPoint(this->x, this->y);}

private:

    /*!
     * \brief x is an integer variable holding the x coordinate for the circle.
     */

    int x;

    /*!
     * \brief y is an integer variable holding the y coordinate for the circle.
     */

    int y;

    /*!
     * \brief radius is an integer value holding the radius for the circle.
     */

    int radius;

    /*!
     * \brief shapeName is a QString variable holding the name of this shape.
     */

    QString shapeName = "Circle";
};


#endif // CIRCLE_H
