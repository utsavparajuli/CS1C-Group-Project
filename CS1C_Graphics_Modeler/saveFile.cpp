#include "saveFile.h"

void saveFile(custom::vector<shape*> &shapeList, const QString fileName)
{
    QString filePath = qApp->applicationDirPath();
    filePath.append('/' + fileName);

    QFile outputFile(filePath);
    if(!outputFile.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QMessageBox fileNotOpenedError;
        fileNotOpenedError.setText("ERROR: Output file (\"" + fileName +"\") could not be opened!");
        fileNotOpenedError.exec();
        exit(-1);
    }

    QTextStream out(&outputFile);

    for(int i = 0; i < shapeList.size(); i++)
    {
        out << shapeList[i]->getShapeString();
    }
    return;
}
