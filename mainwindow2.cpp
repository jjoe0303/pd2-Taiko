#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include <score.h>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <game.h>

MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
    ui->setupUi(this);
  /*  Score * score = new Score();
    QGraphicsScene * scene = new QGraphicsScene(this);
    scene->addItem(score);
    QGraphicsView * view = new QGraphicsView(this);
    view->setScene(scene);
    this->setCentralWidget(view);*/
}

MainWindow2::~MainWindow2()
{
    delete ui;
}

extern Game * game;
void MainWindow2::on_pushButton_clicked()
{
    close();
    game = new Game();
    game->show();
}

void MainWindow2::on_pushButton_2_clicked()
{
    close();
}
