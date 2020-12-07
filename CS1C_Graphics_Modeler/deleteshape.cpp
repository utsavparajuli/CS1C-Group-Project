#include "deleteshape.h"
#include "ui_deleteshape.h"
//custom::vector<shape*>*, QWidget *parent = nullptr
deleteShape::deleteShape(custom::vector<shape*> *vec, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deleteShape),
    shapeVector(vec)
{
    ui->setupUi(this);

    //Shapes combo box
    for(int i = 0; i < shapeVector->size(); i++)
    {
        ui->deleteShapeEntry->addItem((*shapeVector)[i]->construct_ID_String("Shape", (*shapeVector)[i]->getID()));
    }
}

deleteShape::~deleteShape()
{
    delete ui;
}

void deleteShape::on_deleteShapeCancelButton_clicked()
{
    this->close();
}

void deleteShape::on_deleteShapeDeleteButton_clicked()
{
    shapeVector->erase(shapeVector->begin() + ui->deleteShapeEntry->currentIndex());
    this->close();
}
