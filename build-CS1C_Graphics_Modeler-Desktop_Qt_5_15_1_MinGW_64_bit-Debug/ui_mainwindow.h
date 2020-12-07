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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "DrawingWidget.h"

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
    DrawingWidget *drawArea;
    QPushButton *pushButton;
    QWidget *TestimonialsPage;
    QLabel *Title;
    QLabel *AddReviewLabel;
    QCommandLinkButton *PastTestimonials;
    QPushButton *BackToCanvas;
    QPushButton *AddTestimonial;
    QPlainTextEdit *plainTextEdit;
    QWidget *ViewTestimonials;
    QLabel *ReviewTitle;
    QTextBrowser *output;
    QPushButton *backButton;
    QWidget *ContactPage;
    QLabel *ContactLabel;
    QPushButton *ContactUsBackButton;
    QLabel *Logo;
    QWidget *ReportsPage;
    QPushButton *ReportsBackButton;
    QLabel *ReportsTitle;
    QComboBox *ReportsSortByEntry;
    QLabel *ReportsSortLabel;
    QTableWidget *ReportsTable;
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
        layoutWidget->setGeometry(QRect(450, 210, 362, 204));
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
        layoutWidget1->setGeometry(QRect(430, 10, 314, 46));
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
        layoutWidget2->setGeometry(QRect(340, 620, 572, 32));
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

        drawArea = new DrawingWidget(MainPage);
        drawArea->setObjectName(QString::fromUtf8("drawArea"));
        drawArea->setGeometry(QRect(30, 70, 1091, 531));
        drawArea->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border: 3px solid black;"));
        pushButton = new QPushButton(MainPage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1080, 10, 80, 21));
        stackedWidget->addWidget(MainPage);
        TestimonialsPage = new QWidget();
        TestimonialsPage->setObjectName(QString::fromUtf8("TestimonialsPage"));
        Title = new QLabel(TestimonialsPage);
        Title->setObjectName(QString::fromUtf8("Title"));
        Title->setGeometry(QRect(210, 70, 741, 61));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Futura"));
        font2.setPointSize(24);
        Title->setFont(font2);
        Title->setAlignment(Qt::AlignCenter);
        AddReviewLabel = new QLabel(TestimonialsPage);
        AddReviewLabel->setObjectName(QString::fromUtf8("AddReviewLabel"));
        AddReviewLabel->setGeometry(QRect(490, 170, 271, 20));
        QFont font3;
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        AddReviewLabel->setFont(font3);
        PastTestimonials = new QCommandLinkButton(TestimonialsPage);
        PastTestimonials->setObjectName(QString::fromUtf8("PastTestimonials"));
        PastTestimonials->setGeometry(QRect(780, 10, 351, 61));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Futura"));
        font4.setPointSize(18);
        PastTestimonials->setFont(font4);
        PastTestimonials->setIconSize(QSize(100, 100));
        BackToCanvas = new QPushButton(TestimonialsPage);
        BackToCanvas->setObjectName(QString::fromUtf8("BackToCanvas"));
        BackToCanvas->setGeometry(QRect(400, 380, 112, 32));
        AddTestimonial = new QPushButton(TestimonialsPage);
        AddTestimonial->setObjectName(QString::fromUtf8("AddTestimonial"));
        AddTestimonial->setGeometry(QRect(650, 380, 112, 32));
        plainTextEdit = new QPlainTextEdit(TestimonialsPage);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(440, 210, 281, 161));
        stackedWidget->addWidget(TestimonialsPage);
        ViewTestimonials = new QWidget();
        ViewTestimonials->setObjectName(QString::fromUtf8("ViewTestimonials"));
        ReviewTitle = new QLabel(ViewTestimonials);
        ReviewTitle->setObjectName(QString::fromUtf8("ReviewTitle"));
        ReviewTitle->setGeometry(QRect(340, 20, 421, 51));
        ReviewTitle->setFont(font2);
        output = new QTextBrowser(ViewTestimonials);
        output->setObjectName(QString::fromUtf8("output"));
        output->setGeometry(QRect(20, 92, 1051, 521));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Futura"));
        font5.setPointSize(14);
        output->setFont(font5);
        backButton = new QPushButton(ViewTestimonials);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(0, 10, 112, 32));
        stackedWidget->addWidget(ViewTestimonials);
        ContactPage = new QWidget();
        ContactPage->setObjectName(QString::fromUtf8("ContactPage"));
        ContactLabel = new QLabel(ContactPage);
        ContactLabel->setObjectName(QString::fromUtf8("ContactLabel"));
        ContactLabel->setGeometry(QRect(20, 60, 521, 291));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Comic Sans MS"));
        ContactLabel->setFont(font6);
        ContactUsBackButton = new QPushButton(ContactPage);
        ContactUsBackButton->setObjectName(QString::fromUtf8("ContactUsBackButton"));
        ContactUsBackButton->setGeometry(QRect(20, 10, 80, 21));
        Logo = new QLabel(ContactPage);
        Logo->setObjectName(QString::fromUtf8("Logo"));
        Logo->setGeometry(QRect(330, 140, 191, 151));
        stackedWidget->addWidget(ContactPage);
        ReportsPage = new QWidget();
        ReportsPage->setObjectName(QString::fromUtf8("ReportsPage"));
        ReportsBackButton = new QPushButton(ReportsPage);
        ReportsBackButton->setObjectName(QString::fromUtf8("ReportsBackButton"));
        ReportsBackButton->setGeometry(QRect(20, 20, 80, 21));
        ReportsTitle = new QLabel(ReportsPage);
        ReportsTitle->setObjectName(QString::fromUtf8("ReportsTitle"));
        ReportsTitle->setGeometry(QRect(560, 10, 101, 41));
        QFont font7;
        font7.setPointSize(20);
        ReportsTitle->setFont(font7);
        ReportsSortByEntry = new QComboBox(ReportsPage);
        ReportsSortByEntry->addItem(QString());
        ReportsSortByEntry->addItem(QString());
        ReportsSortByEntry->addItem(QString());
        ReportsSortByEntry->setObjectName(QString::fromUtf8("ReportsSortByEntry"));
        ReportsSortByEntry->setGeometry(QRect(540, 70, 161, 22));
        ReportsSortLabel = new QLabel(ReportsPage);
        ReportsSortLabel->setObjectName(QString::fromUtf8("ReportsSortLabel"));
        ReportsSortLabel->setGeometry(QRect(540, 50, 47, 13));
        ReportsTable = new QTableWidget(ReportsPage);
        if (ReportsTable->columnCount() < 18)
            ReportsTable->setColumnCount(18);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        ReportsTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        ReportsTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        ReportsTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        ReportsTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        ReportsTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        ReportsTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        ReportsTable->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        ReportsTable->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        ReportsTable->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        ReportsTable->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        ReportsTable->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        ReportsTable->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        ReportsTable->setHorizontalHeaderItem(12, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        ReportsTable->setHorizontalHeaderItem(13, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        ReportsTable->setHorizontalHeaderItem(14, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        ReportsTable->setHorizontalHeaderItem(15, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        ReportsTable->setHorizontalHeaderItem(16, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        ReportsTable->setHorizontalHeaderItem(17, __qtablewidgetitem17);
        ReportsTable->setObjectName(QString::fromUtf8("ReportsTable"));
        ReportsTable->setGeometry(QRect(30, 110, 1151, 531));
        ReportsTable->setRowCount(0);
        ReportsTable->verticalHeader()->setVisible(false);
        stackedWidget->addWidget(ReportsPage);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(5);


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
        pushButton->setText(QCoreApplication::translate("MainWindow", "Reports", nullptr));
        Title->setText(QCoreApplication::translate("MainWindow", "WELCOME TO TESTIMONIALS PAGE", nullptr));
        AddReviewLabel->setText(QCoreApplication::translate("MainWindow", "Please add your review below", nullptr));
        PastTestimonials->setText(QCoreApplication::translate("MainWindow", "Previous Testimonials", nullptr));
        BackToCanvas->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        AddTestimonial->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        ReviewTitle->setText(QCoreApplication::translate("MainWindow", "PRODUCT REVIEWS", nullptr));
        backButton->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        ContactLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt;\">CONTACT US - </span><span style=\" font-size:18pt; font-style:italic;\">SCRUM AND COKE</span></p><p><span style=\" font-size:18pt; vertical-align:super;\">________________________________________________________________________________________________________</span></p><p><a href=\"https://github.com/jamesdowty/CS1C-Group-Project\"><span style=\" font-size:18pt; text-decoration: underline; color:#0000ff;\">Github</span></a></p><p><a href=\"https://github.com/jamesdowty/CS1C-Group-Project\"><span style=\" font-size:18pt; text-decoration: underline; color:#000000;\">Phone: 949-333-333</span></a></p><p><a href=\"https://github.com/jamesdowty/CS1C-Group-Project\"><span style=\" font-size:18pt; text-decoration: underline; color:#000000;\">Support: help@shape.com</span></a></p><p><span style=\" font-size:18pt; vertical-align:super;\">________________________________________________________________________________________________________</span></p><p><span style="
                        "\" font-size:18pt; vertical-align:super;\">Members: Kate, Behrad, James, Joey, Tim, Brandon, Utsav, Nicholas</span></p><p><br/></p><p><span style=\" font-size:18pt;\"><br/></span></p><p><span style=\" font-size:18pt;\"><br/></span></p><p><span style=\" font-size:18pt;\"><br/></span></p></body></html>", nullptr));
        ContactUsBackButton->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        Logo->setText(QString());
        ReportsBackButton->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        ReportsTitle->setText(QCoreApplication::translate("MainWindow", "Reports", nullptr));
        ReportsSortByEntry->setItemText(0, QCoreApplication::translate("MainWindow", "Shape ID", nullptr));
        ReportsSortByEntry->setItemText(1, QCoreApplication::translate("MainWindow", "Perimeter", nullptr));
        ReportsSortByEntry->setItemText(2, QCoreApplication::translate("MainWindow", "Area", nullptr));

        ReportsSortLabel->setText(QCoreApplication::translate("MainWindow", "Sort By:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = ReportsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Shape ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = ReportsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = ReportsTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Area", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = ReportsTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Perimeter", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = ReportsTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Pen Color", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = ReportsTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Pen Width", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = ReportsTable->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "Pen Style", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = ReportsTable->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "Pen Cap Style", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = ReportsTable->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "Pen Join Style", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = ReportsTable->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "Brush Color", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = ReportsTable->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "Brush Style", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = ReportsTable->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "Text String", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = ReportsTable->horizontalHeaderItem(12);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "Text Color", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = ReportsTable->horizontalHeaderItem(13);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "Text Alignment", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = ReportsTable->horizontalHeaderItem(14);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "Text Point Size", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = ReportsTable->horizontalHeaderItem(15);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "Text Font Family", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = ReportsTable->horizontalHeaderItem(16);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "Text Font Style", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = ReportsTable->horizontalHeaderItem(17);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "Text Font Weight", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
