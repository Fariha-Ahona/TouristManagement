#ifndef FINDPACKAGEDIALOG_H
#define FINDPACKAGEDIALOG_H

#include <QDialog>
#include <QtSql>
#include <QSqlTableModel>

namespace Ui {
class FindPackageDialog;
}

class FindPackageDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FindPackageDialog(QWidget *parent = nullptr);
    ~FindPackageDialog();

private slots:
    void on_btnFindPackage_clicked();

private:
    Ui::FindPackageDialog *ui;
    QSqlTableModel *model;
    void setupModel();
};

#endif // FINDPACKAGEDIALOG_H
