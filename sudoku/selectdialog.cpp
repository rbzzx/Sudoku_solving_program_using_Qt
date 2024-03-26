#include "selectdialog.h"
#include "ui_selectdialog.h"

selectDialog::selectDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::selectDialog)
{
    ui->setupUi(this);

    num = 0;
}

selectDialog::~selectDialog()
{
    delete ui;
}




void selectDialog::on_pushButton_clicked()
{
    num = 1;
}


void selectDialog::on_pushButton_2_clicked()
{
    num  = 2;
}


void selectDialog::on_pushButton_3_clicked()
{
    num = 3;
}


void selectDialog::on_pushButton_4_clicked()
{
    num = 4;
}


void selectDialog::on_pushButton_5_clicked()
{
    num = 5;
}


void selectDialog::on_pushButton_6_clicked()
{
    num = 6;
}


void selectDialog::on_pushButton_7_clicked()
{
    num = 7;
}


void selectDialog::on_pushButton_8_clicked()
{
    num = 8;
}


void selectDialog::on_pushButton_9_clicked()
{
    num = 9;
}

