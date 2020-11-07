/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *MainLoginTitle;
    QLabel *TeamNameLoginTitle;
    QPushButton *LoginButton;
    QWidget *layoutWidget;
    QFormLayout *UsernamePasswordLayout;
    QLabel *UsernameLabel;
    QLineEdit *UsernameEntry;
    QLabel *PasswordLabel;
    QLineEdit *PasswordEntry;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1012, 627);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainLoginTitle = new QLabel(centralwidget);
        MainLoginTitle->setObjectName(QString::fromUtf8("MainLoginTitle"));
        MainLoginTitle->setGeometry(QRect(390, 190, 251, 31));
        TeamNameLoginTitle = new QLabel(centralwidget);
        TeamNameLoginTitle->setObjectName(QString::fromUtf8("TeamNameLoginTitle"));
        TeamNameLoginTitle->setGeometry(QRect(460, 220, 101, 16));
        LoginButton = new QPushButton(centralwidget);
        LoginButton->setObjectName(QString::fromUtf8("LoginButton"));
        LoginButton->setGeometry(QRect(470, 320, 75, 23));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(410, 260, 189, 57));
        UsernamePasswordLayout = new QFormLayout(layoutWidget);
        UsernamePasswordLayout->setObjectName(QString::fromUtf8("UsernamePasswordLayout"));
        UsernamePasswordLayout->setContentsMargins(0, 0, 0, 0);
        UsernameLabel = new QLabel(layoutWidget);
        UsernameLabel->setObjectName(QString::fromUtf8("UsernameLabel"));

        UsernamePasswordLayout->setWidget(0, QFormLayout::LabelRole, UsernameLabel);

        UsernameEntry = new QLineEdit(layoutWidget);
        UsernameEntry->setObjectName(QString::fromUtf8("UsernameEntry"));

        UsernamePasswordLayout->setWidget(0, QFormLayout::FieldRole, UsernameEntry);

        PasswordLabel = new QLabel(layoutWidget);
        PasswordLabel->setObjectName(QString::fromUtf8("PasswordLabel"));

        UsernamePasswordLayout->setWidget(1, QFormLayout::LabelRole, PasswordLabel);

        PasswordEntry = new QLineEdit(layoutWidget);
        PasswordEntry->setObjectName(QString::fromUtf8("PasswordEntry"));

        UsernamePasswordLayout->setWidget(1, QFormLayout::FieldRole, PasswordEntry);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1012, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        MainLoginTitle->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">2D Graphics Modeler</span></p></body></html>", nullptr));
        TeamNameLoginTitle->setText(QCoreApplication::translate("MainWindow", "Scrum and Coke", nullptr));
        LoginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        UsernameLabel->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        PasswordLabel->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
