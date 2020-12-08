#ifndef PARSER_H
#define PARSER_H

#include "vector.h"
#include "shape.h"
#include "line.h"
#include "polyline.h"
#include "ellipse.h"
#include "square.h"
#include "rectangle.h"
#include "circle.h"
#include "polygon.h"
#include "text.h"

#include <QString>
#include <QFile>
#include <QTextStream>
#include <QCoreApplication>
#include <QDebug>
#include <QMessageBox>
#include <QPaintDevice>

/*! \file parser.h
 *  \brief A file containing functionality to parse shape information from an external file.
 *
 * The parser file contains several functions used to obtain information from an external file and assign it
 * to the appropriate shape type. The external file must be in the proper format. The parser will use the
 * data it obtains to determine what type of shape is being read and call an appropriate function to create
 * a new shape using the information read.
 */

//void shapeParser(custom::vector<shape*>&, const QString fileName); //PROTOTYPE

/* parser */
/*!
 * \brief Function returns a vector of new shapes created through the use of a passed file name argument.
 *
 * The parser function will open and read the file whose name is passed as the fileName argument, terminating
 * the program if the file is unreachable. It will then continuously read blocks of text, separated by a single
 * empty line in the file, which contain information to be used to construct new shape objects. The parser will
 * determine which shape to construct in a given section by reading the shape's name. The parser will then call
 * an appropriate function to construct a new shape using the information found in the file's text, and add
 * the returned object to a vector. The parser continues to loop until the end of the file is reached and it
 * returns.
 *
 * \param fileName is a QString argument holding the name of a file to be read.
 * \return A pointer to a new vector which holds pointers to new shapes created by the parser.
 */

custom::vector<shape*>* parser(const QString fileName);

/* ParseLine */
/*!
 * \brief Function creates and returns a new line object by reading information from QTextStream and
 *        integer arguments.
 * \param file is a QTextStream object used to read through lines of a file and pull relevant properties needed
 *        to create a new line object.
 * \param ShapeID is an integer holding the ID number to be assigned to the new line's shapeID variable.
 * \return A pointer to a new line object whose variables now match the data found through reading file.
 */

line* ParseLine(QTextStream &file, int ShapeID);

/* ParsePolyline */
/*!
 * \brief Function creates and returns a new polyline object by reading information from QTextStream and
 *        integer arguments.
 * \param file is a QTextStream object used to read through lines of a file and pull relevant properties needed
 *        to create a new polyline object.
 * \param ShapeID is an integer holding the ID number to be assigned to the new polyline's shapeID variable.
 * \return A pointer to a new polyline object whose variables now match the data found through reading file.
 */

polyline* ParsePolyline(QTextStream &file, int ShapeID);

/* ParsePolygon */
/*!
 * \brief Function creates and returns a new polygon object by reading information from QTextStream and
 *        integer arguments.
 * \param file is a QTextStream object used to read through lines of a file and pull relevant properties needed
 *        to create a new polygon object.
 * \param ShapeID is an integer holding the ID number to be assigned to the new polygon's shapeID variable.
 * \return A pointer to a new polygon object whose variables now match the data found through reading file.
 */

polygon* ParsePolygon(QTextStream &file, int ShapeID);

/* ParseRectangle */
/*!
 * \brief Function creates and returns a new rectangle object by reading information from QTextStream and
 *        integer arguments.
 * \param file is a QTextStream object used to read through lines of a file and pull relevant properties needed
 *        to create a new rectangle object.
 * \param ShapeID is an integer holding the ID number to be assigned to the new rectangle's shapeID variable.
 * \return A pointer to a new rectangle object whose variables now match the data found through reading file.
 */

rectangle* ParseRectangle(QTextStream &file, int ShapeID);

/* ParseSquare */
/*!
 * \brief Function creates and returns a new square object by reading information from QTextStream and
 *        integer arguments.
 * \param file is a QTextStream object used to read through lines of a file and pull relevant properties needed
 *        to create a new square object.
 * \param ShapeID is an integer holding the ID number to be assigned to the new square's shapeID variable.
 * \return A pointer to a new square object whose variables now match the data found through reading file.
 */

