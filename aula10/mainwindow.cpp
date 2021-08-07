#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    ui->statusbar->showMessage("CFB Cursos");  // Conteudo que vai aparecer na barra de status
    ui->statusbar->addPermanentWidget(ui->pushButton_2);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_ok_clicked()
{
    ui->statusbar->showMessage("Nome: " + ui->txt_nome->text() + " | E-mail: " + ui->txt_email->text());
}


void MainWindow::on_pushButton_2_clicked()
{
    QString msg = "www.youtube.com/cfbcursos";
    ui->statusbar->showMessage(msg);
    QMessageBox::about(this, "Canal", msg);
}

