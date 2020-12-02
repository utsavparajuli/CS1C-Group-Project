#include "addupdateshape.h"
#include "ui_addupdateshape.h"
#include <QMessageBox>

AddUpdateShape::AddUpdateShape(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddUpdateShape)
{
    ui->setupUi(this);

    //Shape Type Combo Box
    ui->ShapeTypeEntry->addItem("Line");
    ui->ShapeTypeEntry->addItem("Polyline");
    ui->ShapeTypeEntry->addItem("Polygon");
    ui->ShapeTypeEntry->addItem("Rectangle");
    ui->ShapeTypeEntry->addItem("Square");
    ui->ShapeTypeEntry->addItem("Ellipse");
    ui->ShapeTypeEntry->addItem("Circle");
    ui->ShapeTypeEntry->addItem("Text");

    //Pen Color Combo Box

    ui->PenColorEntry->addItem("white");
    ui->PenColorEntry->addItem("black");
    ui->PenColorEntry->addItem("red");
    ui->PenColorEntry->addItem("green");
    ui->PenColorEntry->addItem("blue");
    ui->PenColorEntry->addItem("cyan");
    ui->PenColorEntry->addItem("magenta");
    ui->PenColorEntry->addItem("yellow");
    ui->PenColorEntry->addItem("gray");

    ui->PenStyleEntry->addItem("NoPen");
    ui->PenStyleEntry->addItem("SolidLine");
    ui->PenStyleEntry->addItem("DashLine");
    ui->PenStyleEntry->addItem("DotLine");
    ui->PenStyleEntry->addItem("DashDotLine");
    ui->PenStyleEntry->addItem("DashDotDotLine");

    ui->PenCapStyleEntry->addItem("FlatCap");
    ui->PenCapStyleEntry->addItem("SquareCap");
    ui->PenCapStyleEntry->addItem("RoundCap");

    ui->PenJoinStyleEntry->addItem("MiterJoin");
    ui->PenJoinStyleEntry->addItem("BevelJoin");
    ui->PenJoinStyleEntry->addItem("RoundJoin");

    ui->BrushColorEntry->addItem("white");
    ui->BrushColorEntry->addItem("black");
    ui->BrushColorEntry->addItem("red");
    ui->BrushColorEntry->addItem("green");
    ui->BrushColorEntry->addItem("blue");
    ui->BrushColorEntry->addItem("cyan");
    ui->BrushColorEntry->addItem("magenta");
    ui->BrushColorEntry->addItem("yellow");
    ui->BrushColorEntry->addItem("gray");

    ui->BrushStyleEntry->addItem("SolidPattern");
    ui->BrushStyleEntry->addItem("HorPattern");
    ui->BrushStyleEntry->addItem("VerPattern");
    ui->BrushStyleEntry->addItem("NoBrush");

    ui->TextColorEntry->addItem("white");
    ui->TextColorEntry->addItem("black");
    ui->TextColorEntry->addItem("red");
    ui->TextColorEntry->addItem("green");
    ui->TextColorEntry->addItem("blue");
    ui->TextColorEntry->addItem("cyan");
    ui->TextColorEntry->addItem("magenta");
    ui->TextColorEntry->addItem("yellow");
    ui->TextColorEntry->addItem("gray");

    ui->TextAlignmentEntry->addItem("AlignLeft");
    ui->TextAlignmentEntry->addItem("AlignRight");
    ui->TextAlignmentEntry->addItem("AlignTop");
    ui->TextAlignmentEntry->addItem("AlignBottom");
    ui->TextAlignmentEntry->addItem("AlignCenter");

    ui->FontEntry->addItem("Comic Sans MS");
    ui->FontEntry->addItem("Courier");
    ui->FontEntry->addItem("Helvetica");
    ui->FontEntry->addItem("Times");

    ui->FontStyleEntry->addItem("StyleNormal");
    ui->FontStyleEntry->addItem("StyleItalic");
    ui->FontStyleEntry->addItem("StyleOblique");

    ui->FontWeightEntry->addItem("Thin");
    ui->FontWeightEntry->addItem("Light");
    ui->FontWeightEntry->addItem("Normal");
    ui->FontWeightEntry->addItem("Bold");

    ui->ShapeEntry->addItem("hello");
}

