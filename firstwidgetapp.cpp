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

//updates display target window with text input
void MainWindow::on_updateButton_clicked()
{
    QString message = ui->textEntry->toPlainText();

    if (message.length() == 0)
    {
        message = "Enter a word into the text box above!";
    }

    ui->displayTarget->setText(message);
}

//changes forground to red
void MainWindow::on_foregroundRedButton_clicked()
{
    QPalette palette = ui->displayTarget->palette();
    palette.setColor(QPalette::WindowText, Qt::red);

    ui->displayTarget->setPalette(palette);
}

//changes foreground to green
void MainWindow::on_foregroundGreenButton_clicked()
{
    QPalette palette = ui->displayTarget->palette();
        palette.setColor(QPalette::Window, Qt::green);

        ui->displayTarget->setAutoFillBackground(true);
        ui->displayTarget->setPalette(palette);
}

//changes background to green
void MainWindow::on_backgroundGreenButton_clicked()
{
    QPalette palette = ui->displayTarget->palette();
       palette.setColor(QPalette::WindowText, Qt::green);

       ui->displayTarget->setPalette(palette);
}

//changes background to red
void MainWindow::on_backgroundRedButton_clicked()
{
    QPalette palette = ui->displayTarget->palette();
    palette.setColor(QPalette::Window, Qt::red);

    ui->displayTarget->setAutoFillBackground(true);
    ui->displayTarget->setPalette(palette);
}

//left alignment of text
void MainWindow::on_alignLeftButton_clicked()
{
    ui->displayTarget->setAlignment(Qt::AlignLeft);
}

//center alignment of text
void MainWindow::on_alignCenterButton_clicked()
{
    ui->displayTarget->setAlignment(Qt::AlignHCenter);
}

//center alignment of text
void MainWindow::on_alignRightButton_clicked()
{
    ui->displayTarget->setAlignment(Qt::AlignRight);
}

//exits app
void MainWindow::on_endButton_clicked()
{
    QApplication::quit();
}
