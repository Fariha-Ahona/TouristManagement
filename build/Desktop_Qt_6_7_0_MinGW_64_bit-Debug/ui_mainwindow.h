/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *registerTouristButton;
    QPushButton *findPackageButton;
    QPushButton *addPackageButton;
    QPushButton *findTouristButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        registerTouristButton = new QPushButton(centralwidget);
        registerTouristButton->setObjectName("registerTouristButton");
        registerTouristButton->setGeometry(QRect(470, 130, 120, 65));
        registerTouristButton->setMaximumSize(QSize(120, 65));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        registerTouristButton->setFont(font);
        findPackageButton = new QPushButton(centralwidget);
        findPackageButton->setObjectName("findPackageButton");
        findPackageButton->setGeometry(QRect(180, 230, 120, 65));
        findPackageButton->setFont(font);
        addPackageButton = new QPushButton(centralwidget);
        addPackageButton->setObjectName("addPackageButton");
        addPackageButton->setGeometry(QRect(180, 130, 120, 65));
        addPackageButton->setMaximumSize(QSize(120, 65));
        addPackageButton->setFont(font);
        findTouristButton = new QPushButton(centralwidget);
        findTouristButton->setObjectName("findTouristButton");
        findTouristButton->setGeometry(QRect(470, 230, 120, 65));
        findTouristButton->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        registerTouristButton->setText(QCoreApplication::translate("MainWindow", "Register Tourist", nullptr));
        findPackageButton->setText(QCoreApplication::translate("MainWindow", "Find Package", nullptr));
        addPackageButton->setText(QCoreApplication::translate("MainWindow", "Add Package", nullptr));
        findTouristButton->setText(QCoreApplication::translate("MainWindow", "Find Tourist", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
