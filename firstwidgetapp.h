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
    void on_updateButton_clicked();

    void on_foregroundRedButton_clicked();

    void on_backgroundRedButton_clicked();

     void on_alignLeftButton_clicked();

    void on_alignCenterButton_clicked();

    void on_alignRightButton_clicked();

    void on_endButton_clicked();

    void on_backgroundGreenButton_clicked();

    void on_foregroundGreenButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
