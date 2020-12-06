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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddUpdateShape
{
public:
    QLabel *AddUpdateTitle;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QPushButton *HelpButton;
    QWidget *layoutWidget;
    QFormLayout *AddEditGeneralLayout;
    QLabel *ShapesLabel;
    QComboBox *ShapesEntry;
    QLabel *ShapeIdLabel;
    QSpinBox *ShapeIdEntry;
    QLabel *ShapeTypeLabel;
    QComboBox *ShapeTypeEntry;
    QLabel *ShapeDimensionsLabel;
    QTextEdit *ShapeDimensionsEntry;
    QWidget *layoutWidget1;
    QFormLayout *formLayout;
    QLabel *PenColorLabel;
    QComboBox *PenColorEntry;
    QLabel *PenWidthLabel;
    QSpinBox *PenWidthEntry;
    QLabel *PenStyleLabel;
    QComboBox *PenStyleEntry;
    QLabel *PenCapStyleLabel;
    QComboBox *PenCapStyleEntry;
    QLabel *PenJoinStyleLabel;
    QComboBox *PenJoinStyleEntry;
    QWidget *layoutWidget2;
    QFormLayout *formLayout_2;
    QLabel *BrushColorLabel;
    QComboBox *BrushColorEntry;
    QLabel *BrushStyleLabel;
    QComboBox *BrushStyleEntry;
    QWidget *layoutWidget3;
    QFormLayout *formLayout_4;
    QFormLayout *formLayout_3;
    QLabel *TextStringLabel;
    QTextEdit *TextStringEntry;
    QLabel *TextColorLabel;
    QComboBox *TextColorEntry;
    QLabel *TextAlignmentLabel;
    QComboBox *TextAlignmentEntry;
    QLabel *TextSizeLabel;
    QSpinBox *TextSizeEntry;
    QLabel *FontLabel;
    QComboBox *FontEntry;
    QLabel *FontStyleLabel;
    QComboBox *FontStyleEntry;
    QLabel *FontWeightLabel;
    QComboBox *FontWeightEntry;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout;
    QLabel *XCordLabel;
    QSpinBox *XCordEntry;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *YCordLabel;
    QSpinBox *YCordEntry;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *AddUpdateShape)
    {
        if (AddUpdateShape->objectName().isEmpty())
            AddUpdateShape->setObjectName(QString::fromUtf8("AddUpdateShape"));
        AddUpdateShape->resize(514, 714);
        AddUpdateTitle = new QLabel(AddUpdateShape);
        AddUpdateTitle->setObjectName(QString::fromUtf8("AddUpdateTitle"));
        AddUpdateTitle->setGeometry(QRect(0, 0, 511, 31));
        QFont font;
        font.setPointSize(15);
        AddUpdateTitle->setFont(font);
        AddUpdateTitle->setAlignment(Qt::AlignCenter);
        line = new QFrame(AddUpdateShape);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 220, 491, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(AddUpdateShape);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(260, 240, 20, 161));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(AddUpdateShape);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(10, 400, 491, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        HelpButton = new QPushButton(AddUpdateShape);
        HelpButton->setObjectName(QString::fromUtf8("HelpButton"));
        HelpButton->setGeometry(QRect(460, 150, 21, 21));
        layoutWidget = new QWidget(AddUpdateShape);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 40, 354, 181));
        AddEditGeneralLayout = new QFormLayout(layoutWidget);
        AddEditGeneralLayout->setObjectName(QString::fromUtf8("AddEditGeneralLayout"));
        AddEditGeneralLayout->setContentsMargins(0, 0, 0, 0);
        ShapesLabel = new QLabel(layoutWidget);
        ShapesLabel->setObjectName(QString::fromUtf8("ShapesLabel"));

        AddEditGeneralLayout->setWidget(0, QFormLayout::LabelRole, ShapesLabel);

        ShapesEntry = new QComboBox(layoutWidget);
        ShapesEntry->setObjectName(QString::fromUtf8("ShapesEntry"));

        AddEditGeneralLayout->setWidget(0, QFormLayout::FieldRole, ShapesEntry);

        ShapeIdLabel = new QLabel(layoutWidget);
        ShapeIdLabel->setObjectName(QString::fromUtf8("ShapeIdLabel"));

        AddEditGeneralLayout->setWidget(1, QFormLayout::LabelRole, ShapeIdLabel);

        ShapeIdEntry = new QSpinBox(layoutWidget);
        ShapeIdEntry->setObjectName(QString::fromUtf8("ShapeIdEntry"));

        AddEditGeneralLayout->setWidget(1, QFormLayout::FieldRole, ShapeIdEntry);

        ShapeTypeLabel = new QLabel(layoutWidget);
        ShapeTypeLabel->setObjectName(QString::fromUtf8("ShapeTypeLabel"));

        AddEditGeneralLayout->setWidget(2, QFormLayout::LabelRole, ShapeTypeLabel);

        ShapeTypeEntry = new QComboBox(layoutWidget);
        ShapeTypeEntry->setObjectName(QString::fromUtf8("ShapeTypeEntry"));

        AddEditGeneralLayout->setWidget(2, QFormLayout::FieldRole, ShapeTypeEntry);

        ShapeDimensionsLabel = new QLabel(layoutWidget);
        ShapeDimensionsLabel->setObjectName(QString::fromUtf8("ShapeDimensionsLabel"));

        AddEditGeneralLayout->setWidget(3, QFormLayout::LabelRole, ShapeDimensionsLabel);

        ShapeDimensionsEntry = new QTextEdit(layoutWidget);
        ShapeDimensionsEntry->setObjectName(QString::fromUtf8("ShapeDimensionsEntry"));

        AddEditGeneralLayout->setWidget(3, QFormLayout::FieldRole, ShapeDimensionsEntry);

        layoutWidget1 = new QWidget(AddUpdateShape);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 250, 211, 151));
        formLayout = new QFormLayout(layoutWidget1);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        PenColorLabel = new QLabel(layoutWidget1);
        PenColorLabel->setObjectName(QString::fromUtf8("PenColorLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, PenColorLabel);

        PenColorEntry = new QComboBox(layoutWidget1);
        PenColorEntry->setObjectName(QString::fromUtf8("PenColorEntry"));

        formLayout->setWidget(0, QFormLayout::FieldRole, PenColorEntry);

        PenWidthLabel = new QLabel(layoutWidget1);
        PenWidthLabel->setObjectName(QString::fromUtf8("PenWidthLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, PenWidthLabel);

        PenWidthEntry = new QSpinBox(layoutWidget1);
        PenWidthEntry->setObjectName(QString::fromUtf8("PenWidthEntry"));

        formLayout->setWidget(1, QFormLayout::FieldRole, PenWidthEntry);

        PenStyleLabel = new QLabel(layoutWidget1);
        PenStyleLabel->setObjectName(QString::fromUtf8("PenStyleLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, PenStyleLabel);

        PenStyleEntry = new QComboBox(layoutWidget1);
        PenStyleEntry->setObjectName(QString::fromUtf8("PenStyleEntry"));

        formLayout->setWidget(2, QFormLayout::FieldRole, PenStyleEntry);

        PenCapStyleLabel = new QLabel(layoutWidget1);
        PenCapStyleLabel->setObjectName(QString::fromUtf8("PenCapStyleLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, PenCapStyleLabel);

        PenCapStyleEntry = new QComboBox(layoutWidget1);
        PenCapStyleEntry->setObjectName(QString::fromUtf8("PenCapStyleEntry"));

        formLayout->setWidget(3, QFormLayout::FieldRole, PenCapStyleEntry);

        PenJoinStyleLabel = new QLabel(layoutWidget1);
        PenJoinStyleLabel->setObjectName(QString::fromUtf8("PenJoinStyleLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, PenJoinStyleLabel);

        PenJoinStyleEntry = new QComboBox(layoutWidget1);
        PenJoinStyleEntry->setObjectName(QString::fromUtf8("PenJoinStyleEntry"));

        formLayout->setWidget(4, QFormLayout::FieldRole, PenJoinStyleEntry);

        layoutWidget2 = new QWidget(AddUpdateShape);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(290, 290, 191, 57));
        formLayout_2 = new QFormLayout(layoutWidget2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        BrushColorLabel = new QLabel(layoutWidget2);
        BrushColorLabel->setObjectName(QString::fromUtf8("BrushColorLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, BrushColorLabel);

        BrushColorEntry = new QComboBox(layoutWidget2);
        BrushColorEntry->setObjectName(QString::fromUtf8("BrushColorEntry"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, BrushColorEntry);

        BrushStyleLabel = new QLabel(layoutWidget2);
        BrushStyleLabel->setObjectName(QString::fromUtf8("BrushStyleLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, BrushStyleLabel);

        BrushStyleEntry = new QComboBox(layoutWidget2);
        BrushStyleEntry->setObjectName(QString::fromUtf8("BrushStyleEntry"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, BrushStyleEntry);

        layoutWidget3 = new QWidget(AddUpdateShape);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(90, 420, 342, 276));
        formLayout_4 = new QFormLayout(layoutWidget3);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        TextStringLabel = new QLabel(layoutWidget3);
        TextStringLabel->setObjectName(QString::fromUtf8("TextStringLabel"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, TextStringLabel);

        TextStringEntry = new QTextEdit(layoutWidget3);
        TextStringEntry->setObjectName(QString::fromUtf8("TextStringEntry"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, TextStringEntry);

        TextColorLabel = new QLabel(layoutWidget3);
        TextColorLabel->setObjectName(QString::fromUtf8("TextColorLabel"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, TextColorLabel);

        TextColorEntry = new QComboBox(layoutWidget3);
        TextColorEntry->setObjectName(QString::fromUtf8("TextColorEntry"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, TextColorEntry);

        TextAlignmentLabel = new QLabel(layoutWidget3);
        TextAlignmentLabel->setObjectName(QString::fromUtf8("TextAlignmentLabel"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, TextAlignmentLabel);

        TextAlignmentEntry = new QComboBox(layoutWidget3);
        TextAlignmentEntry->setObjectName(QString::fromUtf8("TextAlignmentEntry"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, TextAlignmentEntry);

        TextSizeLabel = new QLabel(layoutWidget3);
        TextSizeLabel->setObjectName(QString::fromUtf8("TextSizeLabel"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, TextSizeLabel);

        TextSizeEntry = new QSpinBox(layoutWidget3);
        TextSizeEntry->setObjectName(QString::fromUtf8("TextSizeEntry"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, TextSizeEntry);


        formLayout_4->setLayout(0, QFormLayout::SpanningRole, formLayout_3);

        FontLabel = new QLabel(layoutWidget3);
        FontLabel->setObjectName(QString::fromUtf8("FontLabel"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, FontLabel);

        FontEntry = new QComboBox(layoutWidget3);
        FontEntry->setObjectName(QString::fromUtf8("FontEntry"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, FontEntry);

        FontStyleLabel = new QLabel(layoutWidget3);
        FontStyleLabel->setObjectName(QString::fromUtf8("FontStyleLabel"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, FontStyleLabel);

        FontStyleEntry = new QComboBox(layoutWidget3);
        FontStyleEntry->setObjectName(QString::fromUtf8("FontStyleEntry"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, FontStyleEntry);

        FontWeightLabel = new QLabel(layoutWidget3);
        FontWeightLabel->setObjectName(QString::fromUtf8("FontWeightLabel"));

        formLayout_4->setWidget(3, QFormLayout::LabelRole, FontWeightLabel);

        FontWeightEntry = new QComboBox(layoutWidget3);
        FontWeightEntry->setObjectName(QString::fromUtf8("FontWeightEntry"));

        formLayout_4->setWidget(3, QFormLayout::FieldRole, FontWeightEntry);

        layoutWidget4 = new QWidget(AddUpdateShape);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(140, 200, 149, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        XCordLabel = new QLabel(layoutWidget4);
        XCordLabel->setObjectName(QString::fromUtf8("XCordLabel"));

        horizontalLayout->addWidget(XCordLabel);

        XCordEntry = new QSpinBox(layoutWidget4);
        XCordEntry->setObjectName(QString::fromUtf8("XCordEntry"));
        XCordEntry->setMaximum(1500);

        horizontalLayout->addWidget(XCordEntry);

        layoutWidget5 = new QWidget(AddUpdateShape);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(290, 200, 148, 27));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        YCordLabel = new QLabel(layoutWidget5);
        YCordLabel->setObjectName(QString::fromUtf8("YCordLabel"));

        horizontalLayout_2->addWidget(YCordLabel);

        YCordEntry = new QSpinBox(layoutWidget5);
        YCordEntry->setObjectName(QString::fromUtf8("YCordEntry"));
        YCordEntry->setMaximum(1500);

        horizontalLayout_2->addWidget(YCordEntry);

        layoutWidget6 = new QWidget(AddUpdateShape);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(170, 680, 169, 27));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget6);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);

        pushButton = new QPushButton(layoutWidget6);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_3->addWidget(pushButton);


        retranslateUi(AddUpdateShape);

        QMetaObject::connectSlotsByName(AddUpdateShape);
    } // setupUi

    void retranslateUi(QDialog *AddUpdateShape)
    {
        AddUpdateShape->setWindowTitle(QCoreApplication::translate("AddUpdateShape", "Dialog", nullptr));
        AddUpdateTitle->setText(QCoreApplication::translate("AddUpdateShape", "Add/Edit Label", nullptr));
        HelpButton->setText(QCoreApplication::translate("AddUpdateShape", "?", nullptr));
        ShapesLabel->setText(QCoreApplication::translate("AddUpdateShape", "Choose Shape:", nullptr));
        ShapeIdLabel->setText(QCoreApplication::translate("AddUpdateShape", "Shape ID:", nullptr));
        ShapeTypeLabel->setText(QCoreApplication::translate("AddUpdateShape", "Shape Type:", nullptr));
        ShapeDimensionsLabel->setText(QCoreApplication::translate("AddUpdateShape", "Shape Dimensions:", nullptr));
        PenColorLabel->setText(QCoreApplication::translate("AddUpdateShape", "Pen Color:", nullptr));
        PenWidthLabel->setText(QCoreApplication::translate("AddUpdateShape", "Pen Width:", nullptr));
        PenStyleLabel->setText(QCoreApplication::translate("AddUpdateShape", "Pen Style:", nullptr));
        PenCapStyleLabel->setText(QCoreApplication::translate("AddUpdateShape", "Pen Cap Style:", nullptr));
        PenJoinStyleLabel->setText(QCoreApplication::translate("AddUpdateShape", "Pen Join Style:", nullptr));
        BrushColorLabel->setText(QCoreApplication::translate("AddUpdateShape", "Brush Color:", nullptr));
        BrushStyleLabel->setText(QCoreApplication::translate("AddUpdateShape", "Brush Style:", nullptr));
        TextStringLabel->setText(QCoreApplication::translate("AddUpdateShape", "Text String:", nullptr));
        TextColorLabel->setText(QCoreApplication::translate("AddUpdateShape", "Text Color:", nullptr));
        TextAlignmentLabel->setText(QCoreApplication::translate("AddUpdateShape", "Text Alignment:", nullptr));
        TextSizeLabel->setText(QCoreApplication::translate("AddUpdateShape", "Text Point Size:", nullptr));
        FontLabel->setText(QCoreApplication::translate("AddUpdateShape", "Font:", nullptr));
        FontStyleLabel->setText(QCoreApplication::translate("AddUpdateShape", "Font Style:", nullptr));
        FontWeightLabel->setText(QCoreApplication::translate("AddUpdateShape", "Font Weight:", nullptr));
        XCordLabel->setText(QCoreApplication::translate("AddUpdateShape", "X-Coordinate:", nullptr));
        YCordLabel->setText(QCoreApplication::translate("AddUpdateShape", "Y-Coordinate:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AddUpdateShape", "Cancel", nullptr));
        pushButton->setText(QCoreApplication::translate("AddUpdateShape", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddUpdateShape: public Ui_AddUpdateShape {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUPDATESHAPE_H
