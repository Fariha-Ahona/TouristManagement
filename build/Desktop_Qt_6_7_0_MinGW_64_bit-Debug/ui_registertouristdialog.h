/********************************************************************************
** Form generated from reading UI file 'registertouristdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERTOURISTDIALOG_H
#define UI_REGISTERTOURISTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterTouristDialog
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *txtFirstName;
    QLabel *label_3;
    QLineEdit *txtLastName;
    QLabel *label_4;
    QLineEdit *txtPassportNo;
    QLabel *label_5;
    QLineEdit *txtContactNo;
    QLabel *label_6;
    QLineEdit *txtPermanentAddress;
    QLabel *label_7;
    QComboBox *cmbChoosePackage;
    QPushButton *loadPakcage;
    QLabel *label_8;
    QTextEdit *txtPackageDescription;
    QPushButton *btnReset;
    QPushButton *btnSave;

    void setupUi(QDialog *RegisterTouristDialog)
    {
        if (RegisterTouristDialog->objectName().isEmpty())
            RegisterTouristDialog->setObjectName("RegisterTouristDialog");
        RegisterTouristDialog->resize(593, 414);
        formLayoutWidget = new QWidget(RegisterTouristDialog);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(40, 20, 451, 331));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txtFirstName = new QLineEdit(formLayoutWidget);
        txtFirstName->setObjectName("txtFirstName");

        formLayout->setWidget(0, QFormLayout::FieldRole, txtFirstName);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        txtLastName = new QLineEdit(formLayoutWidget);
        txtLastName->setObjectName("txtLastName");

        formLayout->setWidget(1, QFormLayout::FieldRole, txtLastName);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        txtPassportNo = new QLineEdit(formLayoutWidget);
        txtPassportNo->setObjectName("txtPassportNo");

        formLayout->setWidget(2, QFormLayout::FieldRole, txtPassportNo);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        txtContactNo = new QLineEdit(formLayoutWidget);
        txtContactNo->setObjectName("txtContactNo");

        formLayout->setWidget(3, QFormLayout::FieldRole, txtContactNo);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName("label_6");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        txtPermanentAddress = new QLineEdit(formLayoutWidget);
        txtPermanentAddress->setObjectName("txtPermanentAddress");

        formLayout->setWidget(4, QFormLayout::FieldRole, txtPermanentAddress);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName("label_7");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_7);

        cmbChoosePackage = new QComboBox(formLayoutWidget);
        cmbChoosePackage->setObjectName("cmbChoosePackage");

        formLayout->setWidget(5, QFormLayout::FieldRole, cmbChoosePackage);

        loadPakcage = new QPushButton(formLayoutWidget);
        loadPakcage->setObjectName("loadPakcage");
        loadPakcage->setMaximumSize(QSize(100, 25));

        formLayout->setWidget(9, QFormLayout::FieldRole, loadPakcage);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName("label_8");

        formLayout->setWidget(10, QFormLayout::LabelRole, label_8);

        txtPackageDescription = new QTextEdit(formLayoutWidget);
        txtPackageDescription->setObjectName("txtPackageDescription");
        txtPackageDescription->setEnabled(false);

        formLayout->setWidget(10, QFormLayout::FieldRole, txtPackageDescription);

        btnReset = new QPushButton(RegisterTouristDialog);
        btnReset->setObjectName("btnReset");
        btnReset->setGeometry(QRect(220, 360, 80, 25));
        btnSave = new QPushButton(RegisterTouristDialog);
        btnSave->setObjectName("btnSave");
        btnSave->setGeometry(QRect(320, 360, 80, 25));

        retranslateUi(RegisterTouristDialog);

        QMetaObject::connectSlotsByName(RegisterTouristDialog);
    } // setupUi

    void retranslateUi(QDialog *RegisterTouristDialog)
    {
        RegisterTouristDialog->setWindowTitle(QCoreApplication::translate("RegisterTouristDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("RegisterTouristDialog", "First Name", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterTouristDialog", "Last Name", nullptr));
        label_4->setText(QCoreApplication::translate("RegisterTouristDialog", "Passport No", nullptr));
        label_5->setText(QCoreApplication::translate("RegisterTouristDialog", "Contact No", nullptr));
        label_6->setText(QCoreApplication::translate("RegisterTouristDialog", "Permanent Address", nullptr));
        label_7->setText(QCoreApplication::translate("RegisterTouristDialog", "Choose Package", nullptr));
        loadPakcage->setText(QCoreApplication::translate("RegisterTouristDialog", "Load Packages", nullptr));
        label_8->setText(QCoreApplication::translate("RegisterTouristDialog", "Package Description", nullptr));
        btnReset->setText(QCoreApplication::translate("RegisterTouristDialog", "Reset", nullptr));
        btnSave->setText(QCoreApplication::translate("RegisterTouristDialog", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterTouristDialog: public Ui_RegisterTouristDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERTOURISTDIALOG_H
