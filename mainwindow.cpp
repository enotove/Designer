#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , validator(1,9999)
{
    ui->setupUi(this);
    ui->PortText->setValidator(&validator);
 }

MainWindow::~MainWindow()
{
    delete ui;
}
