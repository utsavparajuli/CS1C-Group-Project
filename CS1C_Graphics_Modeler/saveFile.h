#ifndef SAVEFILE_H
#define SAVEFILE_H
#include "shape.h"
#include "vector.h"
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QCoreApplication>
#include <QMessageBox>

void saveFile(custom::vector<shape*>&, const QString);

#endif // SAVEFILE_H
