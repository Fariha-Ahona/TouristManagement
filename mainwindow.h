#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "addpackagedialog.h"
#include "findpackagedialog.h"
#include "registertouristdialog.h"
#include "findtouristdialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_addPackageButton_clicked();
    void on_findPackageButton_clicked();

    void on_registerTouristButton_clicked();

    void on_findTouristButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
