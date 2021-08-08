#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

QString msg = "", m1, m2, m3;

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


void MainWindow::on_pushButton_clicked()
{
    bool check1, check2, check3;

    // Método 1
    check1 = ui->checkBox->isChecked();
    check2 = ui->checkBox_2->isChecked();
    check3 = ui->checkBox_3->isChecked();

    QString msg = "";
    if (check1) {
        msg += " Checkbox 1 marcado ";
    }

    if (check2) {
        msg += " Checkbox 2 marcado ";
    }

    if (check3) {
        msg += " Checkbox 3 marcado ";
    }

    QMessageBox::information(this, "Checkboxes", msg);

}


void MainWindow::on_pushButton_2_clicked()
{
    bool cb[3];
    cb[0] = ui->checkBox->isChecked();
    cb[1] = ui->checkBox_2->isChecked();
    cb[2] = ui->checkBox_3->isChecked();

    msg = "";
    for (int i = 0; i < 3; i++) {
        if (cb[i]) {
            msg += "Checkbox " + QString::number(i+1) + " marcado ";
        }
    }

    QMessageBox::information(this, "Checkboxes", msg);

}


void MainWindow::on_checkBox_stateChanged(int arg1)
{
    if (arg1) {
        m1 = " CB1 marcado ";
    } else {
        m1 = "";
    }
}


void MainWindow::on_checkBox_2_stateChanged(int arg1)
{
    if (arg1) {
        m2 = " CB2 marcado ";
    } else {
        m2 = "";
    }
}


void MainWindow::on_checkBox_3_stateChanged(int arg1)
{
    if (arg1) {
        m3 = " CB3 marcado ";
    } else {
        m3 = "";
    }
}


void MainWindow::on_pushButton_3_clicked()
{
    msg = m1 + m2 + m3;
    QMessageBox::information(this, "Checkboxes", msg);
}

