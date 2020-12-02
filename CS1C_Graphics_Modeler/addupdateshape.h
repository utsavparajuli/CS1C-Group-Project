#ifndef ADDUPDATESHAPE_H
#define ADDUPDATESHAPE_H

#include <QDialog>
#include <QDebug>

namespace Ui {
class AddUpdateShape;
}

class AddUpdateShape : public QDialog
{
    Q_OBJECT

public:
    explicit AddUpdateShape(QWidget *parent = nullptr);
    void setTitle(QString);
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

};

#endif // ADDUPDATESHAPE_H
