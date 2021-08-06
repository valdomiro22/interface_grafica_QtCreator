#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Cria conexão entre o botão e o slot (label)
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(mudaTexto()));
}


void MainWindow:: mudaTexto() {  // Função que mudará o texto do label
    ui->label->setText("CFB Cursos");
}


MainWindow::~MainWindow()
{
    delete ui;
}

