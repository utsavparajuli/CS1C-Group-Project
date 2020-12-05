#include "addupdateshape.h"
#include "ui_addupdateshape.h"
#include <QMessageBox>
#include "parser.h"
//custom::vector<shape*>&, QWidget *parent = nullptr
AddUpdateShape::AddUpdateShape(custom::vector<shape*> *vec, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddUpdateShape),
    shapeVector{vec}
{
    ui->setupUi(this);

    //Shapes combo box
    for(int i = 0; i < shapeVector->size(); i++)
    {
        ui->ShapesEntry->addItem((*shapeVector)[i]->construct_ID_String("Shape", (*shapeVector)[i]->getID()));
    }

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

    on_ShapesEntry_currentIndexChanged(0);

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
    ui->PenColorEntry->setVisible(true);
    ui->PenWidthEntry->setVisible(true);
    ui->PenStyleEntry->setVisible(true);
    ui->PenCapStyleEntry->setVisible(true);
    ui->PenJoinStyleEntry->setVisible(true);
    ui->BrushColorEntry->setVisible(false);
    ui->BrushStyleEntry->setVisible(false);
    ui->TextStringEntry->setVisible(false);
    ui->TextColorEntry->setVisible(false);
    ui->TextAlignmentEntry->setVisible(false);
    ui->TextSizeEntry->setVisible(false);
    ui->FontEntry->setVisible(false);
    ui->FontStyleEntry->setVisible(false);
    ui->FontWeightEntry->setVisible(false);

    ui->PenColorLabel->setVisible(true);
    ui->PenWidthLabel->setVisible(true);
    ui->PenStyleLabel->setVisible(true);
    ui->PenCapStyleLabel->setVisible(true);
    ui->PenJoinStyleLabel->setVisible(true);
    ui->BrushColorLabel->setVisible(false);
    ui->BrushStyleLabel->setVisible(false);
    ui->TextStringLabel->setVisible(false);
    ui->TextColorLabel->setVisible(false);
    ui->TextAlignmentLabel->setVisible(false);
    ui->TextSizeLabel->setVisible(false);
    ui->FontLabel->setVisible(false);
    ui->FontStyleLabel->setVisible(false);
    ui->FontWeightLabel->setVisible(false);
}

void AddUpdateShape::setPolylineEnabled()
{
    ui->PenColorEntry->setVisible(true);
    ui->PenWidthEntry->setVisible(true);
    ui->PenStyleEntry->setVisible(true);
    ui->PenCapStyleEntry->setVisible(true);
    ui->PenJoinStyleEntry->setVisible(true);
    ui->BrushColorEntry->setVisible(false);
    ui->BrushStyleEntry->setVisible(false);
    ui->TextStringEntry->setVisible(false);
    ui->TextColorEntry->setVisible(false);
    ui->TextAlignmentEntry->setVisible(false);
    ui->TextSizeEntry->setVisible(false);
    ui->FontEntry->setVisible(false);
    ui->FontStyleEntry->setVisible(false);
    ui->FontWeightEntry->setVisible(false);

    ui->PenColorLabel->setVisible(true);
    ui->PenWidthLabel->setVisible(true);
    ui->PenStyleLabel->setVisible(true);
    ui->PenCapStyleLabel->setVisible(true);
    ui->PenJoinStyleLabel->setVisible(true);
    ui->BrushColorLabel->setVisible(false);
    ui->BrushStyleLabel->setVisible(false);
    ui->TextStringLabel->setVisible(false);
    ui->TextColorLabel->setVisible(false);
    ui->TextAlignmentLabel->setVisible(false);
    ui->TextSizeLabel->setVisible(false);
    ui->FontLabel->setVisible(false);
    ui->FontStyleLabel->setVisible(false);
    ui->FontWeightLabel->setVisible(false);
}

