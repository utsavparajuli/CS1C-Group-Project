#ifndef PARSER_H
#define PARSER_H

#include "vector.h"
#include "shape.h"
#include <QString>
#include <QFile>
#include <QTextStream>

//void shapeParser(vector<shape*>&, const QString fileName); //PROTOTYPE

void parser(const QString fileName);
void ParseLine(QTextStream &file, int ShapeID);
void ParsePolyline(QTextStream &file, int ShapeID);
void ParsePolygon(QTextStream &file, int ShapeID);
void ParseRectangle(QTextStream &file, int ShapeID);
void ParseSquare(QTextStream &file, int ShapeID);
void ParseEllipse(QTextStream &file, int ShapeID);
void ParseCircle(QTextStream &file, int ShapeID);
void ParseText(QTextStream &file, int ShapeID);

#endif // PARSER_H