square* ParseSquare(QTextStream &file, int ShapeID);

/* ParseEllipse */
/*!
 * \brief Function creates and returns a new ellipse object by reading information from QTextStream and
 *        integer arguments.
 * \param file is a QTextStream object used to read through lines of a file and pull relevant properties needed
 *        to create a new ellipse object.
 * \param ShapeID is an integer holding the ID number to be assigned to the new ellipse's shapeID variable.
 * \return A pointer to a new ellipse object whose variables now match the data found through reading file.
 */

ellipse* ParseEllipse(QTextStream &file, int ShapeID);

/* ParseCircle */
/*!
 * \brief Function creates and returns a new circle object by reading information from QTextStream and
 *        integer arguments.
 * \param file is a QTextStream object used to read through lines of a file and pull relevant properties needed
 *        to create a new circle object.
 * \param ShapeID is an integer holding the ID number to be assigned to the new circle's shapeID variable.
 * \return A pointer to a new circle object whose variables now match the data found through reading file.
 */

circle* ParseCircle(QTextStream &file, int ShapeID);

/* ParseText */
/*!
 * \brief Function creates and returns a new text object by reading information from QTextStream and
 *        integer arguments.
 * \param file is a QTextStream object used to read through lines of a file and pull relevant properties needed
 *        to create a new text object.
 * \param ShapeID is an integer holding the ID number to be assigned to the new text object's shapeID variable.
 * \return A pointer to a new text object whose variables now match the data found through reading file.
 */

text* ParseText(QTextStream &file, int ShapeID);

/* stringToColor */
/*!
 * \brief Function takes a QString argument and returns a matching GlobalColor enum.
 * \param line is a QString object which holds the name of a color in text.
 * \return A GlobalColor enumeration member matching the color read from the QString is returned.
 */

Qt::GlobalColor stringToColor(QString line);

/* stringToPenStyle */
/*!
 * \brief Function takes a QString argument and returns a matching PenStyle enum.
 * \param line is a QString object which holds the name of a pen style in text.
 * \return A PenStyle enumeration member matching the pen style read from the QString is returned.
 */

Qt::PenStyle stringToPenStyle(QString line);

/* stringToPenCapStyle */
/*!
 * \brief Function takes a QString argument and returns a matching PenCapStyle enum.
 * \param line is a QString object which holds the name of a pen cap style in text.
 * \return A PenCapStyle enumeration member matching the pen cap style read from the QString is returned.
 */

Qt::PenCapStyle stringToPenCapStyle(QString line);

/* stringToPenJoinStyle */
/*!
 * \brief Function takes a QString argument and returns a matching PenJoinStyle enum.
 * \param line is a QString object which holds the name of a pen join style in text.
 * \return A PenJoinStyle enumeration member matching the pen join style read from the QString is returned.
 */

Qt::PenJoinStyle stringToPenJoinStyle(QString line);

/* stringToBrushStyle */
/*!
 * \brief Function takes a QString argument and returns a matching BrushStyle enum.
 * \param line is a QString object which holds the name of a brush style in text.
 * \return A BrushStyle enumeration member matching the brush style read from the QString is returned.
 */

Qt::BrushStyle stringToBrushStyle(QString line);

/* stringToAlignment */
/*!
 * \brief Function takes a QString argument and returns a matching AlignmentFlag enum.
 * \param line is a QString object which holds the name of an alignment in text.
 * \return An AlignmentFlag enumeration member matching the alignment read from the QString is returned.
 */

Qt::AlignmentFlag stringToAlignment(QString line);

/* stringToTextFontStyle */
/*!
 * \brief Function takes a QString argument and returns a matching Style enum.
 * \param line is a QString object which holds the name of a text font style in text.
 * \return A Style enumeration member matching the text font style read from the QString is returned.
 */

QFont::Style stringToTextFontStyle(QString line);

/* stringToTextFontWeight */
/*!
 * \brief Function takes a QString argument and returns a matching Weight enum.
 * \param line is a QString object which holds the name of a text font weight in text.
 * \return A Weight enumeration member matching the text font weight read from the QString is returned.
 */

QFont::Weight stringToTextFontWeight(QString line);

#endif // PARSER_H
