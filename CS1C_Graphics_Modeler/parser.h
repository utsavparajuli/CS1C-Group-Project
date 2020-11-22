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



//void shapeParser(custom::vector<shape*>&, const QString fileName); //PROTOTYPE

custom::vector<shape*>* parser(const QString fileName);
line* ParseLine(QTextStream &file, int ShapeID);
polyline* ParsePolyline(QTextStream &file, int ShapeID);
polygon* ParsePolygon(QTextStream &file, int ShapeID);
rectangle* ParseRectangle(QTextStream &file, int ShapeID);
square* ParseSquare(QTextStream &file, int ShapeID);
ellipse* ParseEllipse(QTextStream &file, int ShapeID);
circle* ParseCircle(QTextStream &file, int ShapeID);
text* ParseText(QTextStream &file, int ShapeID);

Qt::GlobalColor stringToColor(QString);
Qt::PenStyle stringToPenStyle(QString);
Qt::PenCapStyle stringToPenCapStyle(QString);
Qt::PenJoinStyle stringToPenJoinStyle(QString);
Qt::BrushStyle stringToBrushStyle(QString);

Qt::AlignmentFlag stringToAlignment(QString);
QFont::Style stringToTextFontStyle(QString);
QFont::Weight stringToTextFontWeight(QString);

#endif // PARSER_H
