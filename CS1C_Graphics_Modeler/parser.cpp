#include "parser.h"
#include <QCoreApplication>
#include <QTextStream>
#include <QDebug>
#include <QMessageBox>

void parser(const QString fileName)
{
    QString file = qApp->applicationDirPath();  //Setting file to the path of the .exe file
    file.append('/' + fileName);  //appending the file name to the path

    QFile inputFile(file);    //opening the input file located at the path

    //Error checking if file exists.
    //If it does not, a QMessage box will pop up with the file name.
    if(!inputFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox fileNotFoundError;
        fileNotFoundError.setText("ERROR: Input file (\"" + fileName +"\") not found!");
        fileNotFoundError.exec();
        return;
    }

    QTextStream input(&inputFile);
    qDebug() << input.readLine();
}
