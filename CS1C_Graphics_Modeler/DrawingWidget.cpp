#include "DrawingWidget.h"
#include <QPainter>
#include <QDebug>

void DrawingWidget::paintEvent(QPaintEvent*)
{
    QPainter painter(this);
    //painter.drawLine(100, 100, 200, 100);
    //painter.drawLine(100, 120, 200, 120);
}

DrawingWidget::DrawingWidget(QWidget *parent)
    :QWidget(parent)
{

}
