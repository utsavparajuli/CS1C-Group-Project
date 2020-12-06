#include "DrawingWidget.h"
#include "saveFile.h"

// DRAWS ALL SHAPES
void DrawingWidget::paintEvent(QPaintEvent*)
{
    QPaintDevice *device = this;
    for(int i = 0; i < shapeVector->size(); i++)
        (*shapeVector)[i]->draw(device);
}

DrawingWidget::DrawingWidget(QWidget *parent)
    :QWidget(parent)
{
    QString file = "shapes.txt";
    shapeVector = parser(file);
}

DrawingWidget::~DrawingWidget()
{
    saveFile(*shapeVector, "shapes.txt");
}

custom::vector<shape*>* DrawingWidget::getVec()
{
    return shapeVector;
}
