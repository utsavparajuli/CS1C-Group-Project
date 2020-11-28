#ifndef SAVEFILE_H
#define SAVEFILE_H
#include "shape.h"
#include "vector.h"
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QCoreApplication>
#include <QMessageBox>

void saveFile(custom::vector<shape*>&, const QString);
QString saveLine(shape*);
QString savePolyline(shape*);
QString savePolygon(shape*);
QString saveRectangle(shape*);
QString saveSquare(shape*);
QString saveEllipse(shape*);
QString saveCircle(shape*);
QString saveText(shape*);
QString shapeToString(ShapeType);

#endif // SAVEFILE_H
