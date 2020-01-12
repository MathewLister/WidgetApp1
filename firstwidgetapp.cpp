#include "firstwidgetapp.h"
#include "ui_firstwidgetapp.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_updateButton_clicked()
{
    QString message = ui->textEntry->toPlainText();

    if (message.length() == 0)
    {
        message = "Enter a word into the text box above!";
    }

    ui->displayTarget->setText(message);
}

void MainWindow::on_foregroundRedButton_clicked()
{
    QPalette palette = ui->displayTarget->palette();
    palette.setColor(QPalette::WindowText, Qt::red);

    ui->displayTarget->setPalette(palette);
}


void MainWindow::on_foregroundBlueButton_clicked()
{
    QPalette palette = ui->displayTarget->palette();
    palette.setColor(QPalette::WindowText, Qt::blue);

    ui->displayTarget->setPalette(palette);
}

void MainWindow::on_backgroundRedButton_clicked()
{
    QPalette palette = ui->displayTarget->palette();
    palette.setColor(QPalette::Window, Qt::red);

    ui->displayTarget->setAutoFillBackground(true);
    ui->displayTarget->setPalette(palette);
}

void MainWindow::on_backgroundBlueButton_clicked()
{
    QPalette palette = ui->displayTarget->palette();
    palette.setColor(QPalette::Window, Qt::blue);

    ui->displayTarget->setAutoFillBackground(true);
    ui->displayTarget->setPalette(palette);
}
