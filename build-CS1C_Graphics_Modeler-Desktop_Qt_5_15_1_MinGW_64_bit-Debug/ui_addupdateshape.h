/********************************************************************************
** Form generated from reading UI file 'addupdateshape.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUPDATESHAPE_H
#define UI_ADDUPDATESHAPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_AddUpdateShape
{
public:
    QLabel *AddUpdateTitle;
    QComboBox *ShapesEntry;
    QLabel *ShapesLabel;
    QLineEdit *ShapeIdEntry;
    QLabel *ShapeIdLabel;
    QComboBox *ShapeTypeEntry;
    QLabel *ShapeTypeLabel;

    void setupUi(QDialog *AddUpdateShape)
    {
        if (AddUpdateShape->objectName().isEmpty())
            AddUpdateShape->setObjectName(QString::fromUtf8("AddUpdateShape"));
        AddUpdateShape->resize(514, 674);
        AddUpdateTitle = new QLabel(AddUpdateShape);
        AddUpdateTitle->setObjectName(QString::fromUtf8("AddUpdateTitle"));
        AddUpdateTitle->setGeometry(QRect(0, 0, 511, 31));
        QFont font;
        font.setPointSize(15);
        AddUpdateTitle->setFont(font);
        AddUpdateTitle->setAlignment(Qt::AlignCenter);
        ShapesEntry = new QComboBox(AddUpdateShape);
        ShapesEntry->setObjectName(QString::fromUtf8("ShapesEntry"));
        ShapesEntry->setGeometry(QRect(200, 40, 251, 22));
        ShapesLabel = new QLabel(AddUpdateShape);
        ShapesLabel->setObjectName(QString::fromUtf8("ShapesLabel"));
        ShapesLabel->setGeometry(QRect(110, 40, 91, 20));
        ShapeIdEntry = new QLineEdit(AddUpdateShape);
        ShapeIdEntry->setObjectName(QString::fromUtf8("ShapeIdEntry"));
        ShapeIdEntry->setGeometry(QRect(200, 70, 113, 21));
        ShapeIdLabel = new QLabel(AddUpdateShape);
        ShapeIdLabel->setObjectName(QString::fromUtf8("ShapeIdLabel"));
        ShapeIdLabel->setGeometry(QRect(140, 70, 47, 13));
        ShapeTypeEntry = new QComboBox(AddUpdateShape);
        ShapeTypeEntry->setObjectName(QString::fromUtf8("ShapeTypeEntry"));
        ShapeTypeEntry->setGeometry(QRect(200, 100, 231, 22));
        ShapeTypeLabel = new QLabel(AddUpdateShape);
        ShapeTypeLabel->setObjectName(QString::fromUtf8("ShapeTypeLabel"));
        ShapeTypeLabel->setGeometry(QRect(130, 100, 71, 20));

        retranslateUi(AddUpdateShape);

        QMetaObject::connectSlotsByName(AddUpdateShape);
    } // setupUi

    void retranslateUi(QDialog *AddUpdateShape)
    {
        AddUpdateShape->setWindowTitle(QCoreApplication::translate("AddUpdateShape", "Dialog", nullptr));
        AddUpdateTitle->setText(QCoreApplication::translate("AddUpdateShape", "Add/Edit Label", nullptr));
        ShapesLabel->setText(QCoreApplication::translate("AddUpdateShape", "Choose Shape:", nullptr));
        ShapeIdLabel->setText(QCoreApplication::translate("AddUpdateShape", "Shape ID:", nullptr));
        ShapeTypeLabel->setText(QCoreApplication::translate("AddUpdateShape", "Shape Type:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddUpdateShape: public Ui_AddUpdateShape {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUPDATESHAPE_H
