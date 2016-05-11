#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <game.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

extern Game *game;
void MainWindow::on_pushButton_clicked()
{
    close();
    delete ui;
    game = new Game();
    game->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    close();
    delete ui;
}
