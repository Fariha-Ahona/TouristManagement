#include "registertouristdialog.h"
#include "ui_registertouristdialog.h"
#include <QMessageBox>

RegisterTouristDialog::RegisterTouristDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegisterTouristDialog),
    model(nullptr)
{
    ui->setupUi(this);
    initializeModel();
}

RegisterTouristDialog::~RegisterTouristDialog()
{
    delete ui;
    delete model; // Clean up the model
}

void RegisterTouristDialog::initializeModel()
{
    model = new QSqlTableModel(this);
    model->setTable("packages");
    model->select();

    ui->cmbChoosePackage->setModel(model);
    ui->cmbChoosePackage->setModelColumn(model->fieldIndex("name"));
}

void RegisterTouristDialog::on_loadPakcage_clicked()
{
    int currentIndex = ui->cmbChoosePackage->currentIndex();
    if (currentIndex != -1) {
        QSqlRecord record = model->record(currentIndex);
        QString description = record.value("description").toString();
        ui->txtPackageDescription->setText(description);
    }
}

void RegisterTouristDialog::on_btnSave_clicked()
{
    QString firstName = ui->txtFirstName->text();
    QString lastName = ui->txtLastName->text();
    QString passportNo = ui->txtPassportNo->text();
    QString contactNo = ui->txtContactNo->text();
    QString permanentAddress = ui->txtPermanentAddress->text();
    QString packageName = ui->cmbChoosePackage->currentText();

    QSqlQuery query;
    query.prepare("INSERT INTO tourists (name, contact, address) "
                  "VALUES (:name, :contact, :address)");
    query.bindValue(":name", firstName + " " + lastName);
    query.bindValue(":contact", contactNo);
    query.bindValue(":address", permanentAddress);

    if (query.exec()) {
        QMessageBox::information(this, "Success", "Tourist registered successfully!");
    } else {
        QMessageBox::critical(this, "Error", "Failed to register tourist: " + query.lastError().text());
    }
}

void RegisterTouristDialog::on_btnReset_clicked()
{
    ui->txtFirstName->clear();
    ui->txtLastName->clear();
    ui->txtPassportNo->clear();
    ui->txtContactNo->clear();
    ui->txtPermanentAddress->clear();
    ui->cmbChoosePackage->setCurrentIndex(-1);
    ui->txtPackageDescription->clear();
}
