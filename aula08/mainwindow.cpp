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


void MainWindow::on_btn_mostrar_clicked()
{
    // Criação de variaveis e leitura dos dados

    QString nome = ui->txt_nome->text();
    QString telefone = ui->txt_telefone->text();
    QString email =    ui->txt_email->text();

    QMessageBox::information(this, "Dados digitados", "Nome: " + nome + "\nTelefone: " + telefone + "\nEmail: " + email);
}


void MainWindow::on_btn_limpar_clicked()
{
    ui->txt_nome->clear();
    ui->txt_telefone->clear();
    ui->txt_email->clear();
}

