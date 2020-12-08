#ifndef SAVEFILE_H
#define SAVEFILE_H
#include "shape.h"
#include "vector.h"
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QCoreApplication>
#include <QMessageBox>

//void saveFile(custom::vector<shape*>&, const QString);
/*! \file saveFile.h
 *  \brief A file containing functionality to save shape information to an external file.
 *
 * The saveFile file contains a function to save all shape information currently in the program to an external file. This allows
 * the shape data to persist between program executions. Shape data is overwritten after each program execution to current values.
 */

/* saveFile */
/*!
 * \brief Function saves shapes contained in a passed vector of shape pointers to an external file whose name is passed in a QString.
 *
 * The saveFile function will open the file whose name is passed as the fileName argument, terminating
 * the program if the file is unreachable. It will then continuously move through the vector shapeList to access individual shape
 * objects. The individual shape objects will have their getShapeString methods called to retrieve strings containing all of their
 * information in a specificly formatted string. These strings are then written to the external file one by one until the vector's
 * end is reached. If the file being written to already existed, it is overwritten with the new data.
 *
 * \param shapeList is a reference to a vector of shape pointers, used to access all shapes currently present in the program run.
 * \param fileName is a QString argument holding the name of a file to be read.
 */

void saveFile(custom::vector<shape*> &shapeList, const QString fileName);

#endif // SAVEFILE_H
