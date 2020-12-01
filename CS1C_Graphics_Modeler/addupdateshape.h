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

private:
    Ui::AddUpdateShape *ui;
};

#endif // ADDUPDATESHAPE_H
