#include "findtouristdialog.h"
#include "ui_findtouristdialog.h"

FindTouristDialog::FindTouristDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FindTouristDialog),
    model(nullptr)
{
    ui->setupUi(this);
    initializeModel();
}

FindTouristDialog::~FindTouristDialog()
{
    delete ui;
    delete model; // Clean up the model
}

void FindTouristDialog::initializeModel()
{
    model = new QSqlTableModel(this);
    model->setTable("tourists");
    model->select();

    ui->tableView->setModel(model);
}

void FindTouristDialog::on_btnFind_clicked()
{
    QString touristName = ui->txtTourstfName->text();

    if (!touristName.isEmpty()) {
        model->setFilter(QString("name LIKE '%%1%'").arg(touristName));
        model->select();
    } else {
        model->setTable("tourists");
        model->select();
    }
}
