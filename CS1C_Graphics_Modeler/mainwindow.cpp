#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "line.h"
#include <QDebug>
#include <QTimer>
#include <QMessageBox>
#include <QMediaPlayer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0); //Starting program on the login page
    colorCounter = 1;

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::colorChange()
{
    switch(colorCounter)
    {
    case 1 : ui->stackedWidget->setStyleSheet("background-color:red");
             colorCounter = 2;
             break;
    case 2 : ui->stackedWidget->setStyleSheet("background-color:magenta");
             colorCounter = 3;
             break;
    case 3 : ui->stackedWidget->setStyleSheet("background-color:blue");
             colorCounter = 1;
             break;
    }
}


/*************************************************************************
 * MainWindow::on_LoginButton_clicked()
 * -----------------------------------------------------------------------
 * This function tests if the username/password is correct.  If so, the
 * MainPage is displayed with administrator privileges.  If not, an error
 * message is displayed.
 * ***********************************************************************/
void MainWindow::on_LoginButton_clicked()
{
    if(ui->UsernameEntry->text() == "Admin" && ui->PasswordEntry->text() == "Admin") //Checking if entries are correct
    {
        ui->UserLabel->setText("Admin"); //Set user label on MainPage to "admin"
        ui->stackedWidget->setCurrentIndex(1); //Changing to MainPage
        ui->UsernameEntry->setText("");
        ui->PasswordEntry->setText(""); //Setting username/password entries empty after login
    }
    else if(ui->UsernameEntry->text() == "RAVE" && ui->PasswordEntry->text() == "RAVE")
    {
        QMessageBox raveMessageBox;
        raveMessageBox.setText("RAVE MODE ACTIVATED!!!  >:D");
        raveMessageBox.exec();

        QMediaPlayer *player;
        player = new QMediaPlayer;
        QString musicFilePath = qApp->applicationDirPath();
        musicFilePath.append('/' + QString("RaveMusic.mp3"));
        player->setMedia(QUrl::fromLocalFile(musicFilePath));
        player->setVolume(50);
        player->play();

        QTimer *timer = new QTimer(this);
        connect(timer, SIGNAL(timeout()), this, SLOT(colorChange()));
        timer->start(25);
    }
    else
    {
        QMessageBox passwordBox;
        passwordBox.setText("ERROR - Incorrect password!");
        passwordBox.exec();
    }
}

void MainWindow::on_LogoutButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

/*************************************************************************
 * MainWindow::on_LoginButtonGuest_clicked()
 * -----------------------------------------------------------------------
 * This function switches to the MainPage without a username/password with
 * "guest user" privileges.
 * ***********************************************************************/
void MainWindow::on_LoginButtonGuest_clicked()
{
    ui->UserLabel->setText("Guest"); //Set user label on MainPage to "guest"
    ui->stackedWidget->setCurrentIndex(1); //Changing to MainPage
    ui->UsernameEntry->setText("");
    ui->PasswordEntry->setText(""); //Setting username/password entries empty after login
}
