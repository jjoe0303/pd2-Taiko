#ifndef GAME_H
#define GAME_H
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QGraphicsView>
#include <QWidget>
#include <player.h>
#include <score.h>
#include <mytimer.h>
#include <QMediaPlayer>

class Game:public QGraphicsView{
    Q_OBJECT
public:
    Game();
    QGraphicsScene * scene;
    Player * player;
    Score * myscore;
    QTimer * timer;
    Mytimer * mytimer;
    QMediaPlayer * bgm;
};

#endif // GAME_H
