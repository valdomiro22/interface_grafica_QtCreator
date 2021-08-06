#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Fecha a janela
    // Feito via linha de comando
    //connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(close()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    // Fecha a janela
    close();
}


void MainWindow::on_pushButton_2_clicked()
{
    // Muda a cor do label
    // Isso é feito com um comando CSS

    QString corParaLabel = "background-color: #5F9EA0; color: #7CFC00; border-radius: 8px; margin-left: 10px;S";
    ui->label->setStyleSheet(corParaLabel);
}