AddUpdateShape::~AddUpdateShape()
{
    delete ui;
}

void AddUpdateShape::setTitle(QString newTitle)
{
    ui->AddUpdateTitle->setText(newTitle);
}

void AddUpdateShape::on_ShapeTypeEntry_currentIndexChanged(int index)
{
    switch(index)
    {
    case 0 : setLineEnabled();
             break;
    case 1 : setPolylineEnabled();
             break;
    case 2 : setPolygonEnabled();
             break;
    case 3 : setRectangleEnabled();
             break;
    case 4 : setSquareEnabled();
             break;
    case 5 : setEllipseEnabled();
             break;
    case 6 : setCircleEnabled();
             break;
    case 7 : setTextEnabled();
    };
}

void AddUpdateShape::setLineEnabled()
{
    ui->PenColorEntry->setEnabled(true);
    ui->PenWidthEntry->setEnabled(true);
    ui->PenStyleEntry->setEnabled(true);
    ui->PenCapStyleEntry->setEnabled(true);
    ui->PenJoinStyleEntry->setEnabled(true);
    ui->BrushColorEntry->setEnabled(false);
    ui->BrushStyleEntry->setEnabled(false);
    ui->TextStringEntry->setEnabled(false);
    ui->TextColorEntry->setEnabled(false);
    ui->TextAlignmentEntry->setEnabled(false);
    ui->TextSizeEntry->setEnabled(false);
    ui->FontEntry->setEnabled(false);
    ui->FontStyleEntry->setEnabled(false);
    ui->FontWeightEntry->setEnabled(false);
}

void AddUpdateShape::setPolylineEnabled()
{
    ui->PenColorEntry->setEnabled(true);
    ui->PenWidthEntry->setEnabled(true);
    ui->PenStyleEntry->setEnabled(true);
    ui->PenCapStyleEntry->setEnabled(true);
    ui->PenJoinStyleEntry->setEnabled(true);
    ui->BrushColorEntry->setEnabled(false);
    ui->BrushStyleEntry->setEnabled(false);
    ui->TextStringEntry->setEnabled(false);
    ui->TextColorEntry->setEnabled(false);
    ui->TextAlignmentEntry->setEnabled(false);
    ui->TextSizeEntry->setEnabled(false);
    ui->FontEntry->setEnabled(false);
    ui->FontStyleEntry->setEnabled(false);
    ui->FontWeightEntry->setEnabled(false);
}

void AddUpdateShape::setPolygonEnabled()
{
    ui->PenColorEntry->setEnabled(true);
    ui->PenWidthEntry->setEnabled(true);
    ui->PenStyleEntry->setEnabled(true);
    ui->PenCapStyleEntry->setEnabled(true);
    ui->PenJoinStyleEntry->setEnabled(true);
    ui->BrushColorEntry->setEnabled(true);
    ui->BrushStyleEntry->setEnabled(true);
    ui->TextStringEntry->setEnabled(false);
    ui->TextColorEntry->setEnabled(false);
    ui->TextAlignmentEntry->setEnabled(false);
    ui->TextSizeEntry->setEnabled(false);
    ui->FontEntry->setEnabled(false);
    ui->FontStyleEntry->setEnabled(false);
    ui->FontWeightEntry->setEnabled(false);
}

void AddUpdateShape::setRectangleEnabled()
{
    ui->PenColorEntry->setEnabled(true);
    ui->PenWidthEntry->setEnabled(true);
    ui->PenStyleEntry->setEnabled(true);
    ui->PenCapStyleEntry->setEnabled(true);
    ui->PenJoinStyleEntry->setEnabled(true);
    ui->BrushColorEntry->setEnabled(true);
    ui->BrushStyleEntry->setEnabled(true);
    ui->TextStringEntry->setEnabled(false);
    ui->TextColorEntry->setEnabled(false);
    ui->TextAlignmentEntry->setEnabled(false);
    ui->TextSizeEntry->setEnabled(false);
    ui->FontEntry->setEnabled(false);
    ui->FontStyleEntry->setEnabled(false);
    ui->FontWeightEntry->setEnabled(false);
}

