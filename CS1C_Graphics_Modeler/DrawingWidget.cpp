#include "DrawingWidget.h"
#include "saveFile.h"


// DRAWS ALL SHAPES
void DrawingWidget::paintEvent(QPaintEvent*)
{
    QPaintDevice *device = this;
    for(int i = 0; i < shapeVector->size(); i++)
        (*shapeVector)[i]->draw(device);

    qDebug() << (*shapeVector)[2]->calcArea();

//    for(int i = 0; i < shapeVector->size(); i++)
//        (*shapeVector)[i]->move(0, 0);
//    update();
}

DrawingWidget::DrawingWidget(QWidget *parent)
    :QWidget(parent)
{
    QString file = "shapes.txt";
    shapeVector = parser(file);
}

DrawingWidget::~DrawingWidget()
{
    saveFile(*shapeVector, "output.txt");
}

custom::vector<shape*>* DrawingWidget::getVec()
{
    return shapeVector;
}
