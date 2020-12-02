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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "drawingwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *LoginPage;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *MainLoginTitle;
    QLabel *TeamNameLoginTitle;
    QFormLayout *UsernamePasswordLayout;
    QLabel *UsernameLabel;
    QLineEdit *UsernameEntry;
    QLabel *PasswordLabel;
    QLineEdit *PasswordEntry;
    QPushButton *LoginButton;
    QPushButton *LoginButtonGuest;
    QLabel *LoginUserNoteTitle;
    QWidget *MainPage;
    QPushButton *LogoutButton;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *WelcomeTitle;
    QLabel *WhichUserTitle_2;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QPushButton *ContactUsButton;
    QPushButton *AddShapeButton;
    QPushButton *EditShapeButton;
    QPushButton *DeleteShapeButton;
    QPushButton *TestimonialsButton;
    DrawingWidget *widget;
    QWidget *ContactPage;
    QLabel *ContactLabel;
    QLabel *Logo;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1200, 700);
        MainWindow->setAutoFillBackground(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1200, 700));
        LoginPage = new QWidget();
        LoginPage->setObjectName(QString::fromUtf8("LoginPage"));
        layoutWidget = new QWidget(LoginPage);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(450, 210, 345, 201));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        MainLoginTitle = new QLabel(layoutWidget);
        MainLoginTitle->setObjectName(QString::fromUtf8("MainLoginTitle"));

        verticalLayout->addWidget(MainLoginTitle, 0, Qt::AlignHCenter);

        TeamNameLoginTitle = new QLabel(layoutWidget);
        TeamNameLoginTitle->setObjectName(QString::fromUtf8("TeamNameLoginTitle"));

        verticalLayout->addWidget(TeamNameLoginTitle, 0, Qt::AlignHCenter);

        UsernamePasswordLayout = new QFormLayout();
        UsernamePasswordLayout->setObjectName(QString::fromUtf8("UsernamePasswordLayout"));
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
        PasswordEntry->setEchoMode(QLineEdit::Password);

        UsernamePasswordLayout->setWidget(1, QFormLayout::FieldRole, PasswordEntry);


        verticalLayout->addLayout(UsernamePasswordLayout);

        LoginButton = new QPushButton(layoutWidget);
        LoginButton->setObjectName(QString::fromUtf8("LoginButton"));

        verticalLayout->addWidget(LoginButton, 0, Qt::AlignHCenter);

        LoginButtonGuest = new QPushButton(layoutWidget);
        LoginButtonGuest->setObjectName(QString::fromUtf8("LoginButtonGuest"));

        verticalLayout->addWidget(LoginButtonGuest, 0, Qt::AlignHCenter);

        LoginUserNoteTitle = new QLabel(layoutWidget);
        LoginUserNoteTitle->setObjectName(QString::fromUtf8("LoginUserNoteTitle"));
        QFont font;
        font.setItalic(true);
        LoginUserNoteTitle->setFont(font);

        verticalLayout->addWidget(LoginUserNoteTitle, 0, Qt::AlignHCenter);

        stackedWidget->addWidget(LoginPage);
        MainPage = new QWidget();
        MainPage->setObjectName(QString::fromUtf8("MainPage"));
        LogoutButton = new QPushButton(MainPage);
        LogoutButton->setObjectName(QString::fromUtf8("LogoutButton"));
        LogoutButton->setGeometry(QRect(30, 10, 80, 25));
        layoutWidget1 = new QWidget(MainPage);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(490, 10, 241, 38));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        WelcomeTitle = new QLabel(layoutWidget1);
        WelcomeTitle->setObjectName(QString::fromUtf8("WelcomeTitle"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        WelcomeTitle->setFont(font1);

        verticalLayout_2->addWidget(WelcomeTitle);

        WhichUserTitle_2 = new QLabel(layoutWidget1);
        WhichUserTitle_2->setObjectName(QString::fromUtf8("WhichUserTitle_2"));
        WhichUserTitle_2->setFont(font);

        verticalLayout_2->addWidget(WhichUserTitle_2);

        layoutWidget2 = new QWidget(MainPage);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(410, 620, 426, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ContactUsButton = new QPushButton(layoutWidget2);
        ContactUsButton->setObjectName(QString::fromUtf8("ContactUsButton"));

        horizontalLayout->addWidget(ContactUsButton);

        AddShapeButton = new QPushButton(layoutWidget2);
        AddShapeButton->setObjectName(QString::fromUtf8("AddShapeButton"));

        horizontalLayout->addWidget(AddShapeButton);

        EditShapeButton = new QPushButton(layoutWidget2);
        EditShapeButton->setObjectName(QString::fromUtf8("EditShapeButton"));

        horizontalLayout->addWidget(EditShapeButton);

        DeleteShapeButton = new QPushButton(layoutWidget2);
        DeleteShapeButton->setObjectName(QString::fromUtf8("DeleteShapeButton"));

        horizontalLayout->addWidget(DeleteShapeButton);

        TestimonialsButton = new QPushButton(layoutWidget2);
        TestimonialsButton->setObjectName(QString::fromUtf8("TestimonialsButton"));

        horizontalLayout->addWidget(TestimonialsButton);

        widget = new DrawingWidget(MainPage);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 50, 1151, 551));
        widget->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border: 3px solid black;"));
        stackedWidget->addWidget(MainPage);
        ContactPage = new QWidget();
        ContactPage->setObjectName(QString::fromUtf8("ContactPage"));
        ContactLabel = new QLabel(ContactPage);
        ContactLabel->setObjectName(QString::fromUtf8("ContactLabel"));
        ContactLabel->setGeometry(QRect(10, 70, 531, 321));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Comic Sans MS"));
        font2.setPointSize(14);
        ContactLabel->setFont(font2);
        Logo = new QLabel(ContactPage);
        Logo->setObjectName(QString::fromUtf8("Logo"));
        Logo->setGeometry(QRect(350, 160, 151, 101));
        Logo->setPixmap(QPixmap(QString::fromUtf8("../../../../Pictures/logo.png")));
        Logo->setScaledContents(true);
        stackedWidget->addWidget(ContactPage);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        MainLoginTitle->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">2D Graphics Modeler</span></p></body></html>", nullptr));
        TeamNameLoginTitle->setText(QCoreApplication::translate("MainWindow", "Scrum and Coke", nullptr));
        UsernameLabel->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        PasswordLabel->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        LoginButton->setText(QCoreApplication::translate("MainWindow", "Login As Admin", nullptr));
        LoginButtonGuest->setText(QCoreApplication::translate("MainWindow", "Login As Guest", nullptr));
        LoginUserNoteTitle->setText(QCoreApplication::translate("MainWindow", "*To login as a Guest, no username or password is required", nullptr));
        LogoutButton->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        WelcomeTitle->setText(QCoreApplication::translate("MainWindow", "Welcome to the 2D Shapes Modeler!", nullptr));
        WhichUserTitle_2->setText(QCoreApplication::translate("MainWindow", "You are currently logged in as: ", nullptr));
        ContactUsButton->setText(QCoreApplication::translate("MainWindow", "Contact Us", nullptr));
        AddShapeButton->setText(QCoreApplication::translate("MainWindow", "Add Shape", nullptr));
        EditShapeButton->setText(QCoreApplication::translate("MainWindow", "Edit Shape", nullptr));
        DeleteShapeButton->setText(QCoreApplication::translate("MainWindow", "Delete Shape", nullptr));
        TestimonialsButton->setText(QCoreApplication::translate("MainWindow", "Testimonials", nullptr));
        ContactLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt;\">CONTACT US - </span><span style=\" font-size:18pt; font-style:italic;\">SCRUM AND COKE</span></p><p><span style=\" font-size:18pt; vertical-align:super;\">________________________________________________________________________________________________________</span></p><p><a href=\"https://github.com/jamesdowty/CS1C-Group-Project\"><span style=\" font-size:18pt; text-decoration: underline; color:#0000ff;\">Github</span></a></p><p><a href=\"https://github.com/jamesdowty/CS1C-Group-Project\"><span style=\" font-size:18pt; text-decoration: underline; color:#000000;\">Phone: 949-333-333</span></a></p><p><a href=\"https://github.com/jamesdowty/CS1C-Group-Project\"><span style=\" font-size:18pt; text-decoration: underline; color:#000000;\">Support: help@shape.com</span></a></p><p><span style=\" font-size:18pt; vertical-align:super;\">________________________________________________________________________________________________________</span></p><p><span style="
                        "\" font-size:18pt; vertical-align:super;\">Members: Kate, Behrad, James, Joey, Tim, Brandon, Utsav, Nicholas</span></p><p><br/></p><p><span style=\" font-size:18pt;\"><br/></span></p><p><span style=\" font-size:18pt;\"><br/></span></p><p><span style=\" font-size:18pt;\"><br/></span></p></body></html>", nullptr));
        Logo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