void AddUpdateShape::setPolygonEnabled()
{
    ui->PenColorEntry->setVisible(true);
    ui->PenWidthEntry->setVisible(true);
    ui->PenStyleEntry->setVisible(true);
    ui->PenCapStyleEntry->setVisible(true);
    ui->PenJoinStyleEntry->setVisible(true);
    ui->BrushColorEntry->setVisible(true);
    ui->BrushStyleEntry->setVisible(true);
    ui->TextStringEntry->setVisible(false);
    ui->TextColorEntry->setVisible(false);
    ui->TextAlignmentEntry->setVisible(false);
    ui->TextSizeEntry->setVisible(false);
    ui->FontEntry->setVisible(false);
    ui->FontStyleEntry->setVisible(false);
    ui->FontWeightEntry->setVisible(false);

    ui->PenColorLabel->setVisible(true);
    ui->PenWidthLabel->setVisible(true);
    ui->PenStyleLabel->setVisible(true);
    ui->PenCapStyleLabel->setVisible(true);
    ui->PenJoinStyleLabel->setVisible(true);
    ui->BrushColorLabel->setVisible(true);
    ui->BrushStyleLabel->setVisible(true);
    ui->TextStringLabel->setVisible(false);
    ui->TextColorLabel->setVisible(false);
    ui->TextAlignmentLabel->setVisible(false);
    ui->TextSizeLabel->setVisible(false);
    ui->FontLabel->setVisible(false);
    ui->FontStyleLabel->setVisible(false);
    ui->FontWeightLabel->setVisible(false);
}

void AddUpdateShape::setRectangleEnabled()
{
    ui->PenColorEntry->setVisible(true);
    ui->PenWidthEntry->setVisible(true);
    ui->PenStyleEntry->setVisible(true);
    ui->PenCapStyleEntry->setVisible(true);
    ui->PenJoinStyleEntry->setVisible(true);
    ui->BrushColorEntry->setVisible(true);
    ui->BrushStyleEntry->setVisible(true);
    ui->TextStringEntry->setVisible(false);
    ui->TextColorEntry->setVisible(false);
    ui->TextAlignmentEntry->setVisible(false);
    ui->TextSizeEntry->setVisible(false);
    ui->FontEntry->setVisible(false);
    ui->FontStyleEntry->setVisible(false);
    ui->FontWeightEntry->setVisible(false);

    ui->PenColorLabel->setVisible(true);
    ui->PenWidthLabel->setVisible(true);
    ui->PenStyleLabel->setVisible(true);
    ui->PenCapStyleLabel->setVisible(true);
    ui->PenJoinStyleLabel->setVisible(true);
    ui->BrushColorLabel->setVisible(true);
    ui->BrushStyleLabel->setVisible(true);
    ui->TextStringLabel->setVisible(false);
    ui->TextColorLabel->setVisible(false);
    ui->TextAlignmentLabel->setVisible(false);
    ui->TextSizeLabel->setVisible(false);
    ui->FontLabel->setVisible(false);
    ui->FontStyleLabel->setVisible(false);
    ui->FontWeightLabel->setVisible(false);
}

void AddUpdateShape::setSquareEnabled()
{
    ui->PenColorEntry->setVisible(true);
    ui->PenWidthEntry->setVisible(true);
    ui->PenStyleEntry->setVisible(true);
    ui->PenCapStyleEntry->setVisible(true);
    ui->PenJoinStyleEntry->setVisible(true);
    ui->BrushColorEntry->setVisible(true);
    ui->BrushStyleEntry->setVisible(true);
    ui->TextStringEntry->setVisible(false);
    ui->TextColorEntry->setVisible(false);
    ui->TextAlignmentEntry->setVisible(false);
    ui->TextSizeEntry->setVisible(false);
    ui->FontEntry->setVisible(false);
    ui->FontStyleEntry->setVisible(false);
    ui->FontWeightEntry->setVisible(false);

    ui->PenColorLabel->setVisible(true);
    ui->PenWidthLabel->setVisible(true);
    ui->PenStyleLabel->setVisible(true);
    ui->PenCapStyleLabel->setVisible(true);
    ui->PenJoinStyleLabel->setVisible(true);
    ui->BrushColorLabel->setVisible(true);
    ui->BrushStyleLabel->setVisible(true);
    ui->TextStringLabel->setVisible(false);
    ui->TextColorLabel->setVisible(false);
    ui->TextAlignmentLabel->setVisible(false);
    ui->TextSizeLabel->setVisible(false);
    ui->FontLabel->setVisible(false);
    ui->FontStyleLabel->setVisible(false);
    ui->FontWeightLabel->setVisible(false);
}

