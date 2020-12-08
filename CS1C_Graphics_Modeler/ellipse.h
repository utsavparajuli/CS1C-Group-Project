#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "shape.h"

/*! \file ellipse.h
 *  \brief A file outlining the ellipse class methods.
 */

/*!
 * \brief The ellipse class inherits from shape and is used to create, modify, and draw a 2D ellipse.
 *
 * The ellipse class inherits from shape and overrides virtual functions declared in the shape class.
 * The ellipse class includes functions to set the coordinates of the polygon, move the polygon, draw the polygon
 * to the canvas, calculate its perimeter, and calculate its area.
 */

class ellipse: public shape
{
public:
    // default constructor
    ellipse(){};

    /* constructor */
    /*!
     * \brief Constructor creates an ellipse object with passed parameters.
     * \param x is an integer holding the x coordinate for the ellipse.
     * \param y is an integer holding the y coordinate for the ellipse.
     * \param width is an integer holding the width of the ellipse.
     * \param height is an integer holding the height of the ellipse.
     */


    ellipse(int x, int y, int width, int height);

    /* copy constructor */
    /*!
     * \brief Copy constructor creates an ellipse object with passed ellipse object's data.
     * \param source is a constant reference to an ellipse object whose data members are copied.
     */

     ellipse(const ellipse& source);

     /* destructor */
     /*!
      * \brief virtual destructor will automatically destroy the ellipse object when appropriate. Overrides the shape class destructor.
      */

    ~ellipse()override;

     /* setCenter */
     /*!
      * \brief Function takes two integer arguments and uses them to set the x and y coordinates of the ellipse's center.
      * \param x is an integer used to set the ellipse's x coordinate.
      * \param y is an integer used to set the ellipse's y coordinate.
      */

    void setCenter(int x, int y);

    /* setWidth */
    /*!
     * \brief Function takes an integer argument and uses it to set the ellpse object's width.
     * \param width is an integer argument used to set the ellipse's width.
     */

    void setWidth(int width);

    /* setHeight */
    /*!
     * \brief Function takes an integer argument and uses it to set the ellpse object's height.
     * \param height is an integer argument used to set the ellipse's height.
     */

    void setHeight(int height);

    /* getX */
    /*!
     * \brief Function returns the value of the ellipse's center x coordinate. Function is constant.
     * \return integer holding the x coordinate of the ellipse's center.
     */

    int getX()const;

    /* getY */
    /*!
     * \brief Function returns the value of the ellipse's center y coordinate. Function is constant.
     * \return integer holding the y coordinate of the ellipse's center.
     */

    int getY()const;

    /* getWidth */
    /*!
     * \brief Function returns the value of the ellipse's width. Function is constant.
     * \return integer holding the width of the ellipse.
     */

    int getWidth()const;

    /* getHeight */
    /*!
     * \brief Function returns the value of the ellipse's height. Function is constant.
     * \return integer holding the height of the ellipse.
     */

    int getHeight()const;

    /* getShapeID */
    /*!
     * \brief Function returns the shape'd ID as a string. Function is constant.
     * \return QString object holding the ID of the ellipse.
     */

    QString getShapeID()const;

    /* draw */
    /*!
     * \brief This function takes QPaintDevice as an argument and draws the ellipse on the canvas. Overrides the shape class method.
     * \param device is a QPaintDevice pointer holding the canvas to be drawn.
     */

    void draw(QPaintDevice *device)override;

    /* move */
    /*!
     * \brief This function takes 2 const int parameters and uses them to move the ellipse to the new coordinates.
     * \param x the x coordinate for the new center point.
     * \param y the y coordinate for the new center point.
     */

    void move(const int x,const int y) override;

    /* calcPerimeter */
    /*!
     * \brief Function calculates and returns the perimeter of the ellipse. Overrides the shape class method.
     * \return A double value is returned holding the ellipse's perimeter.
     */

    double calcPerimeter() override {return 2 * M_PI * sqrt(((height * height) + (width * width)) / 2);}

    /* calcArea */
    /*!
     * \brief Function calculates and returns the area of the ellipse. Overrides the shape class method.
     * \return A double value is returned holding the ellipse's area.
     */

    double calcArea()override{return M_PI * height * width;}

    /* get_cords */
    /*!
     * \brief This function returns a QPoint object which holds the ellipse's x and y coordinates. Overrides the shape class method.
     * \return A QPoint object constructed using the ellipse's x and y coordinates.
     */

    QPoint get_cords() override {return QPoint(this->x, this->y);}

    // not defined
    void drawID();

    /* getShapeString */
    /*!
     * \brief Virtual function returns a string documenting all of the object's member variables and their values. Overrides the shape class method.
     * \return A QString object holding a string list of all of the object's member variables and their values.
     */

    virtual QString getShapeString()override;

private:

    /*!
     * \brief x is a private integer variable holding the x coordinate of the ellipse.
     *
     * Used in drawing the ellipse on the canvas at a specific location.
     */

    int x;

    /*!
     * \brief y is a private integer variable holding the y coordinate of the ellipse.
     *
     * Used in drawing the ellipse on the canvas at a specific location.
     */

    int y;

    /*!
     * \brief width is a private integer variable holding the width coordinate of the ellipse.
     *
     * Used in drawing the ellipse on the canvas at a specific location.
     */

    int width;

    /*!
     * \brief height is a private integer variable holding the height coordinate of the ellipse.
     *
     * Used in drawing the ellipse on the canvas at a specific location.
     */

    int height;

    /*!
     * \brief shapeName is a private QString variable holding the name of this shape.
     *
     * Used in creating and displaying the ellipse's label.
     */

    QString shapeName = "Ellipse";

};

#endif // ELLIPSE_H
