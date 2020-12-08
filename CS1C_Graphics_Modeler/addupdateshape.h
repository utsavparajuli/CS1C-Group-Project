#ifndef ADDUPDATESHAPE_H
#define ADDUPDATESHAPE_H

#include <QDialog>
#include <QDebug>
#include "vector.h"
#include "shape.h"

/*! \file addupdateshape.h
 *  \brief A file outlining AddUpdateShape class methods.
 */

namespace Ui {
class AddUpdateShape;
}

/*!
 * \brief The AddUpdateShape class provides functionality to add new shapes, edit existing shape properties, and delete existing shapes.
 *
 * The AddUpdateShape class has public inheritance of QDialog. The class is responsible for the display and function of the add, edit,
 * and delete features of the program. It adjusts the display of available edit or delete options where appropriate depending on the
 * availability of current shapes and the currently selected shape type.
 */

class AddUpdateShape : public QDialog
{
    Q_OBJECT

public:

    /* constructor */
    /*!
     * \brief Explicit constructor accepts a vector of shapes and a QWidget object and sets up the combo box with available options.
     *
     * Descriptive text is written to the combo box. Buttons and other user functionality is displayed and labeled appropriately.
     * \param vec is a pointer to a vector of shape pointers containing all currently rendered shapes.
     * \param parent is a QWidget pointer, defaulting to nullptr, which is used as the canvas to display to.
     */

    explicit AddUpdateShape(custom::vector<shape*> *vec, QWidget *parent = nullptr);

    /* setTitle */
    /*!
     * \brief Function writes out the title text of the combo box using passed QString.
     * \param newTitle is a QString object which holds the string to be displayed as the combo box title.
     */

    void setTitle(QString newTitle);

    /* addShapeSetup */
    /*!
     * \brief Function customizes the combo box for add shape functionality. Options are enabled or disabled to allow only for adding new shapes.
     */

    void addShapeSetup();

    /* updateShapeSetup */
    /*!
     * \brief Function customizes the combo box for update shape functionality. Options are enabled or disabled to allow only for updating existing shapes.
     */

    void updateShapeSetup();

    /* destructor */
    /*!
     * \brief Destructor will automatically destroy the widget when appropriate.
     */

    ~AddUpdateShape();

private slots:

    /* on_ShapeTypeEntry_currentIndexChanged */
    /*!
     * \brief Function is used to call appropriate shape-specific setup functions for the combo box based on the passed integer argument.
     *
     * The function is called when a shape type selection is chosen while editing or adding shapes. Additional actions will be taken to enable or disable
     * aspects of the combo box depending on the passed index argument. Valid arguments for index fall between 0 - 7. 0 sets the combo box up for a line
     * shape, while 1 does the same for polyline shapes, 2 for polygon shapes, 3 for rectangles, 4 for squares, 5 for ellipses, 6 for circles, and 7 for text.
     * \param index is an integer used to identify what shape is currently selected for editing or adding.
     */

    void on_ShapeTypeEntry_currentIndexChanged(int index);

    /* on_HelpButton_clicked */
    /*!
     * \brief Function will create and display a help window when called.
     *
     * A message box window is constructed and displayed to the screen containing instructions for users on how to properly input data.
     */

    void on_HelpButton_clicked();

    /* on_ShapesEntry_currentIndexChanged */
    /*!
     * \brief Function takes an integer argument as an index and accesses a shape in this object's shapeVector at that index to autofill its current information into user input fields.
     * \param index is an integer used to identify which shape in shapeVector is currently focused.
     */

    void on_ShapesEntry_currentIndexChanged(int index);

    /* on_pushButton_clicked */
    /*!
     * \brief Function checks if the current action is to update shapes. If true, calls a function to save any updates.
     */

    void on_pushButton_clicked();

    /* on_pushButton_2_clicked */
    /*!
     * \brief Function closes current addUpdateShape window.
     */

    void on_pushButton_2_clicked();

private:

    /*!
     * \brief ui is used to display all visible aspects of the current window to the screen.
     */

    Ui::AddUpdateShape *ui;

    /* setLineEnabled */
    /*!
     * \brief Function enables or disables certain options on the current window to only allow for line-specific input options.
     */

    void setLineEnabled();

    /* setPolylineEnabled */
    /*!
     * \brief Function enables or disables certain options on the current window to only allow for polyline-specific input options.
     */

    void setPolylineEnabled();

    /* setPolygonEnabled */
    /*!
     * \brief Function enables or disables certain options on the current window to only allow for polygon-specific input options.
     */

    void setPolygonEnabled();

    /* setRectangleEnabled */
    /*!
     * \brief Function enables or disables certain options on the current window to only allow for rectangle-specific input options.
     */

    void setRectangleEnabled();

    /* setSquareEnabled */
    /*!
     * \brief Function enables or disables certain options on the current window to only allow for square-specific input options.
     */

    void setSquareEnabled();

    /* setEllipseEnabled */
    /*!
     * \brief Function enables or disables certain options on the current window to only allow for ellipse-specific input options.
     */

    void setEllipseEnabled();

    /* setCircleEnabled */
    /*!
     * \brief Function enables or disables certain options on the current window to only allow for circle-specific input options.
     */

    void setCircleEnabled();

    /* setTextEnabled */
    /*!
     * \brief Function enables or disables certain options on the current window to only allow for text-specific input options.
     */

    void setTextEnabled();

