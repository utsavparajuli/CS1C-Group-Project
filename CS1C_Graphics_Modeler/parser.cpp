#include "parser.h"

custom::vector<shape*>* parser(const QString fileName)
{
    custom::vector<shape*> *shapeVector = new custom::vector<shape*>();

    int ShapeID;

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
        ShapeID = input.readLine().remove(0, 9).toInt();  //Reading in shapeId
        textLine = input.readLine().remove(0, 11); //Reading in shape type

        if(textLine == "Line")
        {
            shapeVector->push_back(ParseLine(input, ShapeID));
        }
        else if(textLine == "Polyline")
        {
            shapeVector->push_back(ParsePolyline(input, ShapeID));
        }
        else if(textLine == "Polygon")
        {
            shapeVector->push_back(ParsePolygon(input, ShapeID));
        }
        else if(textLine == "Rectangle")
        {
            shapeVector->push_back(ParseRectangle(input, ShapeID));
        }
        else if(textLine == "Square")
        {
            shapeVector->push_back(ParseSquare(input, ShapeID));
        }
        else if(textLine == "Ellipse")
        {
            shapeVector->push_back(ParseEllipse(input, ShapeID));
        }
        else if(textLine == "Circle")
        {
            shapeVector->push_back(ParseCircle(input, ShapeID));
        }
        else if(textLine == "Text")
        {
            shapeVector->push_back(ParseText(input, ShapeID));
        }
        else
        {
            qDebug() << "ERROR: Shape type " << textLine << " is not valid.";
        }
    }

    return shapeVector;
}

line* ParseLine(QTextStream &file, int ShapeID)
{
    line *tempLine = new line();

    tempLine->set_ShapeId(ShapeID);

    // GETS ATTRIBUTES FOR LINE
    QStringList dimensions = file.readLine().remove(0, 17).split(", ");

    QString penColor = file.readLine().remove(0, 10);
    QString tempWidth = file.readLine().remove(0, 10);
    int penWidth = tempWidth.toInt();
    QString penStyle = file.readLine().remove(0, 10);
    QString penCapStyle = file.readLine().remove(0, 13);
    QString penJoinStyle = file.readLine().remove(0, 14);

    // SETS ATTRIBUTES FOR LINE
    tempLine->setPoints(QPoint(dimensions[0].toInt(), dimensions[1].toInt()),
                        QPoint(dimensions[2].toInt(), dimensions[3].toInt()));

    tempLine->set_pen(stringToColor(penColor), penWidth, stringToPenStyle(penStyle),
                      stringToPenCapStyle(penCapStyle), stringToPenJoinStyle(penJoinStyle),
                      penColor, penStyle, penCapStyle, penJoinStyle);

    return tempLine;
}

polyline* ParsePolyline(QTextStream &file, int ShapeID)
{
    polyline *tempPolyline = new polyline();

    tempPolyline->set_ShapeId(ShapeID);

    QStringList dimensions = file.readLine().remove(0, 17).split(", ");

    QPoint *pointArray = new QPoint[dimensions.size() / 2];

    int point = 0;
    for(int i = 0; i < dimensions.size() / 2; i++)
    {
        pointArray[i] = QPoint(dimensions[point].toInt(), dimensions[point + 1].toInt());
        point += 2;
    }

    QString penColor = file.readLine().remove(0, 10);
    QString tempWidth = file.readLine().remove(0, 10);
    int penWidth = tempWidth.toInt();
    QString penStyle = file.readLine().remove(0, 10);
    QString penCapStyle = file.readLine().remove(0, 13);
    QString penJoinStyle = file.readLine().remove(0, 14);

    tempPolyline->setPoints(pointArray, dimensions.size() / 2);

    tempPolyline->set_pen(stringToColor(penColor), penWidth, stringToPenStyle(penStyle),
                      stringToPenCapStyle(penCapStyle), stringToPenJoinStyle(penJoinStyle),
                      penColor, penStyle, penCapStyle, penJoinStyle);

    return tempPolyline;
}

