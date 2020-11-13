#include "parser.h"
#include <QCoreApplication>
#include <QTextStream>
#include <QDebug>
#include <QMessageBox>

void parser(const QString fileName)
{
    int ShapeID = 1;

    //Storing the path to the .txt file in filePath
    QString filePath = qApp->applicationDirPath();
    filePath.append('/' + fileName);

    QFile inputFile(filePath); //opening the input file located at the path

    //Error checking if file exists.
    //If it does not, a QMessage box will pop up with the file name.
    if(!inputFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox fileNotFoundError;
        fileNotFoundError.setText("ERROR: Input file (\"" + fileName +"\") not found!");
        fileNotFoundError.exec();
        return;
    }

    QTextStream input(&inputFile);
    QString textLine;

    while(!input.atEnd())
    {
        input.readLine();  //Reading in the first blank line
        input.readLine(); //Throwing away shapeID (shapes will be numbered in the order they are read in)
        textLine = input.readLine().remove(0, 11); //Reading in shape type

        if(textLine == "Line")
        {
            qDebug() << "\nPrinting Line";
            ParseLine(input, ShapeID);
        }
        else if(textLine == "Polyline")
        {
            qDebug() << "\nPrinting Polyline";
            ParsePolyline(input, ShapeID);
        }
        else if(textLine == "Polygon")
        {
            qDebug() << "\nPrinting Polygon";
            ParsePolygon(input, ShapeID);
        }
        else if(textLine == "Rectangle")
        {
            qDebug() << "\nPrinting Rectangle";
            ParseRectangle(input, ShapeID);
        }
        else if(textLine == "Square")
        {
            qDebug() << "\nPrinting Square";
            ParseSquare(input, ShapeID);
        }
        else if(textLine == "Ellipse")
        {
            qDebug() << "\nPrinting Ellipse";
            ParseEllipse(input, ShapeID);
        }
        else if(textLine == "Circle")
        {
            qDebug() << "\nPrinting Circle";
            ParseCircle(input, ShapeID);
        }
        else if(textLine == "Text")
        {
            qDebug() << "\nPrinting Text";
            ParseText(input, ShapeID);
        }
        else
        {
            qDebug() << "ERROR: Shape type " << textLine << " is not valid.";
        }

        ShapeID++;
    }

}

void ParseLine(QTextStream &file, int ShapeID)
{
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
}

void ParsePolyline(QTextStream &file, int ShapeID)
{
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
}

void ParsePolygon(QTextStream &file, int ShapeID)
{
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
}

void ParseRectangle(QTextStream &file, int ShapeID)
{
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
}

void ParseSquare(QTextStream &file, int ShapeID)
{
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
}

void ParseEllipse(QTextStream &file, int ShapeID)
{
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
}

void ParseCircle(QTextStream &file, int ShapeID)
{
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
}

void ParseText(QTextStream &file, int ShapeID)
{
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
    qDebug() << file.readLine();
}