    /* fillPenValues */
    /*!
     * \brief Function sets user's entry fields for pen customization. Autofills entry fields to currently selected shape's pen setting values.
     * \param i is an integer specifying which index to access in shapeVector to select a shape.
     */

    void fillPenValues(int i);

    /* fillBrushValues */
    /*!
     * \brief Function sets user's entry fields for brush customization. Autofills entry fields to currently selected shape's brush setting values.
     * \param i is an integer specifying which index to access in shapeVector to select a shape.
     */

    void fillBrushValues(int i);

    /* fillTextValues */
    /*!
     * \brief Function sets user's entry fields for text customization. Autofills entry fields to currently selected shape's text setting values.
     * \param i is an integer specifying which index to access in shapeVector to select a shape.
     */

    void fillTextValues(int i);

    /* fillLineEntry */
    /*!
     * \brief Function autofills user's entry fields with the currently selected line shape's information.
     * \param i is an integer specifying which index to access in shapeVector to access the current shape.
     */

    void fillLineEntry(int i);

    /* fillShapeEntry */
    /*!
     * \brief Function autofills user's entry fields with the currently selected shape's information.
     * \param i is an integer specifying which index to access in shapeVector to access the current shape.
     */

    void fillShapeEntry(int i);

    /* fillTextEntry */
    /*!
     * \brief Function autofills user's entry fields with the currently selected text shape's information.
     * \param i is an integer specifying which index to access in shapeVector to access the current shape.
     */

    void fillTextEntry(int i);

    /* uniqueShapeID */
    /*!
     * \brief Function takes an integer argument and checks through this object's shapeVector to find if there is no shapes with a matching id number. Returns false if a match is found, true otherwise.
     * \param id is an integer holding the id number being searched for in all shapes in this object's shapeVector.
     * \return A bool value returns true if no shape is found in shapeVector with an idNum matching id, otherwise returns false.
     */

    bool uniqueShapeID(int id);

    /* getNextID */
    /*!
     * \brief Function creates a unique id number that is not already held by a shape in this object's shapeVector.
     * \return An integer value holding a unique id number for a shape.
     */

    int getNextID();

    /* saveUpdateShape */
    /*!
     * \brief Function ensures the id entered in the shape id input field is valid and saves updated information about the edited shape into its respective shape object.
     */

    void saveUpdateShape();

    /* saveAddShape */
    /*!
     * \brief Function ensures the id entered in the shape id input field is valid and saves information about the added shape into the vector of shapes.
     *
     * The function will perform checks to ensure the id of the shape being added is unique. If it is not, an error will display. A new shape is constructed
     * containing the information entered into the ui input fields. The information entered is checked for validity and throws an error if it is invalid. The
     * function will then push the new shape into the vector.
     */

    void saveAddShape();

    /* updateLine */
    /*!
     * \brief Function sets the passed line object's member variables to the values that have been entered into the combo box input fields.
     * \param currentShape is a shape pointer whose member data is being set.
     */

    void updateLine(shape* currentShape);

    /* updatePolyline */
    /*!
     * \brief Function sets the passed polyline object's member variables to the values that have been entered into the combo box input fields.
     * \param currentShape is a shape pointer whose member data is being set.
     */

    void updatePolyline(shape* currentShape);

    /* updatePolygon */
    /*!
     * \brief Function sets the passed polygon object's member variables to the values that have been entered into the combo box input fields.
     * \param currentShape is a shape pointer whose member data is being set.
     */

    void updatePolygon(shape* currentShape);

    /* updateRectangle */
    /*!
     * \brief Function sets the passed rectangle object's member variables to the values that have been entered into the combo box input fields.
     * \param currentShape is a shape pointer whose member data is being set.
     */

    void updateRectangle(shape* currentShape);

    /* updateSquare */
    /*!
     * \brief Function sets the passed square object's member variables to the values that have been entered into the combo box input fields.
     * \param currentShape is a shape pointer whose member data is being set.
     */

    void updateSquare(shape* currentShape);

    /* updateEllipse */
    /*!
     * \brief Function sets the passed ellipse object's member variables to the values that have been entered into the combo box input fields.
     * \param currentShape is a shape pointer whose member data is being set.
     */

    void updateEllipse(shape* currentShape);

    /* updateCircle */
    /*!
     * \brief Function sets the passed circle object's member variables to the values that have been entered into the combo box input fields.
     * \param currentShape is a shape pointer whose member data is being set.
     */

    void updateCircle(shape* currentShape);

    /* updateText */
    /*!
     * \brief Function sets the passed text object's member variables to the values that have been entered into the combo box input fields.
     * \param currentShape is a shape pointer whose member data is being set.
     */

    void updateText(shape* currentShape);

    /* shapeToInt */
    /*!
     * \brief This function returns an integer corresponding to the ShapeType enum passed to it.
     *
     * A return value of 0 means the ShapeType is Line. A 1 means Polyline, a 2 means Polygon, a 3 means Rectangle, a 4 means Square, a 5 means Ellipse, a 6 means Circle, and a 7 means any other.
     * \param shape is a ShapeType enumeration member holding a shape type.
     * \return An integer value between 0 - 7 which corresponds to a particular shape.
     */

    int shapeToInt(ShapeType shape);

    /*!
     * \brief shapeVector is a pointer to a vector of shape pointers. Holds all currently registered shapes in the program.
     */

    custom::vector<shape*> *shapeVector;

};

#endif // ADDUPDATESHAPE_H
