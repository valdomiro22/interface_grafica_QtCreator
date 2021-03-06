#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

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
    QString msg, cor, transporte, programacao;
    int ntransp = 0;

    msg = "";
    if (ui->rb_vermelho->isChecked()) {
        cor = "Vermelho";
    } else if (ui->rb_verde->isChecked()) {
        cor = "Verde";
    } else if (ui->rb_azul->isChecked()) {
        cor = "Azul";
    }

    if (ui->rb_aviao->isChecked()) {
        ntransp = 1;
    } else if (ui->rb_carro->isChecked()) {
        ntransp = 2;
    } else if (ui->rb_navio->isChecked()) {
        ntransp = 3;
    }

    switch (ntransp) {
    case 1:
        transporte = "Avião";
        break;
    case 2:
        transporte = "Carro";
        break;
    case 3:
        transporte = "Navio";
        break;
    default:
        transporte = "Nenhun";
        break;
    }

    QVector<bool> pro;
    pro.push_back(ui->rb_cpp->isChecked());
    pro.push_back(ui->rb_ccharp->isChecked());
    pro.push_back(ui->rb_java->isChecked());

    if (pro[0]) {
        programacao = "C++";
    }
    if (pro[1]) {
        programacao = "C#";
    }
    if (pro[2]) {
        programacao = "Java";
    }

    msg = cor + "\n" + transporte + "\n" + programacao;
    QMessageBox::information(this, "CFB Cursos", msg);
}
