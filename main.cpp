#include "mainwindow.h"
#include <QApplication>
#include <game.h>
#include "player.h"
#include <QTimer>
#include <QObject>
#include <QGraphicsView>
#include <QDesktopWidget>
#include <mainwindow2.h>

Game * game;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    MainWindow2 w2;
   // QDesktopWidget wid;
   // int screenW = 768;
   // int screenH = 557;
   // w.setGeometry(wid.screen()->width()/2 - (screenW/2) , wid.screen()->height()/2 - (screenH/2) , screenW , screenH);
    w.setFixedSize(768,557);
    w.show();
   // game = new Game();
    //w2.show();
   // game->show();
    return a.exec();
}