polygon* ParsePolygon(QTextStream &file, int ShapeID)
{
    QStringList dimensions = file.readLine().remove(0, 17).split(", ");

    QPoint *pointArray = new QPoint[dimensions.size() / 2];

    int point = 0;
    for(int i = 0; i < dimensions.size() / 2; i++)
    {
        pointArray[i] = QPoint(dimensions[point].toInt(), dimensions[point + 1].toInt());
        point += 2;
    }

    QString penColor = file.readLine().remove(0, 10);
    QString tempWidth = file.readLine().remove(0, 10);
    int penWidth = tempWidth.toInt();
    QString penStyle = file.readLine().remove(0, 10);
    QString penCapStyle = file.readLine().remove(0, 13);
    QString penJoinStyle = file.readLine().remove(0, 14);
    QString brushColor = file.readLine().remove(0, 12);
    QString brushStyle = file.readLine().remove(0, 12);

    polygon *tempPolygon = new polygon();

    tempPolygon->set_ShapeId(ShapeID);

    tempPolygon->setPoints(pointArray, dimensions.size() / 2);

    tempPolygon->set_pen(stringToColor(penColor), penWidth, stringToPenStyle(penStyle),
                         stringToPenCapStyle(penCapStyle), stringToPenJoinStyle(penJoinStyle),
                         penColor, penStyle, penCapStyle, penJoinStyle);
    tempPolygon->set_brush(stringToColor(brushColor), stringToBrushStyle(brushStyle), brushColor, brushStyle);

    return tempPolygon;
}

rectangle* ParseRectangle(QTextStream &file, int ShapeID)
{
    QStringList dimensions = file.readLine().remove(0, 17).split(", ");

    QString penColor = file.readLine().remove(0, 10);
    QString tempWidth = file.readLine().remove(0, 10);
    int penWidth = tempWidth.toInt();
    QString penStyle = file.readLine().remove(0, 10);
    QString penCapStyle = file.readLine().remove(0, 13);
    QString penJoinStyle = file.readLine().remove(0, 14);
    QString brushColor = file.readLine().remove(0, 12);
    QString brushStyle = file.readLine().remove(0, 12);

    rectangle *tempRectangle = new rectangle();
    tempRectangle->setPoints(dimensions[0].toInt(), dimensions[1].toInt(), dimensions[2].toInt(), dimensions[3].toInt());

    tempRectangle->set_ShapeId(ShapeID);

    tempRectangle->set_pen(stringToColor(penColor), penWidth, stringToPenStyle(penStyle),
                           stringToPenCapStyle(penCapStyle), stringToPenJoinStyle(penJoinStyle),
                           penColor, penStyle, penCapStyle, penJoinStyle);

    tempRectangle->set_brush(stringToColor(brushColor), stringToBrushStyle(brushStyle), brushColor, brushStyle);

    return tempRectangle;
}

square* ParseSquare(QTextStream &file, int ShapeID)
{
    QStringList dimensions = file.readLine().remove(0, 17).split(", ");

    QString penColor = file.readLine().remove(0, 10);
    QString tempWidth = file.readLine().remove(0, 10);
    int penWidth = tempWidth.toInt();
    QString penStyle = file.readLine().remove(0, 10);
    QString penCapStyle = file.readLine().remove(0, 13);
    QString penJoinStyle = file.readLine().remove(0, 14);
    QString brushColor = file.readLine().remove(0, 12);
    QString brushStyle = file.readLine().remove(0, 12);

    square *tempSquare = new square();
    tempSquare->setPoints(dimensions[0].toInt(), dimensions[1].toInt(), dimensions[2].toInt());

    tempSquare->set_ShapeId(ShapeID);

    tempSquare->set_pen(stringToColor(penColor), penWidth, stringToPenStyle(penStyle),
                        stringToPenCapStyle(penCapStyle), stringToPenJoinStyle(penJoinStyle),
                        penColor, penStyle, penCapStyle, penJoinStyle);

    tempSquare->set_brush(stringToColor(brushColor), stringToBrushStyle(brushStyle), brushColor, brushStyle);

    return tempSquare;
}

ellipse* ParseEllipse(QTextStream &file, int ShapeID)
{
    QStringList dimensions = file.readLine().remove(0, 17).split(", ");

    QString penColor = file.readLine().remove(0, 10);
    QString tempWidth = file.readLine().remove(0, 10);
    int penWidth = tempWidth.toInt();
    QString penStyle = file.readLine().remove(0, 10);
    QString penCapStyle = file.readLine().remove(0, 13);
    QString penJoinStyle = file.readLine().remove(0, 14);
    QString brushColor = file.readLine().remove(0, 12);
    QString brushStyle = file.readLine().remove(0, 12);

    ellipse *tempEllipse = new ellipse(dimensions[0].toInt(), dimensions[1].toInt(), dimensions[2].toInt(), dimensions[3].toInt());

    tempEllipse->set_ShapeId(ShapeID);

    tempEllipse->set_pen(stringToColor(penColor), penWidth, stringToPenStyle(penStyle),
                         stringToPenCapStyle(penCapStyle), stringToPenJoinStyle(penJoinStyle),
                         penColor, penStyle, penCapStyle, penJoinStyle);

    tempEllipse->set_brush(stringToColor(brushColor), stringToBrushStyle(brushStyle), brushColor, brushStyle);

    return tempEllipse;
}

