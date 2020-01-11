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
    QLabel *prompt;
    QPlainTextEdit *textEntry;
    QLabel *displayTarget;
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
        prompt = new QLabel(centralwidget);
        prompt->setObjectName(QString::fromUtf8("prompt"));
        prompt->setGeometry(QRect(140, 30, 171, 51));
        textEntry = new QPlainTextEdit(centralwidget);
        textEntry->setObjectName(QString::fromUtf8("textEntry"));
        textEntry->setGeometry(QRect(310, 40, 441, 41));
        displayTarget = new QLabel(centralwidget);
        displayTarget->setObjectName(QString::fromUtf8("displayTarget"));
        displayTarget->setGeometry(QRect(240, 140, 511, 81));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(15);
        displayTarget->setFont(font1);
        displayTarget->setFrameShape(QFrame::Box);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1063, 29));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        updateButton->setText(QApplication::translate("MainWindow", "Update", nullptr));
        prompt->setText(QApplication::translate("MainWindow", "Enter Your Message:", nullptr));
        displayTarget->setText(QApplication::translate("MainWindow", "Hi There!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTWIDGETAPP_H
