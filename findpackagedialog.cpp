#include "findpackagedialog.h"
#include "ui_findpackagedialog.h"
#include <QMessageBox>

FindPackageDialog::FindPackageDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FindPackageDialog)
{
    ui->setupUi(this);
    model = new QSqlTableModel(this);
    setupModel();
}

FindPackageDialog::~FindPackageDialog()
{
    delete ui;
}

void FindPackageDialog::setupModel()
{
    model->setTable("packages");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();

    ui->tableView->setModel(model);
    ui->tableView->hideColumn(0); // Hide the ID column
    ui->tableView->resizeColumnsToContents();
}

void FindPackageDialog::on_btnFindPackage_clicked()
{
    QString packageName = ui->txtPackageName->text();

    if (packageName.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter a package name to search.");
        return;
    }

    model->setFilter(QString("name LIKE '%%1%'").arg(packageName));
    model->select();
}
