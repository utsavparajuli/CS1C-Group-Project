 #ifndef DRAWINGWIDGET_H
#define DRAWINGWIDGET_H

#include <QWidget>
#include <QPainter>
#include <QDebug>
#include "line.h"
#include "vector.h"
#include "parser.h"

class DrawingWidget : public QWidget
{
public:
    explicit DrawingWidget(QWidget *parent = nullptr);
    custom::vector<shape*>* getVec();
    ~DrawingWidget();

protected:
    void paintEvent(QPaintEvent *event);

private:
    custom::vector<shape*>* shapeVector;
};

#endif // DRAWINGWIDGET_H