circle* ParseCircle(QTextStream &file, int ShapeID)
{
    QStringList dimensions = file.readLine().remove(0, 17).split(", ");

    QString penColor = file.readLine().remove(0, 10);
    QString tempWidth = file.readLine().remove(0, 10);
    int penWidth = tempWidth.toInt();
    QString penStyle = file.readLine().remove(0, 10);
    QString penCapStyle = file.readLine().remove(0, 13);
    QString penJoinStyle = file.readLine().remove(0, 14);
    QString brushColor = file.readLine().remove(0, 12);
    QString brushStyle = file.readLine().remove(0, 12);

    circle *tempCircle = new circle();

    tempCircle->setPoints(dimensions[0].toInt(), dimensions[1].toInt(), dimensions[2].toInt());

    tempCircle->set_ShapeId(ShapeID);

    tempCircle->set_pen(stringToColor(penColor), penWidth, stringToPenStyle(penStyle),
                        stringToPenCapStyle(penCapStyle), stringToPenJoinStyle(penJoinStyle),
                        penColor, penStyle, penCapStyle, penJoinStyle);

    tempCircle->set_brush(stringToColor(brushColor), stringToBrushStyle(brushStyle), brushColor, brushStyle);

    return tempCircle;
}

text* ParseText(QTextStream &file, int ShapeID)
{
    text *tempText = new text();

    tempText->set_ShapeId(ShapeID);

    QStringList dimensions = file.readLine().remove(0, 17).split(", ");
    QString textString = file.readLine().remove(0, 12);
    QString textColor = file.readLine().remove(0, 11);
    QString textAlignment = file.readLine().remove(0, 15);
    QString tempPointSize = file.readLine().remove(0, 15);
    int pointSize = tempPointSize.toInt();
    QString textFontFamily = file.readLine().remove(0, 16);
    QString textFontStyle = file.readLine().remove(0, 15);
    QString textFontWeight = file.readLine().remove(0, 16);

   // QRect tempRect(dimensions[0].toInt(), dimensions[1].toInt(), dimensions[2].toInt(), dimensions[3].toInt());

    tempText->setPoints(dimensions[0].toInt(), dimensions[1].toInt(), dimensions[2].toInt(), dimensions[3].toInt());

    tempText->set_pen(stringToColor(textColor), textColor);

    tempText->set_text(textString, stringToColor(textColor), stringToAlignment(textAlignment), pointSize,
                       textFontFamily, stringToTextFontStyle(textFontStyle), stringToTextFontWeight(textFontWeight),
                       textString, textColor, textAlignment, textFontFamily, textFontStyle, textFontWeight);
    return tempText;
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

Qt::BrushStyle stringToBrushStyle(QString line)
{
    if(line == "SolidPattern")
        return Qt::BrushStyle::SolidPattern;
    else if (line == "HorPattern")
        return Qt::BrushStyle::HorPattern;
    else if (line == "VerPattern")
        return Qt::BrushStyle::VerPattern;
    else if (line == "NoBrush")
        return Qt::BrushStyle::NoBrush;
}

Qt::AlignmentFlag stringToAlignment(QString line)
{
    if(line == "AlignLeft")
    {
        return Qt::AlignLeft;
    }
    else if(line == "AlignRight")
    {
        return Qt::AlignRight;
    }
    else if(line == "AlignTop")
    {
        return Qt::AlignTop;
    }
    else if(line == "AlignBottom")
    {
        return Qt::AlignBottom;
    }
    else if(line == "AlignCenter")
    {
        return Qt::AlignCenter;
    }
}

QFont::Style stringToTextFontStyle(QString line)
{
    if(line == "StyleNormal")
    {
        return QFont::Style::StyleNormal;
    }
    else if(line == "StyleItalic")
    {
        return QFont::Style::StyleItalic;
    }
    else if(line == "StyleOblique")
    {
        return QFont::Style::StyleOblique;
    }
}

QFont::Weight stringToTextFontWeight(QString line)
{
    if(line == "Thin")
    {
        return QFont::Weight::Thin;
    }
    else if(line == "Light")
    {
        return QFont::Weight::Light;
    }
    else if(line == "Normal")
    {
        return QFont::Weight::Normal;
    }
    else if(line == "Bold")
    {
        return QFont::Weight::Bold;
    }
}
