#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "addupdateshape.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_LoginButton_clicked();
    void on_LogoutButton_clicked();
    void on_LoginButtonGuest_clicked();
    void colorChange();

    void on_AddShapeButton_clicked();
    void on_ContactUsButton_clicked();

    void on_EditShapeButton_clicked();

private:
    Ui::MainWindow *ui;
    int colorCounter;
    AddUpdateShape *addUpdateWindow;

};
#endif // MAINWINDOW_H
