#include "player.h"
#include <QGraphicsScene>
#include "blue.h"
#include "red.h"
#include <QList>
#include <typeinfo>
#include <game.h>
#include <mytimer.h>

extern Game * game;

Player::Player()
{
    setPixmap(QPixmap(":/image/drum3.png"));
    setPos(20,165);

    redbgm = new QMediaPlayer();
    redbgm->setMedia(QUrl("qrc:/sound/red.wav"));


    bluebgm = new QMediaPlayer();
    bluebgm->setMedia(QUrl("qrc:/sound/blue.wav"));
}

void Player::keyPressEvent(QKeyEvent *event)
{
  /* if (event->key() == Qt::Key_Left){
        if(pos().x()>0){
        setPos(x()-30,y());
        }
    }
    else if (event->key() == Qt::Key_Right){
        if(pos().x()+100<800){
        setPos(x()+30,y());
        }
    }
    else if (event->key() == Qt::Key_Up){
        setPos(x(),y()-10);
    }
    else if (event->key() == Qt::Key_Down){
        setPos(x(),y()+10);
    }
     if (event->key() == Qt::Key_Space){
        Bullet * bullet = new Bullet();
        bullet->setPos(x(),y());
        scene()->addItem(bullet);
    } */

     if (event->key() == Qt::Key_X || event->key() == Qt::Key_C){
         QList<QGraphicsItem *> colliding_Items = collidingItems();
         for(int i = 0,n = colliding_Items.size();i<n;++i){
             if(typeid(*(colliding_Items[i])) == typeid(Red)){
                 //increase the score
                 game->myscore->increase();
                 //add sound
                 if(redbgm->state() == QMediaPlayer::PlayingState){
                     redbgm->setPosition(0);
                 }

                 else if(redbgm->state() == QMediaPlayer::StoppedState){
                     redbgm->play();
                 }
                 //remove the note
                 scene()->removeItem(colliding_Items[i]);
                 //delete object on the heap
                 delete colliding_Items[i];
                 return;
             }
         }
    }

      else if (event->key() == Qt::Key_Z || event->key() == Qt::Key_V){
          QList<QGraphicsItem *> colliding_Items = collidingItems();
          for(int i = 0,n = colliding_Items.size();i<n;++i){
              if(typeid(*(colliding_Items[i])) == typeid(Blue)){
                  //increase the score
                  game->myscore->increase();
                  //add sound
                  if(bluebgm->state() == QMediaPlayer::PlayingState){
                      bluebgm->setPosition(0);
                  }

                  else if(bluebgm->state() == QMediaPlayer::StoppedState){
                      bluebgm->play();
                  }
                  //remove the note
                  scene()->removeItem(colliding_Items[i]);
                  //delete object on the heap
                  delete colliding_Items[i];
                  return;
              }
          }
     }
}

void Player::spawn()
{
    //to create an enemy
    int random_num = rand()%2;
    if (random_num == 0){
        int rand_num = rand()%3;
        Blue *blue = new Blue();
        scene()->addItem(blue);
        game->timer->start(rand_num*200+660);
    }

    if (random_num == 1){
        int rand_num = rand()%3;
        Red * red = new Red();
        scene()->addItem(red);
        game->timer->start(rand_num*200+660);

    }
}