void AddUpdateShape::setEllipseEnabled()
{
    ui->PenColorEntry->setVisible(true);
    ui->PenWidthEntry->setVisible(true);
    ui->PenStyleEntry->setVisible(true);
    ui->PenCapStyleEntry->setVisible(true);
    ui->PenJoinStyleEntry->setVisible(true);
    ui->BrushColorEntry->setVisible(true);
    ui->BrushStyleEntry->setVisible(true);
    ui->TextStringEntry->setVisible(false);
    ui->TextColorEntry->setVisible(false);
    ui->TextAlignmentEntry->setVisible(false);
    ui->TextSizeEntry->setVisible(false);
    ui->FontEntry->setVisible(false);
    ui->FontStyleEntry->setVisible(false);
    ui->FontWeightEntry->setVisible(false);

    ui->PenColorLabel->setVisible(true);
    ui->PenWidthLabel->setVisible(true);
    ui->PenStyleLabel->setVisible(true);
    ui->PenCapStyleLabel->setVisible(true);
    ui->PenJoinStyleLabel->setVisible(true);
    ui->BrushColorLabel->setVisible(true);
    ui->BrushStyleLabel->setVisible(true);
    ui->TextStringLabel->setVisible(false);
    ui->TextColorLabel->setVisible(false);
    ui->TextAlignmentLabel->setVisible(false);
    ui->TextSizeLabel->setVisible(false);
    ui->FontLabel->setVisible(false);
    ui->FontStyleLabel->setVisible(false);
    ui->FontWeightLabel->setVisible(false);
}

void AddUpdateShape::setCircleEnabled()
{
    ui->PenColorEntry->setVisible(true);
    ui->PenWidthEntry->setVisible(true);
    ui->PenStyleEntry->setVisible(true);
    ui->PenCapStyleEntry->setVisible(true);
    ui->PenJoinStyleEntry->setVisible(true);
    ui->BrushColorEntry->setVisible(true);
    ui->BrushStyleEntry->setVisible(true);
    ui->TextStringEntry->setVisible(false);
    ui->TextColorEntry->setVisible(false);
    ui->TextAlignmentEntry->setVisible(false);
    ui->TextSizeEntry->setVisible(false);
    ui->FontEntry->setVisible(false);
    ui->FontStyleEntry->setVisible(false);
    ui->FontWeightEntry->setVisible(false);

    ui->PenColorLabel->setVisible(true);
    ui->PenWidthLabel->setVisible(true);
    ui->PenStyleLabel->setVisible(true);
    ui->PenCapStyleLabel->setVisible(true);
    ui->PenJoinStyleLabel->setVisible(true);
    ui->BrushColorLabel->setVisible(true);
    ui->BrushStyleLabel->setVisible(true);
    ui->TextStringLabel->setVisible(false);
    ui->TextColorLabel->setVisible(false);
    ui->TextAlignmentLabel->setVisible(false);
    ui->TextSizeLabel->setVisible(false);
    ui->FontLabel->setVisible(false);
    ui->FontStyleLabel->setVisible(false);
    ui->FontWeightLabel->setVisible(false);
}

