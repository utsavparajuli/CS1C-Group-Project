/**************************************************************
 * CS1C Group Project
 * Team Name: Scrum and Coke
 * Team Members: James Dowty, Joey Campbell, Behrad Moussavi,
 *               Ahazz Khan, Kate Steer, Utsav Parajuli,
 *               Nick Lozano, Brandon Nguyen, and Tim Diersing
 * ***********************************************************/
#include "mainwindow.h"

#include <QApplication>

#include "parser.h"//***TSET CODE***

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    QString file = "shapes.txt";
    parser(file);//***TEST CODE***

    return a.exec();
}
