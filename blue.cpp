#include "blue.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QDebug>
#include <QList>
#include <stdlib.h>

Blue::Blue()
{
    setPos(800,192);
    setPixmap(QPixmap(":/image/Katsu2.png"));
    QTimer * timer = new QTimer();
    connect (timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(100);
   // timer->start(40);
}


void Blue::move()
{
 //move the enemy down
    setPos(x()-20,y());
    // setPos(x()-10,y());

    if(pos().x() + 70 < 0){
        scene()->removeItem(this);
        delete this;
    }
}
