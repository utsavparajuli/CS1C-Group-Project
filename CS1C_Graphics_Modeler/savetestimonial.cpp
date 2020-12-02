#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addupdateshape.h"
#include "ui_addupdateshape.h"
#include "line.h"
#include <QDebug>
#include <QTimer>
#include <QMessageBox>
#include <QMediaPlayer>
#include "savetestimonial.h"

void saveTestimonial(const QString text)
{
    QString filePath = qApp->applicationDirPath();
    QString fileName = "testimonial.txt";
    filePath.append('/' + fileName);

    QFile outputFile(filePath);
    if(!outputFile.open(QIODevice::WriteOnly | QIODevice::Append))
    {
        QMessageBox fileNotOpenedError;
        fileNotOpenedError.setText("ERROR: Output file (\"" + fileName + "\") could not be opened!");
        fileNotOpenedError.exec();
        exit(-1);
    }

    QTextStream out(&outputFile);

    out<< text << Qt::endl << Qt::endl << Qt::endl;

    return;
}

//QTextStream outputTestimonial()
//{
//    QString filePath = qApp->applicationDirPath();
//    QString fileName = "testimonial.txt";
//    filePath.append('/' + fileName);

//    QFile inputFile(filePath);

//    if(!inputFile.open(QIODevice::ReadOnly | QIODevice::Text))
//    {
//        QMessageBox fileNotOpenedError;
//        fileNotOpenedError.setText("ERROR: Input file (\"" + fileName + "\") could not be opened!");
//        fileNotOpenedError.exec();
//        exit(-1);
//    }

//   QTextStream input(&inputFile);

//}
