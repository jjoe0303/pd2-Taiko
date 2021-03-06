#include <game.h>
#include <QTimer>
#include <QGraphicsPixmapItem>

Game::Game()
{
    scene = new QGraphicsScene();

    player = new Player();
    scene->addItem(player);

    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();

    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(768,557);

    scene->setSceneRect(0,0,768,557);
    scene->setBackgroundBrush(QBrush(QPixmap(":/image/bgg8.png")));

    //create the score
    myscore = new Score();
    scene->addItem(myscore);

    timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),player,SLOT(spawn()));
    timer->start(660);

    mytimer = new Mytimer();
    scene->addItem(mytimer);

    bgm = new QMediaPlayer();
    bgm->setMedia(QUrl("qrc:/sound/bgm.mp3"));
    bgm->play();
}
