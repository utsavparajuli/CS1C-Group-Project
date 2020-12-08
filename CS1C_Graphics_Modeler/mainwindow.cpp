#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addupdateshape.h"
#include "ui_addupdateshape.h"

#include "ui_deleteShape.h"
#include "line.h"
#include <QDebug>
#include <QTimer>
#include <QMessageBox>
#include <QMediaPlayer>
#include "savetestimonial.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0); //Starting program on the login page
    colorCounter = 1;

    //Setting logo
    QString logoFilePath = qApp->applicationDirPath();
    logoFilePath.append("/logo.png");
    ui->Logo->setAlignment(Qt::AlignCenter);

    QPixmap image;
    if(image.load(logoFilePath))
    {
        image = image.scaled(ui->Logo->size(), Qt::KeepAspectRatio);
        ui->Logo->setPixmap(image);
    }

    ui->ReportsTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
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
    case 2 : ui->stackedWidget->setStyleSheet("background-color:green");
             colorCounter = 3;
             break;
    case 3 : ui->stackedWidget->setStyleSheet("background-color:blue");
             colorCounter = 4;
             break;
    case 4 : ui->stackedWidget->setStyleSheet("background-color:yellow");
             colorCounter = 5;
             break;
    case 5 : ui->stackedWidget->setStyleSheet("background-color:cyan");
             colorCounter = 6;
             break;
    case 6 : ui->stackedWidget->setStyleSheet("background-color:magenta");
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
        ui->WhichUserTitle_2->setText("You are currently logged in as: Admin"); //Set user label on MainPage to "admin"
        ui->stackedWidget->setCurrentIndex(1); //Changing to MainPage
        ui->UsernameEntry->setText("");
        ui->PasswordEntry->setText(""); //Setting username/password entries empty after login
        ui->AddShapeButton->setEnabled(true);
        ui->EditShapeButton->setEnabled(true);
        ui->DeleteShapeButton->setEnabled(true);
    }
    else if(ui->UsernameEntry->text() == "RAVE" && ui->PasswordEntry->text() == "RAVE")
    {
        QMediaPlayer *player;
        player = new QMediaPlayer;
        QString musicFilePath = qApp->applicationDirPath();
        musicFilePath.append('/' + QString("RaveMusic.mp3"));
        player->setMedia(QUrl::fromLocalFile(musicFilePath));
        player->setVolume(50);
        player->play();

        QTimer *timer = new QTimer(this);
        connect(timer, SIGNAL(timeout()), this, SLOT(colorChange()));
        timer->start(416);

        QMessageBox raveMessageBox;
        raveMessageBox.setText("RAVE MODE ACTIVATED!!!  >:D");
        raveMessageBox.exec();
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
    ui->WhichUserTitle_2->setText("You are currently logged in as: Guest"); //Set user label on MainPage to "guest"
    ui->stackedWidget->setCurrentIndex(1); //Changing to MainPage
    ui->UsernameEntry->setText("");
    ui->PasswordEntry->setText(""); //Setting username/password entries empty after login
    ui->AddShapeButton->setEnabled(false);
    ui->EditShapeButton->setEnabled(false);
    ui->DeleteShapeButton->setEnabled(false);
}

void MainWindow::on_AddShapeButton_clicked()
{
    addUpdateWindow = new AddUpdateShape(ui->drawArea->getVec());
    addUpdateWindow->addShapeSetup();
    addUpdateWindow->show();
}

void MainWindow::on_EditShapeButton_clicked()
{
    if(ui->drawArea->getVec()->size() == 0)
    {
        QMessageBox noShapes;
        noShapes.setText("WARNING: There must be at least one shape to open the edit window.");
        noShapes.exec();
    }
    else
    {
        addUpdateWindow = new AddUpdateShape(ui->drawArea->getVec());
        addUpdateWindow->updateShapeSetup();
        addUpdateWindow->show();
    }
}

void MainWindow::on_TestimonialsButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_BackToCanvas_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_AddTestimonial_clicked()
{
    QString review = ui->plainTextEdit->toPlainText();
    saveTestimonial(review);

    ui->plainTextEdit->clear();
}

void MainWindow::on_PastTestimonials_clicked()
{

    ui->stackedWidget->setCurrentIndex(3);
   // outputTestimonial();

    QString filePath = qApp->applicationDirPath();
    QString fileName = "testimonial.txt";
    filePath.append('/' + fileName);

    QFile inputFile(filePath);

    if(!inputFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox fileNotOpenedError;
        fileNotOpenedError.setText("ERROR: Input file (\"" + fileName + "\") could not be opened!");
        fileNotOpenedError.exec();
        exit(-1);
    }

    QTextStream input(&inputFile);

    ui->output->setText(input.readAll());

}

void MainWindow::on_pushButton_clicked()//Reports page
{
    ui->stackedWidget->setCurrentIndex(5);
    ui->ReportsTable->setRowCount(ui->drawArea->getVec()->size());
    populateReportsTable();
}

