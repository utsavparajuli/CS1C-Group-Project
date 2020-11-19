#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_TestimonialsButton_clicked();

    void on_pushButton_clicked();

    void on_DoneButton_clicked();

    void on_AddTestimonialButton_clicked();

    void on_BackTTestimonialButton_clicked();

    void on_ViewTestimonialsButton_clicked();

    void on_BackButton_clicked();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
