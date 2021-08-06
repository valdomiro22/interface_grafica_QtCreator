#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QtDebug>

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
    QMessageBox::StandardButton resposta_do_botao = QMessageBox::question(this, "Pergunta", "Deseja jechar o programa?", QMessageBox::Yes | QMessageBox::No);
    if (resposta_do_botao == QMessageBox::Yes) {
//        close();
        QApplication::quit();
    } else {
//        QMessageBox::about(this, "Titulo", "Programa não foi fechado");
        qDebug() << "Programa não foi fechado";  // Ésta mensagem não é mostrada para o usuario
    }
}

