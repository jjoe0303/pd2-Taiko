#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include <score.h>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <game.h>

extern  Game * game;

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
    ui->label_2->setText("score:"+QString::number(grade));
    grade = 0;
    //delete game;

    QFont ft;
    ft.setPointSize(32);
    ui->label_2->setFont(ft);

}

MainWindow2::~MainWindow2()
{
    delete ui;
}

extern Game * game;
void MainWindow2::on_pushButton_clicked()
{
    close();
    delete ui;
    game = new Game();
    game->show();
}

void MainWindow2::on_pushButton_2_clicked()
{
    close();
    delete ui;
}
