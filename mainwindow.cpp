#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "dialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);

 }

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_DialogButton_clicked()
{

    Dialog dialogWindow;
    dialogWindow.setModal(true);
    dialogWindow.exec();
}

