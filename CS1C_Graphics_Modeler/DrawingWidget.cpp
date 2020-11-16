#include "DrawingWidget.h"


// DRAWS ALL SHAPES
void DrawingWidget::paintEvent(QPaintEvent*)
{
    for(int i = 0; i < shapeVector->size(); i++)
        (*shapeVector)[i]->draw(1, 1);
}

DrawingWidget::DrawingWidget(QWidget *parent)
    :QWidget(parent)
{
    QString file = "shapes.txt";
    shapeVector = parser(file, this);

}
