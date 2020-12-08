#ifndef DELETESHAPE_H
#define DELETESHAPE_H

#include <QDialog>
#include "vector.h"
#include "shape.h"

/*! \file deleteshape.h
 *  \brief A file outlining deleteShape class methods.
 */

namespace Ui {
class deleteShape;
}

/*!
 * \brief The deleteShape class provides functionality to delete existing shapes.
 *
 * The deleteShape class has public inheritance of QDialog. The class is responsible for the display and function
 * of the delete shape feature of the program. It adjusts the display of available delete options where appropriate depending on the
 * availability of current shapes.
 */

class deleteShape : public QDialog
{
    Q_OBJECT

public:

    /* constructor */
    /*!
     * \brief Explicit constructor accepts a vector of shapes and a QWidget object and sets up the combo box with available options for deletion of current shapes.
     *
     * Descriptive text is written to the combo box. Buttons and other user functionality is displayed and labeled appropriately. A selectable list of shapes
     * is created and shapes that are selected can be deleted.
     * \param vec is a pointer to a vector of shape pointers containing all currently rendered shapes.
     * \param parent is a QWidget pointer, defaulting to nullptr, which is used as the canvas to display to.
     */

    explicit deleteShape(custom::vector<shape*>*, QWidget *parent = nullptr);

    /* destructor */
    /*!
     * \brief Destructor will automatically destroy the widget when appropriate.
     */

    ~deleteShape();

private slots:

    /* on_deleteShapeCancelButton_clicked */
    /*!
     * \brief Function will close this ui window without making any changes.
     */

    void on_deleteShapeCancelButton_clicked();

    /* on_deleteShapeDeleteButton_clicked */
    /*!
     * \brief Function will remove the shape that is currently selected in the combo box menu.
     *
     * The selected shape will be removed from the vector of shapes. It will no longer be drawn on the canvas or saved
     * upon closing the program.
     */

    void on_deleteShapeDeleteButton_clicked();

private:

    /*!
     * \brief ui is used to display all visible aspects of the current window to the screen.
     */

    Ui::deleteShape *ui;

    /*!
     * \brief shapeVector is a pointer to a vector of shape pointers. Holds all currently registered shapes in the program.
     */

    custom::vector<shape*> *shapeVector;
};

#endif // DELETESHAPE_H