void MainWindow::on_backButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_ContactUsBackButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_ContactUsButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_ReportsBackButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_ReportsSortByEntry_currentIndexChanged(int index)
{

    switch(index)
    {
    case 0 : ui->ReportsTable->sortItems(0);
             break;
    case 1 : ui->ReportsTable->sortItems(3);
             break;
    case 2 : ui->ReportsTable->sortItems(2);
    };
}

void MainWindow::populateReportsTable()
{
    custom::vector<shape*> *currentVec = ui->drawArea->getVec();

    for(int i = 0; i < currentVec->size(); i++)
    {

        //Adding shape id to table
        QTableWidgetItem *tempItem = new QTableWidgetItem;
        tempItem->setData(Qt::DisplayRole, (*currentVec)[i]->getID());
        ui->ReportsTable->setItem(i, 0, tempItem);

        ui->ReportsTable->setItem(i, 1, new QTableWidgetItem((*currentVec)[i]->get_shapeTypeString()));  //Adding shape type to the table

        tempItem = new QTableWidgetItem;
        tempItem->setData(Qt::DisplayRole, (*currentVec)[i]->calcPerimeter());
        ui->ReportsTable->setItem(i, 2, tempItem);

        tempItem = new QTableWidgetItem;
        tempItem->setData(Qt::DisplayRole, (*currentVec)[i]->calcArea());
        ui->ReportsTable->setItem(i, 3, tempItem);

        if((*currentVec)[i]->get_shape() == ShapeType::Line || (*currentVec)[i]->get_shape() == ShapeType::Polyline)
        {
            //Line and Polyline stuff goes here
            ui->ReportsTable->setItem(i, 4, new QTableWidgetItem((*currentVec)[i]->get_penColorString()));
            ui->ReportsTable->setItem(i, 5, new QTableWidgetItem(QString::number((*currentVec)[i]->get_pen().width())));
            ui->ReportsTable->setItem(i, 6, new QTableWidgetItem((*currentVec)[i]->get_penStyleString()));
            ui->ReportsTable->setItem(i, 7, new QTableWidgetItem((*currentVec)[i]->get_penCapStyleString()));
            ui->ReportsTable->setItem(i, 8, new QTableWidgetItem((*currentVec)[i]->get_penJoinStyleString()));
        }
        else if((*currentVec)[i]->get_shape() == ShapeType::Polygon || (*currentVec)[i]->get_shape() == ShapeType::Rectangle ||
                (*currentVec)[i]->get_shape() == ShapeType::Square || (*currentVec)[i]->get_shape() == ShapeType::Ellipse ||
                (*currentVec)[i]->get_shape() == ShapeType::Circle)
        {
            //Shapes stuff goes here
            ui->ReportsTable->setItem(i, 4, new QTableWidgetItem((*currentVec)[i]->get_penColorString()));
            ui->ReportsTable->setItem(i, 5, new QTableWidgetItem(QString::number((*currentVec)[i]->get_pen().width())));
            ui->ReportsTable->setItem(i, 6, new QTableWidgetItem((*currentVec)[i]->get_penStyleString()));
            ui->ReportsTable->setItem(i, 7, new QTableWidgetItem((*currentVec)[i]->get_penCapStyleString()));
            ui->ReportsTable->setItem(i, 8, new QTableWidgetItem((*currentVec)[i]->get_penJoinStyleString()));
            ui->ReportsTable->setItem(i, 9, new QTableWidgetItem((*currentVec)[i]->get_brushColorString()));
            ui->ReportsTable->setItem(i, 10, new QTableWidgetItem((*currentVec)[i]->get_brushStyleString()));
        }
        else
        {
            //Text Stuff goes here
            // Text String, Text Color, Text Alignment, Text Point size, Text Font Family, Text Font Style, Text Font Weight
            ui->ReportsTable->setItem(i, 11, new QTableWidgetItem((*currentVec)[i]->get_textString()));
            ui->ReportsTable->setItem(i, 12, new QTableWidgetItem((*currentVec)[i]->get_textColor()));
            ui->ReportsTable->setItem(i, 13, new QTableWidgetItem((*currentVec)[i]->get_textAllignment()));
            ui->ReportsTable->setItem(i, 14, new QTableWidgetItem(QString::number((*currentVec)[i]->get_textPointSize())));
            ui->ReportsTable->setItem(i, 15, new QTableWidgetItem((*currentVec)[i]->get_textFont()));
            ui->ReportsTable->setItem(i, 16, new QTableWidgetItem((*currentVec)[i]->get_textFontStyle()));
            ui->ReportsTable->setItem(i, 17, new QTableWidgetItem((*currentVec)[i]->get_textFontWeight()));

            qDebug() << "Font style from reports: " <<(*currentVec)[i]->get_textFontStyle();
        }
    }
}

void MainWindow::on_DeleteShapeButton_clicked()
{
    deleteShapeWindow = new deleteShape(ui->drawArea->getVec());
    deleteShapeWindow->show();
}
