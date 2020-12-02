#ifndef ADDUPDATESHAPE_H
#define ADDUPDATESHAPE_H

#include <QDialog>
#include <QDebug>
#include "vector.h"
#include "shape.h"

namespace Ui {
class AddUpdateShape;
}

class AddUpdateShape : public QDialog
{
    Q_OBJECT

public:
    explicit AddUpdateShape(custom::vector<shape*>*, QWidget *parent = nullptr);
    void setTitle(QString);
    void addShapeSetup();
    void updateShapeSetup();
    ~AddUpdateShape();

private slots:
    void on_ShapeTypeEntry_currentIndexChanged(int index);

    void on_HelpButton_clicked();

private:
    Ui::AddUpdateShape *ui;
    void setLineEnabled();
    void setPolylineEnabled();
    void setPolygonEnabled();
    void setRectangleEnabled();
    void setSquareEnabled();
    void setEllipseEnabled();
    void setCircleEnabled();
    void setTextEnabled();
    custom::vector<shape*> *shapeVector;

};

#endif // ADDUPDATESHAPE_H
