#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
    , validator(1,9999)
{
    ui->setupUi(this);
    ui->PortLine->setValidator(&validator);
}

Dialog::~Dialog()
{
    delete ui;

}