void AddUpdateShape::setSquareEnabled()
{
    ui->PenColorEntry->setEnabled(true);
    ui->PenWidthEntry->setEnabled(true);
    ui->PenStyleEntry->setEnabled(true);
    ui->PenCapStyleEntry->setEnabled(true);
    ui->PenJoinStyleEntry->setEnabled(true);
    ui->BrushColorEntry->setEnabled(true);
    ui->BrushStyleEntry->setEnabled(true);
    ui->TextStringEntry->setEnabled(false);
    ui->TextColorEntry->setEnabled(false);
    ui->TextAlignmentEntry->setEnabled(false);
    ui->TextSizeEntry->setEnabled(false);
    ui->FontEntry->setEnabled(false);
    ui->FontStyleEntry->setEnabled(false);
    ui->FontWeightEntry->setEnabled(false);
}

void AddUpdateShape::setEllipseEnabled()
{
    ui->PenColorEntry->setEnabled(true);
    ui->PenWidthEntry->setEnabled(true);
    ui->PenStyleEntry->setEnabled(true);
    ui->PenCapStyleEntry->setEnabled(true);
    ui->PenJoinStyleEntry->setEnabled(true);
    ui->BrushColorEntry->setEnabled(true);
    ui->BrushStyleEntry->setEnabled(true);
    ui->TextStringEntry->setEnabled(false);
    ui->TextColorEntry->setEnabled(false);
    ui->TextAlignmentEntry->setEnabled(false);
    ui->TextSizeEntry->setEnabled(false);
    ui->FontEntry->setEnabled(false);
    ui->FontStyleEntry->setEnabled(false);
    ui->FontWeightEntry->setEnabled(false);
}

void AddUpdateShape::setCircleEnabled()
{
    ui->PenColorEntry->setEnabled(true);
    ui->PenWidthEntry->setEnabled(true);
    ui->PenStyleEntry->setEnabled(true);
    ui->PenCapStyleEntry->setEnabled(true);
    ui->PenJoinStyleEntry->setEnabled(true);
    ui->BrushColorEntry->setEnabled(true);
    ui->BrushStyleEntry->setEnabled(true);
    ui->TextStringEntry->setEnabled(false);
    ui->TextColorEntry->setEnabled(false);
    ui->TextAlignmentEntry->setEnabled(false);
    ui->TextSizeEntry->setEnabled(false);
    ui->FontEntry->setEnabled(false);
    ui->FontStyleEntry->setEnabled(false);
    ui->FontWeightEntry->setEnabled(false);
}

void AddUpdateShape::setTextEnabled()
{
    ui->PenColorEntry->setEnabled(false);
    ui->PenWidthEntry->setEnabled(false);
    ui->PenStyleEntry->setEnabled(false);
    ui->PenCapStyleEntry->setEnabled(false);
    ui->PenJoinStyleEntry->setEnabled(false);
    ui->BrushColorEntry->setEnabled(false);
    ui->BrushStyleEntry->setEnabled(false);
    ui->TextStringEntry->setEnabled(true);
    ui->TextColorEntry->setEnabled(true);
    ui->TextAlignmentEntry->setEnabled(true);
    ui->TextSizeEntry->setEnabled(true);
    ui->FontEntry->setEnabled(true);
    ui->FontStyleEntry->setEnabled(true);
    ui->FontWeightEntry->setEnabled(true);
}


void AddUpdateShape::on_HelpButton_clicked()
{
    QMessageBox helpBox;
    helpBox.setText("Shape Dimensions Instructions\n\nLine - x1, y1, x2, "
                    "y2 [x2 points]\nPolyline - x1, y1, x2, y2, x3, y3, ... , "
                    "xN, yN [sequence of N points]\nPolygon - x1, y1, x2, y2, "
                    "x3, y3, ... , xN, yN [sequence of N points]\nRectangle - x1,"
                    " y1, l, w [x1, y1: top left, l: length, w: width]\nSquare"
                    " - x1, y1, l [x1, y1: top left, l: length]\nEllipse - x1, "
                    "y1, a, b [x1, y1: top left, a: semi major axis, b: semi min"
                    "or axis]\nCircle - x1, y1, r [x1, y1: top left, r: radius]\n"
                    "Text - x1, y1, l, w [x1, y1: top left, l: length, w: width "
                    "... defines a bounding rectangle]");
    helpBox.exec();
}
