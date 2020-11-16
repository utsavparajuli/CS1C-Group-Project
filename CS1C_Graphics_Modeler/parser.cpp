#include "parser.h"

custom::vector<shape*>* parser(const QString fileName, QPaintDevice *device)
{
    custom::vector<shape*> *shapeVector = new custom::vector<shape*>();

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
        exit(-1);
    }

    QTextStream input(&inputFile);
    QString textLine;

    while(!input.atEnd())
    {
        input.readLine();  //Reading in the first blank line
        input.readLine();  //Throwing away shapeID (shapes will be numbered in the order they are read in)
        textLine = input.readLine().remove(0, 11); //Reading in shape type

        if(textLine == "Line")
        {
            qDebug() << "\nPrinting Line";
            qDebug() << "CAPACITY  " << shapeVector->size();
            shapeVector->push_back(ParseLine(input, ShapeID, device));
            qDebug() << "CAPACITY  " << shapeVector->size();
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

    return shapeVector;
}

line* ParseLine(QTextStream &file, int ShapeID, QPaintDevice *device)
{
    line *tempLine = new line(device);

    tempLine->set_ShapeId(ShapeID);

    // GETS ATTRIBUTES FOR LINE
    QStringList dimensions = file.readLine().remove(0, 17).split(", ");

    QString tempWidth = file.readLine().remove(0, 11);
    int penWidth = tempWidth.toInt();

    QString penColor = file.readLine().remove(0, 11);
    QString penStyle = file.readLine().remove(0, 11);
    QString penCapStyle = file.readLine().remove(0, 13);
    QString penJoinStyle = file.readLine().remove(0, 14);

    // SETS ATTRIBUTES FOR LINE
    tempLine->setPoints(QPoint(dimensions[0].toInt(), dimensions[1].toInt()),
                        QPoint(dimensions[2].toInt(), dimensions[3].toInt()));

    tempLine->set_pen(stringToColor(penColor), penWidth, stringToPenStyle(penStyle),
                      stringToPenCapStyle(penCapStyle), stringToPenJoinStyle(penJoinStyle));

    return tempLine;
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

Qt::GlobalColor stringToColor(QString line)
{
    if(line == "white")
        return Qt::GlobalColor::white;
    else if (line == "black")
        return Qt::GlobalColor::black;
    else if (line == "red")
        return Qt::GlobalColor::red;
    else if (line == "green")
        return Qt::GlobalColor::green;
    else if (line == "blue")
        return Qt::GlobalColor::blue;
    else if (line == "cyan")
        return Qt::GlobalColor::cyan;
    else if (line == "magenta")
        return Qt::GlobalColor::magenta;
    else if(line == "yellow")
        return Qt::GlobalColor::yellow;
    else if(line == "gray")
        return Qt::GlobalColor::gray;
}

Qt::PenStyle stringToPenStyle(QString line)
{
    if(line == "SolidLine")
        return Qt::PenStyle::SolidLine;
    else if (line == "DashLine")
        return Qt::PenStyle::DashLine;
    else if (line == "DotLine")
        return Qt::PenStyle::DotLine;
    else if (line == "DashDotLine")
        return Qt::PenStyle::DashDotLine;
    else if (line == "DashDotDotLine")
        return Qt::PenStyle::DashDotDotLine;
    else if (line == "NoPen")
        return Qt::PenStyle::SolidLine;
}

Qt::PenCapStyle stringToPenCapStyle(QString line)
{
    if(line == "SquareCap")
        return Qt::PenCapStyle::SquareCap;
    else if (line == "FlatCap")
        return Qt::PenCapStyle::FlatCap;
    else if (line == "RoundCap")
        return Qt::PenCapStyle::RoundCap;
}

Qt::PenJoinStyle stringToPenJoinStyle(QString line)
{
    if(line == "BevelJoin")
        return Qt::PenJoinStyle::BevelJoin;
    else if (line == "MiterJoin")
        return Qt::PenJoinStyle::MiterJoin;
    else if (line == "RoundJoin")
       return Qt::PenJoinStyle::RoundJoin;
}
