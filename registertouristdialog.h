#ifndef REGISTERTOURISTDIALOG_H
#define REGISTERTOURISTDIALOG_H

#include <QDialog>
#include <QtSql>

namespace Ui {
class RegisterTouristDialog;
}

class RegisterTouristDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RegisterTouristDialog(QWidget *parent = nullptr);
    ~RegisterTouristDialog();

private slots:
    void on_loadPakcage_clicked();

    void on_btnSave_clicked();

    void on_btnReset_clicked();

private:
    Ui::RegisterTouristDialog *ui;
    QSqlTableModel *model;

    void initializeModel();
};

#endif // REGISTERTOURISTDIALOG_H
