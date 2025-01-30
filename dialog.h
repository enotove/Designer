#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QIntValidator>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private:
    Ui::Dialog *ui;
    QIntValidator validator;
};

#endif // DIALOG_H
