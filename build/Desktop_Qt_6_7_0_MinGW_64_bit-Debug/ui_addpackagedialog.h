/********************************************************************************
** Form generated from reading UI file 'addpackagedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPACKAGEDIALOG_H
#define UI_ADDPACKAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddPackageDialog
{
public:
    QWidget *widget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *txtPackageName;
    QLabel *label_2;
    QTextEdit *txtDescription;
    QLabel *label_3;
    QLineEdit *txtAmount;
    QPushButton *btnSave;

    void setupUi(QDialog *AddPackageDialog)
    {
        if (AddPackageDialog->objectName().isEmpty())
            AddPackageDialog->setObjectName("AddPackageDialog");
        AddPackageDialog->resize(612, 373);
        widget = new QWidget(AddPackageDialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(90, 230, 120, 80));
        formLayoutWidget = new QWidget(AddPackageDialog);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(160, 70, 341, 129));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txtPackageName = new QLineEdit(formLayoutWidget);
        txtPackageName->setObjectName("txtPackageName");

        formLayout->setWidget(0, QFormLayout::FieldRole, txtPackageName);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        txtDescription = new QTextEdit(formLayoutWidget);
        txtDescription->setObjectName("txtDescription");

        formLayout->setWidget(1, QFormLayout::FieldRole, txtDescription);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        txtAmount = new QLineEdit(formLayoutWidget);
        txtAmount->setObjectName("txtAmount");

        formLayout->setWidget(2, QFormLayout::FieldRole, txtAmount);

        btnSave = new QPushButton(AddPackageDialog);
        btnSave->setObjectName("btnSave");
        btnSave->setGeometry(QRect(420, 220, 80, 18));

        retranslateUi(AddPackageDialog);

        QMetaObject::connectSlotsByName(AddPackageDialog);
    } // setupUi

    void retranslateUi(QDialog *AddPackageDialog)
    {
        AddPackageDialog->setWindowTitle(QCoreApplication::translate("AddPackageDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddPackageDialog", "Pakckage Name", nullptr));
        label_2->setText(QCoreApplication::translate("AddPackageDialog", "Description", nullptr));
        label_3->setText(QCoreApplication::translate("AddPackageDialog", "Price", nullptr));
        btnSave->setText(QCoreApplication::translate("AddPackageDialog", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddPackageDialog: public Ui_AddPackageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPACKAGEDIALOG_H
