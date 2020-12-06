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

    void on_EditShapeButton_clicked();
    void on_TestimonialsButton_clicked();

    void on_BackToCanvas_clicked();

    void on_AddTestimonial_clicked();

    void on_PastTestimonials_clicked();

    void on_pushButton_clicked();

    void on_backButton_clicked();

    void on_ContactUsBackButton_clicked();

    void on_ContactUsButton_clicked();

    void on_ReportsBackButton_clicked();

    void on_ReportsSortByEntry_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;
    int colorCounter;
    AddUpdateShape *addUpdateWindow;
    void populateReportsTable();

};
#endif // MAINWINDOW_H
