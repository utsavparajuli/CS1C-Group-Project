 #ifndef DRAWINGWIDGET_H
#define DRAWINGWIDGET_H

#include <QWidget>
#include <QPainter>
#include <QDebug>
#include "line.h"
#include "vector.h"
#include "parser.h"

/*! \file DrawingWidget.h
 *  \brief A file outlining DrawingWidget class methods.
 */



/*!
 * \brief The DrawingWidget class contains functionality for drawing all shapes that are read from a vector of shapes onto a canvas.
 *
 * The DrawingWidget class holds the vector of all shapes currently defined in the program, handles serialization of shapes, and drives
 * functionality for drawing shapes onto the canvas. Serialization of shapes occurs when the program ends and before the DrawingWidget
 * object is destroyed. Parsing of shapes from an external file is initiated upon construction of the DrawingWidget class. Class methods
 * provide functionality to draw all shapes onto a canvas.
 */

class DrawingWidget : public QWidget
{
public:

    /* constructor */
    /*!
     * \brief Explicit constructor takes a QWidget argument and sets the local QWidget to that argument. Also initiates parsing of the shape data file.
     * \param parent is a QWidget pointer, defaulting to nullptr, which is used to construct the drawing canvas.
     */

    explicit DrawingWidget(QWidget *parent = nullptr);

    /* getVec */
    /*!
     * \brief Function returns this object's shapeVector member variable, which is a vector of shape pointers.
     * \return A vector<shape*> pointer pointing to the vector containing all current shapes in the program.
     */

    custom::vector<shape*>* getVec();

    /* destructor */
    /*!
     * \brief Function destroys the object when appropriate. Before doing so, the saveFile function is called to ensure data for all shapes is saved and persists between each execution of the program.
     */

    ~DrawingWidget();

protected:

    /* paintEvent */
    /*!
     * \brief Function accepts a QPaintEvent argument and moves through shapeVector, drawing each individual shape onto the canvas.
     * \param event is a QPaintEvent pointer which contains the paint event.
     */

    void paintEvent(QPaintEvent *event);

private:

    /*!
     * \brief shapeVector is a pointer to a vector of shape pointers which contains all current shapes in the program.
     */

    custom::vector<shape*>* shapeVector;
};

#endif // DRAWINGWIDGET_H
