#ifndef FINDTOURISTDIALOG_H
#define FINDTOURISTDIALOG_H

#include <QDialog>
#include <QtSql>

namespace Ui {
class FindTouristDialog;
}

class FindTouristDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FindTouristDialog(QWidget *parent = nullptr);
    ~FindTouristDialog();

private slots:
    void on_btnFind_clicked();

private:
    Ui::FindTouristDialog *ui;
    QSqlTableModel *model;

    void initializeModel();
};

#endif // FINDTOURISTDIALOG_H
