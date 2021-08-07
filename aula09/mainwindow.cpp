#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap imagem_logo("C:/Users/valdo/Documents/interface_grafica_Qt/aula09/imgs/logo_cfb.png");  // Caminho da imagem
    ui->label->setPixmap(imagem_logo.scaled(390, 200, Qt::KeepAspectRatio));  // Colocando a imagem cos suas propriedades
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

    QPixmap img("C:/Users/valdo/Documents/interface_grafica_Qt/aula09/imgs/2.jpg");  // Caminho da imagem
    ui->label->setPixmap(img.scaled(390, 200, Qt::KeepAspectRatio));  // Colocando a imagem cos suas propriedades

}

