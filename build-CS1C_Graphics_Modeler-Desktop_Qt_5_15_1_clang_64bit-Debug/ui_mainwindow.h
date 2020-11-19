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
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

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
    QLabel *IncorrectPasswordLabel;
    QPushButton *LoginButton;
    QPushButton *LoginButtonGuest;
    QLabel *LoginUserNoteTitle;
    QWidget *MainPage;
    QPushButton *LogoutButton;
    QWidget *layoutWidget1;
    QFormLayout *formLayout;
    QLabel *WelcomeTitle;
    QLabel *WhichUserTitle;
    QLabel *UserLabel;
    QCommandLinkButton *TestimonialsButton;
    QWidget *TestimonialPage;
    QPushButton *BackButton;
    QLabel *Header;
    QPushButton *AddTestimonialButton;
    QPushButton *ViewTestimonialsButton;
    QWidget *ViewTestimonialPage;
    QLabel *header;
    QTextBrowser *DisplayReviews;
    QPushButton *BackTTestimonialButton;
    QWidget *AddTestimonailPage;
    QLabel *Header_2;
    QPushButton *DoneButton;
    QTextEdit *AddReview;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1012, 627);
        MainWindow->setAutoFillBackground(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setEnabled(true);
        stackedWidget->setGeometry(QRect(60, 0, 1011, 581));
        LoginPage = new QWidget();
        LoginPage->setObjectName(QString::fromUtf8("LoginPage"));
        layoutWidget = new QWidget(LoginPage);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(380, 200, 362, 229));
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

        IncorrectPasswordLabel = new QLabel(layoutWidget);
        IncorrectPasswordLabel->setObjectName(QString::fromUtf8("IncorrectPasswordLabel"));
        IncorrectPasswordLabel->setTextFormat(Qt::AutoText);

        verticalLayout->addWidget(IncorrectPasswordLabel, 0, Qt::AlignHCenter);

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
        layoutWidget1->setGeometry(QRect(340, 20, 321, 46));
        formLayout = new QFormLayout(layoutWidget1);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignCenter);
        formLayout->setContentsMargins(0, 0, 0, 0);
        WelcomeTitle = new QLabel(layoutWidget1);
        WelcomeTitle->setObjectName(QString::fromUtf8("WelcomeTitle"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        WelcomeTitle->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, WelcomeTitle);

        WhichUserTitle = new QLabel(layoutWidget1);
        WhichUserTitle->setObjectName(QString::fromUtf8("WhichUserTitle"));
        WhichUserTitle->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, WhichUserTitle);

        UserLabel = new QLabel(layoutWidget1);
        UserLabel->setObjectName(QString::fromUtf8("UserLabel"));

        formLayout->setWidget(1, QFormLayout::FieldRole, UserLabel);

        TestimonialsButton = new QCommandLinkButton(MainPage);
        TestimonialsButton->setObjectName(QString::fromUtf8("TestimonialsButton"));
        TestimonialsButton->setGeometry(QRect(820, 20, 180, 41));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TestimonialsButton->sizePolicy().hasHeightForWidth());
        TestimonialsButton->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        TestimonialsButton->setFont(font2);
        stackedWidget->addWidget(MainPage);
        TestimonialPage = new QWidget();
        TestimonialPage->setObjectName(QString::fromUtf8("TestimonialPage"));
        TestimonialPage->setAutoFillBackground(true);
        BackButton = new QPushButton(TestimonialPage);
        BackButton->setObjectName(QString::fromUtf8("BackButton"));
        BackButton->setGeometry(QRect(20, 10, 112, 32));
        Header = new QLabel(TestimonialPage);
        Header->setObjectName(QString::fromUtf8("Header"));
        Header->setGeometry(QRect(320, 100, 391, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Futura"));
        font3.setPointSize(18);
        Header->setFont(font3);
        AddTestimonialButton = new QPushButton(TestimonialPage);
        AddTestimonialButton->setObjectName(QString::fromUtf8("AddTestimonialButton"));
        AddTestimonialButton->setGeometry(QRect(270, 270, 131, 32));
        ViewTestimonialsButton = new QPushButton(TestimonialPage);
        ViewTestimonialsButton->setObjectName(QString::fromUtf8("ViewTestimonialsButton"));
        ViewTestimonialsButton->setGeometry(QRect(610, 270, 131, 32));
        stackedWidget->addWidget(TestimonialPage);
        ViewTestimonialPage = new QWidget();
        ViewTestimonialPage->setObjectName(QString::fromUtf8("ViewTestimonialPage"));
        header = new QLabel(ViewTestimonialPage);
        header->setObjectName(QString::fromUtf8("header"));
        header->setGeometry(QRect(350, 130, 231, 20));
        header->setFont(font3);
        DisplayReviews = new QTextBrowser(ViewTestimonialPage);
        DisplayReviews->setObjectName(QString::fromUtf8("DisplayReviews"));
        DisplayReviews->setGeometry(QRect(320, 170, 256, 192));
        BackTTestimonialButton = new QPushButton(ViewTestimonialPage);
        BackTTestimonialButton->setObjectName(QString::fromUtf8("BackTTestimonialButton"));
        BackTTestimonialButton->setGeometry(QRect(20, 10, 112, 32));
        stackedWidget->addWidget(ViewTestimonialPage);
        AddTestimonailPage = new QWidget();
        AddTestimonailPage->setObjectName(QString::fromUtf8("AddTestimonailPage"));
        Header_2 = new QLabel(AddTestimonailPage);
        Header_2->setObjectName(QString::fromUtf8("Header_2"));
        Header_2->setGeometry(QRect(420, 160, 411, 16));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Futura"));
        font4.setPointSize(18);
        font4.setBold(true);
        font4.setItalic(true);
        font4.setWeight(75);
        Header_2->setFont(font4);
        DoneButton = new QPushButton(AddTestimonailPage);
        DoneButton->setObjectName(QString::fromUtf8("DoneButton"));
        DoneButton->setGeometry(QRect(560, 300, 112, 32));
        AddReview = new QTextEdit(AddTestimonailPage);
        AddReview->setObjectName(QString::fromUtf8("AddReview"));
        AddReview->setGeometry(QRect(390, 190, 271, 111));
        stackedWidget->addWidget(AddTestimonailPage);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1012, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        MainLoginTitle->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">2D Graphics Modeler</span></p></body></html>", nullptr));
        TeamNameLoginTitle->setText(QCoreApplication::translate("MainWindow", "Scrum and Coke", nullptr));
        UsernameLabel->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        UsernameEntry->setText(QString());
        PasswordLabel->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        IncorrectPasswordLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">Incorrect Username/Password</span></p></body></html>", nullptr));
        LoginButton->setText(QCoreApplication::translate("MainWindow", "Login As Admin", nullptr));
        LoginButtonGuest->setText(QCoreApplication::translate("MainWindow", "Login As Guest", nullptr));
        LoginUserNoteTitle->setText(QCoreApplication::translate("MainWindow", "*To login as a Guest, no username or password is required", nullptr));
        LogoutButton->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        WelcomeTitle->setText(QCoreApplication::translate("MainWindow", "Welcome to the 2D Shapes Modeler!", nullptr));
        WhichUserTitle->setText(QCoreApplication::translate("MainWindow", "You are currently logged in as: ", nullptr));
        UserLabel->setText(QString());
        TestimonialsButton->setText(QCoreApplication::translate("MainWindow", "Testimonials", nullptr));
        TestimonialsButton->setDescription(QString());
        BackButton->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        Header->setText(QCoreApplication::translate("MainWindow", "WELCOME TO THE TESTIMONIALS PAGE", nullptr));
        AddTestimonialButton->setText(QCoreApplication::translate("MainWindow", "Add Testimonial", nullptr));
        ViewTestimonialsButton->setText(QCoreApplication::translate("MainWindow", "View Testimonials", nullptr));
        header->setText(QCoreApplication::translate("MainWindow", "Previous Testimonials", nullptr));
        BackTTestimonialButton->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        Header_2->setText(QCoreApplication::translate("MainWindow", "Please add your review", nullptr));
        DoneButton->setText(QCoreApplication::translate("MainWindow", "Done", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H