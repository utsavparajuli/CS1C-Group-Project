#ifndef LINE_H
#define LINE_H

#include "shape.h"

/*! \file line.h
 *  \brief A file outlining line class methods.
 */

/*!
 * \brief The line class inherits from shape and is used to create, modify, and draw a line.
 *
 * The line class inherits from shape and overrides virtual functions declared in the shape class.
 * The line class includes functions to set the points of the line, move the line, and draw the line
 * to the canvas.
 */

class line: public shape
{
public:

    /* constructor */
    /*!
     * \brief The constructor creates a shape object with ShapeType Line and assigns an id from the passed integer argument.
     * \param id is an integer argument to be assigned to the lines objects shapeId member.
     */

    line(int id = -1) : shape{id, ShapeType::Line}{};

    /* destructor */
    /*!
     * \brief virtual destructor will automatically destroy the line object when appropriate. Overrides the shape class destructor.
     */

    virtual ~line()override;

    /* setPoints */
    /*!
     * \brief This function takes two const QPoint paramaters and uses them to set the lines end points.
     * \param begin is a variable of type QPoint that holds the begining point for the line.
     * \param end is a variable of type QPoint that holds the end point for the line.
     */

    void setPoints(const QPoint &begin, const QPoint &end);

    /* move */
    /*!
     * \brief This function takes 2 const int parameters and uses them to move the line to the new coordinates.
     * \param x_cord the x coordinate for the new begin point.
     * \param y_cord the y coordinate for the new begin point.
     */

    void move(const int x, const int y) override;

    /* draw */
    /*!
     * \brief This function takes QPaintDevice as an argument and draws the line on the canvas.
     * \param device is a QPaintDevice pointer holding the canvas to be drawn.
     */

    void draw(QPaintDevice *device)override;

    /* calcPerimeter */
    /*!
     * \brief Function calculates and returns the perimeter of the line. Overrides the shape class method.
     * \return A double value is returned holding the line's perimeter.
     */

    double calcPerimeter() override;

    /* calcArea */
    /*!
     * \brief Function calculates and returns the area of the line. Overrides the shape class method.
     * \return A double value is returned holding the line's area.
     */

    double calcArea() override;

    /* get_begin */
    /*!
     * \brief This function returns the begin variable of type QPoint
     * \return A QPoint varible is returned for the begining of the line
     */

    QPoint get_begin(){return begin;}

    /* get_end */
    /*!
     * \brief This function returns the end variable of type QPoint
     * \return A QPoint varible is returned for the end of the line
     */

    QPoint get_end(){return end;}

    /* getShapeString */
    /*!
     * \brief This virtual function returns a string documenting all of the object's member variables and their values.
     * \return A QString object holding a string list of all of the object's member variables and their values.
     */

    QString getShapeString()override;

    /* get_cords */
    /*!
     * \brief This function returns a QPoint object which holds the line's beginning x and y coordinates. Overrides the shape class method.
     * \return A QPoint object matching this line object's begin member variable.
     */

    QPoint get_cords()override{return begin;}

    /* getIDLocation */
    /*!
     * \brief This function returns a QPoint value for the location of the line
     * \return A QPoint variable is returned holding the location of the line
     */

    QPoint getIDLocation();

private:

    /*!
     * \brief shapeName is a QString variable holding the name of this shape.
     */

    QString shapeName = "Line";

    /*!
     * \brief begin is a QPoint variable holding the beginning of the line
     */

    QPoint begin;

    /*!
     * \brief begin is a QPoint variable holding the end of the line
     */

    QPoint end;
};

#endif // LINE_H
