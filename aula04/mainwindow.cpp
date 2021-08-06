#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>  // Necessaria para as caixas de mensagens

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
    // Caixa informativa
//    QMessageBox::about(this, "CFB Cursos", "Curso de Qt Creator");

    // Caixa sobre o Qt creator
//    QMessageBox::aboutQt(this, "Curso de Qt Creator");

    // Caixa alerta
//    QMessageBox::critical(this, "CFB Cursos", "Exemplo de ERRO");

    // Caixa de informação
//        QMessageBox::information(this, "CFB Cursos", "Informação CFB Crursos");

    // Caixa de pergunta com confirmação
//        QMessageBox::question(this, "CFB Cursos", "Você esta gostando do curso de Qt?");

    // Caixa de alerta simples
        QMessageBox::warning(this, "CFB Cursos", "Alerta simples");
}

