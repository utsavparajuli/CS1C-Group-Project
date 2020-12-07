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

    void on_ShapesEntry_currentIndexChanged(int index);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

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

    void fillPenValues(int);
    void fillBrushValues(int);
    void fillTextValues(int);

    void fillLineEntry(int);
    void fillShapeEntry(int);
    void fillTextEntry(int);

    bool uniqueShapeID(int);
    int getNextID();

    void saveUpdateShape();
    void saveAddShape();
    void updateLine(shape*);
    void updatePolyline(shape*);
    void updatePolygon(shape*);
    void updateRectangle(shape*);
    void updateSquare(shape*);
    void updateEllipse(shape*);
    void updateCircle(shape*);
    void updateText(shape*);

    int shapeToInt(ShapeType);
    custom::vector<shape*> *shapeVector;

};

#endif // ADDUPDATESHAPE_H
