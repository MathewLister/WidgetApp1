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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
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
    QPushButton *alignLeftButton;
    QPushButton *alignRightButton;
    QPushButton *alignCenterButton;
    QPushButton *endButton;
    QMenuBar *menubar;
    QMenu *menuText_Edit_Widget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1063, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        updateButton = new QPushButton(centralwidget);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));
        updateButton->setGeometry(QRect(760, 50, 131, 41));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        updateButton->setFont(font);
        promptEnterText = new QLabel(centralwidget);
        promptEnterText->setObjectName(QString::fromUtf8("promptEnterText"));
        promptEnterText->setGeometry(QRect(70, 40, 211, 51));
        promptEnterText->setFont(font);
        textEntry = new QPlainTextEdit(centralwidget);
        textEntry->setObjectName(QString::fromUtf8("textEntry"));
        textEntry->setGeometry(QRect(290, 40, 461, 61));
        displayTarget = new QLabel(centralwidget);
        displayTarget->setObjectName(QString::fromUtf8("displayTarget"));
        displayTarget->setGeometry(QRect(200, 200, 641, 81));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(18);
        displayTarget->setFont(font1);
        displayTarget->setFrameShape(QFrame::Box);
        promptBackground = new QLabel(centralwidget);
        promptBackground->setObjectName(QString::fromUtf8("promptBackground"));
        promptBackground->setGeometry(QRect(120, 120, 171, 51));
        QFont font2;
        font2.setPointSize(10);
        promptBackground->setFont(font2);
        backgroundRedButton = new QPushButton(centralwidget);
        backgroundRedButton->setObjectName(QString::fromUtf8("backgroundRedButton"));
        backgroundRedButton->setGeometry(QRect(310, 120, 171, 61));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setWeight(50);
        backgroundRedButton->setFont(font3);
        backgroundBlueButton = new QPushButton(centralwidget);
        backgroundBlueButton->setObjectName(QString::fromUtf8("backgroundBlueButton"));
        backgroundBlueButton->setGeometry(QRect(550, 120, 171, 61));
        backgroundBlueButton->setFont(font3);
        promptForeground = new QLabel(centralwidget);
        promptForeground->setObjectName(QString::fromUtf8("promptForeground"));
        promptForeground->setGeometry(QRect(120, 310, 171, 51));
        promptForeground->setFont(font2);
        foregroundBlueButton = new QPushButton(centralwidget);
        foregroundBlueButton->setObjectName(QString::fromUtf8("foregroundBlueButton"));
        foregroundBlueButton->setGeometry(QRect(550, 310, 171, 61));
        foregroundBlueButton->setFont(font3);
        foregroundRedButton = new QPushButton(centralwidget);
        foregroundRedButton->setObjectName(QString::fromUtf8("foregroundRedButton"));
        foregroundRedButton->setGeometry(QRect(310, 310, 171, 61));
        foregroundRedButton->setFont(font3);
        alignLeftButton = new QPushButton(centralwidget);
        alignLeftButton->setObjectName(QString::fromUtf8("alignLeftButton"));
        alignLeftButton->setGeometry(QRect(170, 420, 161, 61));
        alignLeftButton->setFont(font3);
        alignRightButton = new QPushButton(centralwidget);
        alignRightButton->setObjectName(QString::fromUtf8("alignRightButton"));
        alignRightButton->setGeometry(QRect(620, 420, 161, 61));
        alignRightButton->setFont(font3);
        alignCenterButton = new QPushButton(centralwidget);
        alignCenterButton->setObjectName(QString::fromUtf8("alignCenterButton"));
        alignCenterButton->setGeometry(QRect(400, 420, 161, 61));
        alignCenterButton->setFont(font3);
        endButton = new QPushButton(centralwidget);
        endButton->setObjectName(QString::fromUtf8("endButton"));
        endButton->setGeometry(QRect(880, 460, 161, 61));
        endButton->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1063, 29));
        menuText_Edit_Widget = new QMenu(menubar);
        menuText_Edit_Widget->setObjectName(QString::fromUtf8("menuText_Edit_Widget"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuText_Edit_Widget->menuAction());

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
        alignLeftButton->setText(QApplication::translate("MainWindow", "Left", nullptr));
        alignRightButton->setText(QApplication::translate("MainWindow", "Right", nullptr));
        alignCenterButton->setText(QApplication::translate("MainWindow", "Center", nullptr));
        endButton->setText(QApplication::translate("MainWindow", "End", nullptr));
        menuText_Edit_Widget->setTitle(QApplication::translate("MainWindow", "Text Edit Widget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTWIDGETAPP_H
