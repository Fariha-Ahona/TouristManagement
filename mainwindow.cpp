#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_addPackageButton_clicked()
{
    AddPackageDialog dialog(this);
    dialog.exec();
}

void MainWindow::on_findPackageButton_clicked()
{
    FindPackageDialog dialog(this);
    dialog.exec();
}

void MainWindow::on_registerTouristButton_clicked()
{
    RegisterTouristDialog dialog(this);
    dialog.exec();
}


void MainWindow::on_findTouristButton_clicked()
{
    FindTouristDialog dialog(this);
    dialog.exec();
}

