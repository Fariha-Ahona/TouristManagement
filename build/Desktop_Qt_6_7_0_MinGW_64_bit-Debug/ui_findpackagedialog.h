/********************************************************************************
** Form generated from reading UI file 'findpackagedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDPACKAGEDIALOG_H
#define UI_FINDPACKAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_FindPackageDialog
{
public:
    QPushButton *btnFindPackage;
    QLineEdit *txtPackageName;
    QTableView *tableView;
    QLabel *label;

    void setupUi(QDialog *FindPackageDialog)
    {
        if (FindPackageDialog->objectName().isEmpty())
            FindPackageDialog->setObjectName("FindPackageDialog");
        FindPackageDialog->resize(635, 420);
        btnFindPackage = new QPushButton(FindPackageDialog);
        btnFindPackage->setObjectName("btnFindPackage");
        btnFindPackage->setGeometry(QRect(370, 20, 80, 18));
        txtPackageName = new QLineEdit(FindPackageDialog);
        txtPackageName->setObjectName("txtPackageName");
        txtPackageName->setGeometry(QRect(160, 20, 191, 20));
        tableView = new QTableView(FindPackageDialog);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(80, 90, 481, 311));
        label = new QLabel(FindPackageDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 20, 71, 16));

        retranslateUi(FindPackageDialog);

        QMetaObject::connectSlotsByName(FindPackageDialog);
    } // setupUi

    void retranslateUi(QDialog *FindPackageDialog)
    {
        FindPackageDialog->setWindowTitle(QCoreApplication::translate("FindPackageDialog", "Dialog", nullptr));
        btnFindPackage->setText(QCoreApplication::translate("FindPackageDialog", "Find Package", nullptr));
        label->setText(QCoreApplication::translate("FindPackageDialog", "Package Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindPackageDialog: public Ui_FindPackageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDPACKAGEDIALOG_H