void AddUpdateShape::setTextEnabled()
{
    ui->PenColorEntry->setVisible(false);
    ui->PenWidthEntry->setVisible(false);
    ui->PenStyleEntry->setVisible(false);
    ui->PenCapStyleEntry->setVisible(false);
    ui->PenJoinStyleEntry->setVisible(false);
    ui->BrushColorEntry->setVisible(false);
    ui->BrushStyleEntry->setVisible(false);
    ui->TextStringEntry->setVisible(true);
    ui->TextColorEntry->setVisible(true);
    ui->TextAlignmentEntry->setVisible(true);
    ui->TextSizeEntry->setVisible(true);
    ui->FontEntry->setVisible(true);
    ui->FontStyleEntry->setVisible(true);
    ui->FontWeightEntry->setVisible(true);

    ui->PenColorLabel->setVisible(false);
    ui->PenWidthLabel->setVisible(false);
    ui->PenStyleLabel->setVisible(false);
    ui->PenCapStyleLabel->setVisible(false);
    ui->PenJoinStyleLabel->setVisible(false);
    ui->BrushColorLabel->setVisible(false);
    ui->BrushStyleLabel->setVisible(false);
    ui->TextStringLabel->setVisible(true);
    ui->TextColorLabel->setVisible(true);
    ui->TextAlignmentLabel->setVisible(true);
    ui->TextSizeLabel->setVisible(true);
    ui->FontLabel->setVisible(true);
    ui->FontStyleLabel->setVisible(true);
    ui->FontWeightLabel->setVisible(true);
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

void AddUpdateShape::addShapeSetup()
{
    ui->AddUpdateTitle->setText("Add Shape");
    ui->ShapesEntry->setEnabled(false);
    ui->ShapeTypeEntry->setEnabled(true);
    ui->ShapeDimensionsEntry->setEnabled(true);
    ui->XCordEntry->setEnabled(false);
    ui->YCordEntry->setEnabled(false);
}

void AddUpdateShape::updateShapeSetup()
{
    ui->AddUpdateTitle->setText("Update Shape");
    ui->ShapesEntry->setEnabled(true);
    ui->ShapeTypeEntry->setEnabled(false);
    ui->ShapeDimensionsEntry->setEnabled(false);
    ui->XCordEntry->setEnabled(true);
    ui->YCordEntry->setEnabled(true);
}

void AddUpdateShape::on_ShapesEntry_currentIndexChanged(int index)
{
    switch((*shapeVector)[index]->get_shape())
    {
    case ShapeType::Line      :
    case ShapeType::Polyline  :fillLineEntry(index);
                               break;
    case ShapeType::Polygon   :
    case ShapeType::Rectangle :
    case ShapeType::Square    :
    case ShapeType::Ellipse   :
    case ShapeType::Circle    :fillShapeEntry(index);
                               break;
    default :                  fillTextEntry(index);
    };
}

void AddUpdateShape::fillLineEntry(int i)
{
    ui->ShapeIdEntry->setValue((*shapeVector)[i]->getID());
    ui->ShapeTypeEntry->setCurrentIndex(shapeToInt((*shapeVector)[i]->get_shape()));

    ui->XCordEntry->setValue((*shapeVector)[i]->get_cords().x());
    ui->YCordEntry->setValue((*shapeVector)[i]->get_cords().y());

    fillPenValues(i);
    fillBrushValues(i);

    ui->PenWidthEntry->setValue((*shapeVector)[i]->get_pen().width());
}

void AddUpdateShape::fillShapeEntry(int i)
{
    ui->ShapeIdEntry->setValue((*shapeVector)[i]->getID());
    ui->ShapeTypeEntry->setCurrentIndex(shapeToInt((*shapeVector)[i]->get_shape()));

    fillPenValues(i);
    fillBrushValues(i);

    ui->PenWidthEntry->setValue((*shapeVector)[i]->get_pen().width());
}

void AddUpdateShape::fillTextEntry(int i)
{
    ui->ShapeIdEntry->setValue((*shapeVector)[i]->getID());
    ui->ShapeTypeEntry->setCurrentIndex(shapeToInt((*shapeVector)[i]->get_shape()));

    fillTextValues(i);
}

void AddUpdateShape::fillPenValues(int i)
{
    //Setting pen color entry
    int index = 0;
    while(index < ui->PenColorEntry->count() && ui->PenColorEntry->itemText(index) != (*shapeVector)[i]->get_penColorString())
        index++;
    ui->PenColorEntry->setCurrentIndex(index);

    //Setting pen style entry
    index = 0;
    while(index < ui->PenStyleEntry->count() && ui->PenStyleEntry->itemText(index) != (*shapeVector)[i]->get_penStyleString())
        index++;
    ui->PenStyleEntry->setCurrentIndex(index);

    //Setting cap style entry
    index = 0;
    while(index < ui->PenCapStyleEntry->count() && ui->PenCapStyleEntry->itemText(index) != (*shapeVector)[i]->get_penCapStyleString())
        index++;
    ui->PenCapStyleEntry->setCurrentIndex(index);

    //Setting join style entry
    index = 0;
    while(index < ui->PenJoinStyleEntry->count() && ui->PenJoinStyleEntry->itemText(index) != (*shapeVector)[i]->get_penJoinStyleString())
        index++;
    ui->PenJoinStyleEntry->setCurrentIndex(index);
}

void AddUpdateShape::fillBrushValues(int i)
{
    //Setting brush color entry
    int index = 0;
    while(index < ui->BrushColorEntry->count() && ui->BrushColorEntry->itemText(index) != (*shapeVector)[i]->get_brushColorString())
        index++;
    ui->BrushColorEntry->setCurrentIndex(index);

    //Setting brush style entry
    index = 0;
    while(index < ui->BrushStyleEntry->count() && ui->BrushStyleEntry->itemText(index) != (*shapeVector)[i]->get_brushStyleString())
        index++;
    ui->BrushStyleEntry->setCurrentIndex(index);
}

void AddUpdateShape::fillTextValues(int i)
{
    //Setting text string entry
    ui->TextStringEntry->setText((*shapeVector)[i]->get_textString());

    //Setting text color entry
    int index = 0;
    while(index < ui->TextColorEntry->count() && ui->TextColorEntry->itemText(index) != (*shapeVector)[i]->get_textColor())
        index++;
    ui->TextColorEntry->setCurrentIndex(index);

    //Setting text allignment entry
    index = 0;
    while(index < ui->TextAlignmentEntry->count() && ui->TextAlignmentEntry->itemText(index) != (*shapeVector)[i]->get_textAllignment())
        index++;
    ui->TextColorEntry->setCurrentIndex(index);

    //Setting text point size
    ui->TextSizeEntry->setValue((*shapeVector)[i]->get_textPointSize());

    //Setting text font entry
    index = 0;
    while(index < ui->FontEntry->count() && ui->FontEntry->itemText(index) != (*shapeVector)[i]->get_textFont())
        index++;
    ui->FontEntry->setCurrentIndex(index);

    //Setting text font style entry
    index = 0;
    while(index < ui->FontStyleEntry->count() && ui->FontStyleEntry->itemText(index) != (*shapeVector)[i]->get_textFontStyle())
        index++;
    ui->FontStyleEntry->setCurrentIndex(index);

    //Setting text font weight entry
    index = 0;
    while(index < ui->FontWeightEntry->count() && ui->FontWeightEntry->itemText(index) != (*shapeVector)[i]->get_textFontWeight())
        index++;
    ui->FontWeightEntry->setCurrentIndex(index);
}

int AddUpdateShape::shapeToInt(ShapeType shape)
{
    switch (shape)
    {
    case ShapeType::Line      : return 0;
    case ShapeType::Polyline  : return 1;
    case ShapeType::Polygon   : return 2;
    case ShapeType::Rectangle : return 3;
    case ShapeType::Square    : return 4;
    case ShapeType::Ellipse   : return 5;
    case ShapeType::Circle    : return 6;
    default                   : return 7;
    }
}

bool AddUpdateShape::uniqueShapeID(int id)
{
    int index = 0;
    while(index != shapeVector->size())
    {
        if(id == (*shapeVector)[index]->getID())
            return false;
        index++;
    }
    return true;
}

int AddUpdateShape::getNextID()
{
    int newId = 1;
    while(!uniqueShapeID(newId))
        newId++;
    return newId;
}

void AddUpdateShape::saveUpdateShape()
{
    if(ui->ShapeIdEntry->value() == (*shapeVector)[ui->ShapesEntry->currentIndex()]->getID()
            ||(ui->ShapeIdEntry->value() != (*shapeVector)[ui->ShapesEntry->currentIndex()]->getID()
            && uniqueShapeID(ui->ShapeIdEntry->value())))
        //If the ID has not been changed OR the Id is unique (i.e. the ID is valid)
    {
        if(ui->ShapeTypeEntry->currentText() == "Line")
            updateLine();
        else if(ui->ShapeTypeEntry->currentText() == "Polyline")
            updatePolyline();
        else if(ui->ShapeTypeEntry->currentText() == "Polygon")
            updatePolygon();
        else if(ui->ShapeTypeEntry->currentText() == "Rectangle")
            updateRectangle();
        else if(ui->ShapeTypeEntry->currentText() == "Square")
            updateSquare();
        else if(ui->ShapeTypeEntry->currentText() == "Ellipse")
            updateEllipse();
        else if(ui->ShapeTypeEntry->currentText() == "Circle")
            updateCircle();
        this->close();
    }
    else
    {
        ui->ShapeIdLabel->setStyleSheet("color:red;");
        ui->ShapeIdEntry->setStyleSheet("color:red;");
        QMessageBox error;
        error.setText("ERROR - Shape ID must be unique!");
        error.exec();
    }

}

void AddUpdateShape::on_pushButton_clicked()
{
    if(ui->AddUpdateTitle->text() == "Update Shape")
    {
        saveUpdateShape();
    }
}

void AddUpdateShape::on_pushButton_2_clicked()
{
    this->close();
}
//void set_pen(Qt::GlobalColor color, int width, Qt::PenStyle penStyle, Qt::PenCapStyle penCapStyle, Qt::PenJoinStyle penJoinStyle,
//             QString newPenColorName,  QString newPenStyleName, QString newPenCapStyleName, QString newPenJoinStyleName);
void AddUpdateShape::updateLine()
{
    shape *currentShape = (*shapeVector)[ui->ShapesEntry->currentIndex()];
    currentShape->set_ShapeId(ui->ShapeIdEntry->value()); //Set ID
    currentShape->move(ui->XCordEntry->value(), ui->YCordEntry->value());
    currentShape->set_pen(stringToColor(ui->PenColorEntry->currentText()), ui->PenWidthEntry->value(),
                          stringToPenStyle(ui->PenStyleEntry->currentText()), stringToPenCapStyle(ui->PenCapStyleEntry->currentText()),
                          stringToPenJoinStyle(ui->PenJoinStyleEntry->currentText()), ui->PenColorEntry->currentText(),
                          ui->PenStyleEntry->currentText(), ui->PenCapStyleEntry->currentText(), ui->PenJoinStyleEntry->currentText());
}

void AddUpdateShape::updatePolyline()
{
    shape *currentShape = (*shapeVector)[ui->ShapesEntry->currentIndex()];
    currentShape->set_ShapeId(ui->ShapeIdEntry->value()); //Set ID
    //currentShape->move(ui->XCordEntry->value(), ui->YCordEntry->value());
    currentShape->set_pen(stringToColor(ui->PenColorEntry->currentText()), ui->PenWidthEntry->value(),
                          stringToPenStyle(ui->PenStyleEntry->currentText()), stringToPenCapStyle(ui->PenCapStyleEntry->currentText()),
                          stringToPenJoinStyle(ui->PenJoinStyleEntry->currentText()), ui->PenColorEntry->currentText(),
                          ui->PenStyleEntry->currentText(), ui->PenCapStyleEntry->currentText(), ui->PenJoinStyleEntry->currentText());
}

void AddUpdateShape::updatePolygon()
{
    shape *currentShape = (*shapeVector)[ui->ShapesEntry->currentIndex()];
    currentShape->set_ShapeId(ui->ShapeIdEntry->value()); //Set ID
    //currentShape->move(ui->XCordEntry->value(), ui->YCordEntry->value());
    currentShape->set_pen(stringToColor(ui->PenColorEntry->currentText()), ui->PenWidthEntry->value(),
                          stringToPenStyle(ui->PenStyleEntry->currentText()), stringToPenCapStyle(ui->PenCapStyleEntry->currentText()),
                          stringToPenJoinStyle(ui->PenJoinStyleEntry->currentText()), ui->PenColorEntry->currentText(),
                          ui->PenStyleEntry->currentText(), ui->PenCapStyleEntry->currentText(), ui->PenJoinStyleEntry->currentText());
    currentShape->set_brush(stringToColor(ui->BrushColorEntry->currentText()),stringToBrushStyle(ui->BrushStyleEntry->currentText()),
                            ui->BrushColorEntry->currentText(), ui->BrushStyleEntry->currentText());
}

void AddUpdateShape::updateRectangle()
{
    shape *currentShape = (*shapeVector)[ui->ShapesEntry->currentIndex()];
    currentShape->set_ShapeId(ui->ShapeIdEntry->value()); //Set ID
    //currentShape->move(ui->XCordEntry->value(), ui->YCordEntry->value());
    currentShape->set_pen(stringToColor(ui->PenColorEntry->currentText()), ui->PenWidthEntry->value(),
                          stringToPenStyle(ui->PenStyleEntry->currentText()), stringToPenCapStyle(ui->PenCapStyleEntry->currentText()),
                          stringToPenJoinStyle(ui->PenJoinStyleEntry->currentText()), ui->PenColorEntry->currentText(),
                          ui->PenStyleEntry->currentText(), ui->PenCapStyleEntry->currentText(), ui->PenJoinStyleEntry->currentText());
    currentShape->set_brush(stringToColor(ui->BrushColorEntry->currentText()),stringToBrushStyle(ui->BrushStyleEntry->currentText()),
                            ui->BrushColorEntry->currentText(), ui->BrushStyleEntry->currentText());
}

void AddUpdateShape::updateSquare()
{
    shape *currentShape = (*shapeVector)[ui->ShapesEntry->currentIndex()];
    currentShape->set_ShapeId(ui->ShapeIdEntry->value()); //Set ID
    //currentShape->move(ui->XCordEntry->value(), ui->YCordEntry->value());
    currentShape->set_pen(stringToColor(ui->PenColorEntry->currentText()), ui->PenWidthEntry->value(),
                          stringToPenStyle(ui->PenStyleEntry->currentText()), stringToPenCapStyle(ui->PenCapStyleEntry->currentText()),
                          stringToPenJoinStyle(ui->PenJoinStyleEntry->currentText()), ui->PenColorEntry->currentText(),
                          ui->PenStyleEntry->currentText(), ui->PenCapStyleEntry->currentText(), ui->PenJoinStyleEntry->currentText());
    currentShape->set_brush(stringToColor(ui->BrushColorEntry->currentText()),stringToBrushStyle(ui->BrushStyleEntry->currentText()),
                            ui->BrushColorEntry->currentText(), ui->BrushStyleEntry->currentText());
}

void AddUpdateShape::updateEllipse()
{
    shape *currentShape = (*shapeVector)[ui->ShapesEntry->currentIndex()];
    currentShape->set_ShapeId(ui->ShapeIdEntry->value()); //Set ID
    //currentShape->move(ui->XCordEntry->value(), ui->YCordEntry->value());
    currentShape->set_pen(stringToColor(ui->PenColorEntry->currentText()), ui->PenWidthEntry->value(),
                          stringToPenStyle(ui->PenStyleEntry->currentText()), stringToPenCapStyle(ui->PenCapStyleEntry->currentText()),
                          stringToPenJoinStyle(ui->PenJoinStyleEntry->currentText()), ui->PenColorEntry->currentText(),
                          ui->PenStyleEntry->currentText(), ui->PenCapStyleEntry->currentText(), ui->PenJoinStyleEntry->currentText());
    currentShape->set_brush(stringToColor(ui->BrushColorEntry->currentText()),stringToBrushStyle(ui->BrushStyleEntry->currentText()),
                            ui->BrushColorEntry->currentText(), ui->BrushStyleEntry->currentText());
}

void AddUpdateShape::updateCircle()
{
    shape *currentShape = (*shapeVector)[ui->ShapesEntry->currentIndex()];
    currentShape->set_ShapeId(ui->ShapeIdEntry->value()); //Set ID
    //currentShape->move(ui->XCordEntry->value(), ui->YCordEntry->value());
    currentShape->set_pen(stringToColor(ui->PenColorEntry->currentText()), ui->PenWidthEntry->value(),
                          stringToPenStyle(ui->PenStyleEntry->currentText()), stringToPenCapStyle(ui->PenCapStyleEntry->currentText()),
                          stringToPenJoinStyle(ui->PenJoinStyleEntry->currentText()), ui->PenColorEntry->currentText(),
                          ui->PenStyleEntry->currentText(), ui->PenCapStyleEntry->currentText(), ui->PenJoinStyleEntry->currentText());
    currentShape->set_brush(stringToColor(ui->BrushColorEntry->currentText()),stringToBrushStyle(ui->BrushStyleEntry->currentText()),
                            ui->BrushColorEntry->currentText(), ui->BrushStyleEntry->currentText());
}
