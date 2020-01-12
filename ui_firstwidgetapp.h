/********************************************************************************
** Form generated from reading UI file 'firstwidgetapp.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTWIDGETAPP_H
#define UI_FIRSTWIDGETAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *updateButton;
    QLabel *promptEnterText;
    QPlainTextEdit *textEntry;
    QLabel *displayTarget;
    QLabel *promptBackground;
    QPushButton *backgroundRedButton;
    QPushButton *backgroundBlueButton;
    QLabel *promptForeground;
    QPushButton *foregroundBlueButton;
    QPushButton *foregroundRedButton;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1063, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        updateButton = new QPushButton(centralwidget);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));
        updateButton->setGeometry(QRect(750, 40, 131, 41));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        updateButton->setFont(font);
        promptEnterText = new QLabel(centralwidget);
        promptEnterText->setObjectName(QString::fromUtf8("promptEnterText"));
        promptEnterText->setGeometry(QRect(100, 30, 191, 51));
        QFont font1;
        font1.setPointSize(10);
        promptEnterText->setFont(font1);
        textEntry = new QPlainTextEdit(centralwidget);
        textEntry->setObjectName(QString::fromUtf8("textEntry"));
        textEntry->setGeometry(QRect(310, 40, 441, 41));
        displayTarget = new QLabel(centralwidget);
        displayTarget->setObjectName(QString::fromUtf8("displayTarget"));
        displayTarget->setGeometry(QRect(260, 210, 511, 81));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Calibri"));
        font2.setPointSize(15);
        displayTarget->setFont(font2);
        displayTarget->setFrameShape(QFrame::Box);
        promptBackground = new QLabel(centralwidget);
        promptBackground->setObjectName(QString::fromUtf8("promptBackground"));
        promptBackground->setGeometry(QRect(120, 120, 171, 51));
        promptBackground->setFont(font1);
        backgroundRedButton = new QPushButton(centralwidget);
        backgroundRedButton->setObjectName(QString::fromUtf8("backgroundRedButton"));
        backgroundRedButton->setGeometry(QRect(310, 120, 151, 61));
        backgroundRedButton->setFont(font);
        backgroundBlueButton = new QPushButton(centralwidget);
        backgroundBlueButton->setObjectName(QString::fromUtf8("backgroundBlueButton"));
        backgroundBlueButton->setGeometry(QRect(570, 120, 151, 61));
        backgroundBlueButton->setFont(font);
        promptForeground = new QLabel(centralwidget);
        promptForeground->setObjectName(QString::fromUtf8("promptForeground"));
        promptForeground->setGeometry(QRect(120, 310, 171, 51));
        promptForeground->setFont(font1);
        foregroundBlueButton = new QPushButton(centralwidget);
        foregroundBlueButton->setObjectName(QString::fromUtf8("foregroundBlueButton"));
        foregroundBlueButton->setGeometry(QRect(570, 310, 151, 61));
        foregroundBlueButton->setFont(font);
        foregroundRedButton = new QPushButton(centralwidget);
        foregroundRedButton->setObjectName(QString::fromUtf8("foregroundRedButton"));
        foregroundRedButton->setGeometry(QRect(310, 310, 151, 61));
        foregroundRedButton->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1063, 30));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        updateButton->setText(QApplication::translate("MainWindow", "Update", nullptr));
        promptEnterText->setText(QApplication::translate("MainWindow", "Enter Your Message:", nullptr));
        displayTarget->setText(QApplication::translate("MainWindow", "Hi There!", nullptr));
        promptBackground->setText(QApplication::translate("MainWindow", "Background:", nullptr));
        backgroundRedButton->setText(QApplication::translate("MainWindow", "Red", nullptr));
        backgroundBlueButton->setText(QApplication::translate("MainWindow", "Blue", nullptr));
        promptForeground->setText(QApplication::translate("MainWindow", "Foreground:", nullptr));
        foregroundBlueButton->setText(QApplication::translate("MainWindow", "Blue", nullptr));
        foregroundRedButton->setText(QApplication::translate("MainWindow", "Red", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTWIDGETAPP_H
