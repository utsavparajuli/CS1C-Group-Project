#include "DrawingWidget.h"
#include <QPainter>

void DrawingWidget::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    painter.drawLine(10, 10, 100, 100);
}
