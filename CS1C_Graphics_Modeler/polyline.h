#ifndef POLYLINE_H
#define POLYLINE_H

#include "shape.h"

class polyline : public shape {
    //!Default line class constructor
    /*!Function calls setShape() function and setPoint functions
    * Base Class Constructor calls setShape() and assigns
    * enum LINE to the Shape base class, assigns QPoint values.
    */
  polyline():shape(){
      setShape(POLYLINE);
      setPointOne(100, 100);
      setPointTwo(200, 100);
      setPointThree(300, 100);
      setPointFour(400, 100);
  }

  //!   Line Class Copy Constructor
  /*!   Copy Constructor for the line object
  *     \param &buffer is a ShapeBuffer object
  *     passed by const ref.
  */
  polyline(const ShapeBuffer& buffer);

   //!  Virtual Line Class Destructor
  virtual ~polyline()override;

  //!   Setter Function that sets the Shape to a ShapeBuffer object
  /*!   Function that is passed is a ShapeBuffer object by reference
  *     \param temp sets the temp ShapeBuffer objects values.
  */
  void setShapeBuffer(ShapeBuffer&)override;

  //!   Function that returns a QPoint value
  /*!   QPoint function returns QPoint one
  *     QPoint one is made up of two int values
  *     that correspond to (x,y) coordinates on the screen.
  */
  QPoint getQPointOne()const;

  //!   Function that returns a QPoint value
  /*!   QPoint function returns QPoint two
  *     QPoint one is made up of two int values
  *     that correspond to (x,y) coordinates on the screen.
  */
  QPoint getQPointTwo()const;

  //!   Inline Setter Function that sets QPoint one
  /*!   Inline function that is passed two int values.
  *     \param x sets the x coordinate of the object's 1st point
  *     \param y sets the y coordinate of the object's 1st point
  */

  QPoint getQPointThree()const;

  //!   Function that returns a QPoint value
  /*!   QPoint function returns QPoint two
  *     QPoint one is made up of two int values
  *     that correspond to (x,y) coordinates on the screen.
  */
  QPoint getQPointFour()const;

  //!   Inline Setter Function that sets QPoint one
  /*!   Inline function that is passed two int values.
  *     \param x sets the x coordinate of the object's 1st point
  *     \param y sets the y coordinate of the object's 1st point
  */
  void setPointOne(int x,int y){one.setX(x); one.setY(y);}

  //!   Inline Setter Function that sets QPoint two
  /*!   Inline function that is passed two int values.
  *     \param x sets the x coordinate of the object's 2nd point
  *     \param y sets the y coordinate of the object's 2nd point
  */
  void setPointTwo(int x,int y){two.setX(x); two.setY(y);}

  //!   Function that draws a line
  /*!   Sets the QPainter objects pen.\n
  *     Sets the QPainter objects brush.\n
  *     Sets the QPainter coordinates from which to draw a line.
  *     \param x is the starting point of the line
  *     \param y is the ending point of the line
  */
  void setPointThree(int x,int y){three.setX(x); three.setY(y);}

  //!   Inline Setter Function that sets QPoint two
  /*!   Inline function that is passed two int values.
  *     \param x sets the x coordinate of the object's 2nd point
  *     \param y sets the y coordinate of the object's 2nd point
  */
  void setPointFour(int x,int y){four.setX(x); four.setY(y);}

  //!   Function that draws a line
  /*!   Sets the QPainter objects pen.\n
  *     Sets the QPainter objects brush.\n
  *     Sets the QPainter coordinates from which to draw a line.
  *     \param x is the starting point of the line
  *     \param y is the ending point of the line
  */
  void draw (const int x, const int y)override;

  //!   Function that draws a line
  /*!   Sets the QPainter objects pen.\n
  *     Sets the QPainter objects brush.\n
  *     Sets the QPainter coordinates from which to draw a line.\n
  *     Calls the drawID function - which checks if out of bounds.\n
  *     Calls passQPainter function and passes a nullptr.
  */
  void draw()override;

  //!   Function that moves an object
  /*!   Checks to make sure that the new coordinates that are
  *     passed as parameters does not force the object off the screen.
  *     If it passes the logic check, the passed parameters are saved
  *     as new QPoint one and two.
  *     \param x is the x-axis value of the top left corner of the object
  *     \param y is the y-axis value of the top left corner of the object
  */
  void move(const int x,const int y) override;

  //!Function that returns the area of the line
  /*! Function returns 0- no area for a line
  */
  double area() const override;

  //!Function that returns the perimeter of the line
  /*! Returns the square root of QPoint function dotProduct().
  *   DotProduct() takes QPoint one and two as parameters.
  */
  double perimeter() const override;

  //!Function to find the top left corner of an object
  /*!Finds the top - left corner of an object, and assigns
  * an integer value to the object that displays on screen.
  */
  void drawID();

  //!Function that returns the x value
  int getX() const override;

  //!Function that returns the y value
  int getY() const override;
private:

  //! A variable of type QPoint- takes two int values for (x,y) coordinates for each variable
  QPoint one;
  //! A variable of type QPoint- takes two int values for (x,y) coordinates for each variable
  QPoint two;
  QPoint three;
  QPoint four;
  //! QString object to store a string value
  QString stringID;
};




#endif POLYLINE_H
