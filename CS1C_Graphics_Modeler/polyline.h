#ifndef POLYLINE_H
#define POLYLINE_H

#include "shape.h"

/*! \file polyline.h
 *  \brief A file outlining the polyline class methods.
 */


/*!
 * \brief The polyline class inherits from shape and is used to create, modify, and draw a 2D polyline.
 *
 * The polyline class is derived from the shape class and overrides virtual function definitions declared in the shape class. The polyline
 * class offers member functions to draw a polyline on the canvas as well as change its location and get details about the object,
 * such as its area, perimeter, or member variables. A Polyline contains a unique name and a point counter. A polyline can contain several points.
 */

class polyline : public shape
{
public:

    /* constructor */
    /*!
     * \brief Constructor creates a shape object with ShapeType Polyline and assigns an id from passed integer argument.
     * \param id is an integer argument to be assigned to the polyline object's shapeId member.
     */

    polyline(int id = -1) : shape{id, ShapeType::Polyline}{};

    /* destructor */
    /*!
     * \brief Virtual destructor will automatically destroy the polyline object when appropriate. Overrides the shape class destructor.
     */

    virtual ~polyline() override;

    /* setPoints */
    /*!
     * \brief Function takes a QPoint and an integer argument and assigns them to appropriate polyline member variables.
     * \param newPoints is a QPoint object pointer used as the polyline's points to draw on the canvas.
     * \param count is an integer holding the amount of points contained in newPoints
     */

    void setPoints(QPoint *newPoints, int count);

    /* move */
    /*!
     * \brief Function takes two constant integer arguments and uses them to update the polyline points' 'x' and 'y' values. Overrides the shape class method.
     * \param x_cord is a constant integer holding the amount of pixels to adjust the Polyline points' 'x' coordinates by.
     * \param y_cord is a constant integer holding the amount of pixels to adjust the Polyline points' 'y' coordinates by.
     */

    void move(const int x, const int y)override;

    /* draw */
    /*!
     * \brief Function takes a QPaintDevice pointer as an argument and draws a polyline with the polyline object's settings. Overrides the shape class method.
     * \param device is a QPaintDevice pointer holding the canvas to be drawn onto.
     */

    void draw(QPaintDevice *device)override;

    /* calcPerimeter */
     /*!
      * \brief Function calculates and returns the perimeter of the polyline. Overrides the shape class method.
      * \return A double value is returned holding the polyline's perimeter.
      */

    double calcPerimeter() override; //need to write implementation

    /* calcArea */
    /*!
     * \brief Function calculates and returns the area of the polyline. Overrides the shape class method.
     * \return A double value is returned holding the polyline's area.
     */

    double calcArea() override; //need to write implementation

    /* getShapeString */
    /*!
     * \brief Virtual function returns a string documenting all of the object's member variables and their values. Overrides the shape class method.
     * \return A QString object holding a string list of all of the object's member variables and their values.
     */

    virtual QString getShapeString()override;

    /* get_cords */
    /*!
     * \brief This function returns a QPoint object which holds the polyline's left-most x and y coordinates. Overrides the shape class method.
     * \return A QPoint object constructed using the polyline's ID location, which is the left-most point of the polyline.
     */

    QPoint get_cords()override{return getIDLocation();}

    /* getIDLocation */
    /*!
     * \brief Function returns the location of the polyline object's ID label.
     * \return A QPoint object holding the location of the polyline object's ID label.
     */

    QPoint getIDLocation();

    /* getLeftMostPoint */
    /*!
     * \brief Function takes two QPoint objects as arguments and returns the left-most of the two.
     * \param p1 is a QPoint object holding the first point to check.
     * \param p2 is a QPoint object holding the second point to check.
     * \return A QPoint object constructed with the coordinates of the points whose x and y were furthest to the left of the canvas.
     */

    QPoint getLeftMostPoint(QPoint p1, QPoint p2);

private:

    /*!
     * \brief shapeName is a private QString variable holding the name of this shape.
     *
     * Used in creating and displaying the polyline's label.
     */

    QString shapeName = "Polyline";

    /*!
      * \brief points is a private QPoint pointer variable.
      *
      * Used to keep the location of an array of QPoints and iterate through them when drawing.
      */

    QPoint *points;

    /*!
     * \brief pointCount is a private integer variable.
     *
     * Used to store the number of points on the polyline.
     */

    int pointCount;
};

#endif // POLYLINE_H
