#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "shape.h"

//  Derived class from base class Shape

/*  Ellipse is a derived class of the Shape class.
 *  Takes two points, and draws an ellipse with them.
 *  Ellipse can be styled with different pens and brushes.
 */

class Ellipse: public shape
{
public:

    // Default Ellipse constructor
    /* Function calls setShape() and setPoint() functions
    *  Base class constructor calls setShape() and assigns
    *  enum Ellipse to the Shape base class, assigns x, y,
    *  width, height values.
    */

    Ellipse();

    // Overloaded Ellipse constructor
    /* Function calls setShape() and setPoint() functions
    *  Base class constructor calls setShape() and assigns
    *  enum Ellipse to the Shape base class, assigns x, y,
    *  width, height values that were passed.
    */

    Ellipse(int x, int y, int width, int height);

    // Ellipse copy constructor
    /* Copy constructor for Ellipse objects
     * \param &source is an Ellipse object
     * passed by const reference.
    */

     Ellipse(const Ellipse& source);

    // Ellipse destructor
    /* Destructor is called automatically.
     * Overrides base class virtual destructor.
    */

    ~Ellipse()override;


    // setter function setCenter sets QPoint center
    /* Passed two int values.
    *  \param x sets the x coordinate of the object's center.
    *  \param y sets the y coordinate of the object's center.
    */

    void setCenter(int x, int y);

    // setter function setHeight sets object's width.
    /* Passed an int value.
    *  \param width sets the width of the object.
    */

    void setWidth(int width);

    // setter function setHeight sets object's height.
    /* Passed an int value.
    *  \param width sets the height of the object.
    */

    void setHeight(int height);

    // function that returns the y value of the ellipse center

    int getX()const;

    // function that returns the y value of the ellipse center

    int getY()const;

    // function that returns the width of the ellipse

    int getWidth()const;

    // function that returns the height of the ellipse

    int getHeight()const;

    // function that returns the QString StringID of the ellipse

    QString getShapeID()const;

    // draw function draws an ellipse on the screen
    /* Overrides base class virtual function.
    *  Sets the QPainter object pen.
    *  Sets the QPainter object brush.
    *  Sets the QPainter coordinates with which to draw an ellipse.
    *  Passed two int values which default to 0.
    *  \param x is the center x position of the ellipse
    *  \param y is the center y position of the ellipse
    */

    void draw(QPaintDevice*)override;

    // move function changes the position of the object
    /* Overrides base class virtual function.
     * Checks to make sure that the new coordinates that are
    *  passed as parameters does not force the object off the screen.
    *  If it passes the logic check, the passed parameters are saved
    *  as the new QPoint center.
    *  \param x is the x-axis value of the ellipse center
    *  \param y is the y-axis value of the ellipse center
    */

    void move(const int x,const int y) override;

    // function calculates and returns the perimeter of the ellipse
    /* Overrides base class virtual function.
     * Returns a double value with the perimeter of the ellipse.
    */

    double calcPerimeter()override;

    // function calculates and returns the area of the ellipse
    /* Overrides base class virtual function.
     * Returns a double value with the area of the ellipse.
    */

    double calcArea()override;

    // function draws a label for the ellipse shape id at its top left corner
    /* Finds the top - left corner of an object, and assigns
     * an integer value to the object that displays on screen.
    */

    void drawID();

private:
    int x;
    int y;
    int width;
    int height;
    QString stringID;

};

#endif // ELLIPSE_H
