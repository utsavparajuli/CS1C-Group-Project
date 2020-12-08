#ifndef POLYGON_H
#define POLYGON_H

#include "shape.h"

/*! \file polygon.h
 *  \brief A file outlining polygon class methods.
 */

/*!
 * \brief The polygon class inherits from shape and is used to create, modify, and draw a 2D polygon.
 *
 * The polygon class inherits from shape and overrides virtual functions declared in the shape class.
 * The polygon class includes functions to set the points of the polygon, move the polygon, draw the polygon
 * to the canvas, calculate the perimeter, and calculate the area.
 */

class polygon : public shape
{
public:

    /* constructor */
    /*!
     * \brief The constructor creates a shape object with ShapeType Polygon and assigns an id from the passed integer argument.
     * \param id is an integer argument to be assigned to the polygon object's shapeId member.
     */

    polygon(int id = -1) : shape{id, ShapeType::Polygon}{};

    /* destructor */
    /*!
     * \brief virtual destructor will automatically destroy the polygon object when appropriate. Overrides the shape class destructor.
     */

    virtual ~polygon() override;

    /* setPoints */
    /*!
     * \brief This function sets the point count and points for the polygon
     * \param pointCount and integer value for the number of points in the polygon
     */

    void setPoints(QPoint*, int pointCount);

    /* move */
    /*!
     * \brief This function takes 2 const int parameters and uses them to move the polygon to the new coordinates.
     * \param x_cord the x coordinate for the new center point.
     * \param y_cord the y coordinate for the new center point.
     */

    void move(const int x, const int y) override;

    /* draw */
    /*!
     * \brief This function takes QPaintDevice as an argument and draws the polygon on the canvas.
     * \param device is a QPaintDevice pointer holding the canvas to be drawn.
     */

    void draw(QPaintDevice *device) override;

    /* calcPerimeter */
    /*!
     * \brief This function calculates and returns the perimeter of the polygon. Overrides the shape class method.
     * \return A double value is returned holding the perimeter of the polygon.
     */

    double calcPerimeter() override; //need to write implementation

    /* calcArea */
    /*!
     * \brief This function calculates and returns the area of the polygon. Overrides the shape class method.
     * \return A double value is returned holding the polygon's area.
     */

    double calcArea() override; //need to write implementation

    /* getShapeString */
    /*!
     * \brief This virtual function returns a string documenting all of the object's member variables and their values.
     * \return A QString object holding a string list of all of the object's member variables and their values.
     */

    virtual QString getShapeString()override;

    /* get_cords */
    /*!
     * \brief This function returns a QPoint object which holds the polygon's left-most x and y coordinates. Overrides the shape class method.
     * \return A QPoint object constructed using the polygon's ID location, which is the left-most point of the polygon.
     */

    QPoint get_cords() override {return getIDLocation();}

    /* getIDLocation */
    /*!
     * \brief This function uses the getLeftMostPoint function get the location of the polygons left most point.
     * \return A QPoint value is returned for the left most point of the polygon.
     */

    QPoint getIDLocation();

    /* getLeftMostPoint */
    /*!
     * \brief Function takes two QPoint objects as arguments and returns the left-most of the two.
     * \param p1 is a QPoint object holding the first point to check.
     * \param p2 is a QPoint object holding the second point to check.
     * \return A QPoint object constructed with the coordinates of the points whose x and y were furthest to the left of the canvas.
     */

    QPoint getLeftMostPoint(QPoint, QPoint);

private:

    /*!
     * \brief shapeName is a QString variable holding the name of this shape.
     */

    QString shapeName = "Polygon";

    /*!
     * \brief points the points of the polygon
     */

    QPoint *points;

    /*!
     * \brief pointCount is an integer value for the number of points the polygon has.
     */

    int pointCount;
};

#endif // POLYGON_H
