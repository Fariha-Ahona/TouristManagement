#ifndef ADDPACKAGEDIALOG_H
#define ADDPACKAGEDIALOG_H

#include <QDialog>
#include <QtSql>

namespace Ui {
class AddPackageDialog;
}

class AddPackageDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddPackageDialog(QWidget *parent = nullptr);
    ~AddPackageDialog();

private slots:
    void on_btnSave_clicked();

private:
    Ui::AddPackageDialog *ui;
    void addPackageToDatabase(const QString &name, const QString &description, double price);
};

#endif // ADDPACKAGEDIALOG_H
