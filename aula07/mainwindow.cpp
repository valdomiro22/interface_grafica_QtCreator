#include "mainwindow.h"
#include "ui_mainwindow.h"

// Forma 1
//#include "janela2.h"  // Inportando a classe criada para a janela2.

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
    // Forma 1
//    Janela2 form2;
//    form2.exec();


    // Forma 1
    form2 = new Janela2(this);
    form2->exec();
}

