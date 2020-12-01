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
    void on_ContactButton_clicked();
    void colorChange();

<<<<<<< HEAD
    void on_ContactButton_toggled(bool checked);
=======
    void on_AddShapeButton_clicked();
>>>>>>> main

private:
    Ui::MainWindow *ui;
    int colorCounter;
    AddUpdateShape *addUpdateWindow;

};
#endif // MAINWINDOW_H
