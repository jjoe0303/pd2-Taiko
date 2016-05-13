#ifndef PLAYER_H
#define PLAYER_H
#include <QGraphicsRectItem>
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QObject>
#include <blue.h>
#include <red.h>
#include <QGraphicsPixmapItem>
#include <QMediaPlayer>

class Player:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Player();
    void keyPressEvent(QKeyEvent * event);
    QMediaPlayer * redbgm;
    QMediaPlayer * bluebgm;
public slots:
    void spawn();
};

#endif // PLAYER_H
