#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap imgs("C:/Users/valdo/Documents/interface_grafica_Qt/aula11/recursos/1.jpg");
    ui->imagemsss->setPixmap(imgs);
}

MainWindow::~MainWindow()
{
    delete ui;
}

