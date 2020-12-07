#ifndef DELETESHAPE_H
#define DELETESHAPE_H

#include <QDialog>
#include "vector.h"
#include "shape.h"

namespace Ui {
class deleteShape;
}

class deleteShape : public QDialog
{
    Q_OBJECT

public:
    explicit deleteShape(custom::vector<shape*>*, QWidget *parent = nullptr);
    ~deleteShape();

private slots:
    void on_deleteShapeCancelButton_clicked();

    void on_deleteShapeDeleteButton_clicked();

private:
    Ui::deleteShape *ui;
    custom::vector<shape*> *shapeVector;
};

#endif // DELETESHAPE_H
