#include "addpackagedialog.h"
#include "ui_addpackagedialog.h"
#include <QMessageBox>

AddPackageDialog::AddPackageDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddPackageDialog)
{
    ui->setupUi(this);
}

AddPackageDialog::~AddPackageDialog()
{
    delete ui;
}

void AddPackageDialog::on_btnSave_clicked()
{
    QString name = ui->txtPackageName->text();
    QString description = ui->txtDescription->toPlainText();
    double price = ui->txtAmount->text().toDouble();

    if (name.isEmpty() || description.isEmpty() || price <= 0) {
        QMessageBox::warning(this, "Input Error", "Please enter valid package details.");
        return;
    }

    addPackageToDatabase(name, description, price);
}

void AddPackageDialog::addPackageToDatabase(const QString &name, const QString &description, double price)
{
    QSqlQuery query;
    query.prepare("INSERT INTO packages (name, description, price) VALUES (:name, :description, :price)");
    query.bindValue(":name", name);
    query.bindValue(":description", description);
    query.bindValue(":price", price);

    if (query.exec()) {
        QMessageBox::information(this, "Success", "Package added successfully.");
        accept();
    } else {
        QMessageBox::critical(this, "Database Error", "Failed to add package to the database.");
    }
}
