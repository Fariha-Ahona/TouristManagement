/********************************************************************************
** Form generated from reading UI file 'findtouristdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDTOURISTDIALOG_H
#define UI_FINDTOURISTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_FindTouristDialog
{
public:
    QLineEdit *txtTourstfName;
    QLabel *label;
    QPushButton *btnFind;
    QTableView *tableView;

    void setupUi(QDialog *FindTouristDialog)
    {
        if (FindTouristDialog->objectName().isEmpty())
            FindTouristDialog->setObjectName("FindTouristDialog");
        FindTouristDialog->resize(554, 418);
        txtTourstfName = new QLineEdit(FindTouristDialog);
        txtTourstfName->setObjectName("txtTourstfName");
        txtTourstfName->setGeometry(QRect(130, 20, 181, 20));
        label = new QLabel(FindTouristDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 20, 91, 16));
        btnFind = new QPushButton(FindTouristDialog);
        btnFind->setObjectName("btnFind");
        btnFind->setGeometry(QRect(330, 20, 80, 18));
        tableView = new QTableView(FindTouristDialog);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(40, 50, 481, 341));

        retranslateUi(FindTouristDialog);

        QMetaObject::connectSlotsByName(FindTouristDialog);
    } // setupUi

    void retranslateUi(QDialog *FindTouristDialog)
    {
        FindTouristDialog->setWindowTitle(QCoreApplication::translate("FindTouristDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("FindTouristDialog", "Enter Tourist Name", nullptr));
        btnFind->setText(QCoreApplication::translate("FindTouristDialog", "Find", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindTouristDialog: public Ui_FindTouristDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDTOURISTDIALOG_H
