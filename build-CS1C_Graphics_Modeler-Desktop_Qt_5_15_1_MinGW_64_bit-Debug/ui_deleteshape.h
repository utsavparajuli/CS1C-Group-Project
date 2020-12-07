/********************************************************************************
** Form generated from reading UI file 'deleteshape.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETESHAPE_H
#define UI_DELETESHAPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_deleteShape
{
public:
    QPushButton *deleteShapeCancelButton;
    QPushButton *deleteShapeDeleteButton;
    QComboBox *deleteShapeEntry;
    QLabel *deleteShapeTitle;
    QLabel *deleteShapeLabel;

    void setupUi(QDialog *deleteShape)
    {
        if (deleteShape->objectName().isEmpty())
            deleteShape->setObjectName(QString::fromUtf8("deleteShape"));
        deleteShape->resize(400, 154);
        deleteShapeCancelButton = new QPushButton(deleteShape);
        deleteShapeCancelButton->setObjectName(QString::fromUtf8("deleteShapeCancelButton"));
        deleteShapeCancelButton->setGeometry(QRect(80, 100, 111, 21));
        deleteShapeDeleteButton = new QPushButton(deleteShape);
        deleteShapeDeleteButton->setObjectName(QString::fromUtf8("deleteShapeDeleteButton"));
        deleteShapeDeleteButton->setGeometry(QRect(210, 100, 121, 21));
        deleteShapeEntry = new QComboBox(deleteShape);
        deleteShapeEntry->setObjectName(QString::fromUtf8("deleteShapeEntry"));
        deleteShapeEntry->setGeometry(QRect(131, 60, 201, 22));
        deleteShapeTitle = new QLabel(deleteShape);
        deleteShapeTitle->setObjectName(QString::fromUtf8("deleteShapeTitle"));
        deleteShapeTitle->setGeometry(QRect(0, 0, 401, 41));
        QFont font;
        font.setPointSize(22);
        deleteShapeTitle->setFont(font);
        deleteShapeTitle->setAlignment(Qt::AlignCenter);
        deleteShapeLabel = new QLabel(deleteShape);
        deleteShapeLabel->setObjectName(QString::fromUtf8("deleteShapeLabel"));
        deleteShapeLabel->setGeometry(QRect(50, 60, 71, 20));

        retranslateUi(deleteShape);

        QMetaObject::connectSlotsByName(deleteShape);
    } // setupUi

    void retranslateUi(QDialog *deleteShape)
    {
        deleteShape->setWindowTitle(QCoreApplication::translate("deleteShape", "Dialog", nullptr));
        deleteShapeCancelButton->setText(QCoreApplication::translate("deleteShape", "Cancel", nullptr));
        deleteShapeDeleteButton->setText(QCoreApplication::translate("deleteShape", "Delete Shape", nullptr));
        deleteShapeTitle->setText(QCoreApplication::translate("deleteShape", "Delete Shape", nullptr));
        deleteShapeLabel->setText(QCoreApplication::translate("deleteShape", "Choose Shape:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deleteShape: public Ui_deleteShape {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETESHAPE_H
