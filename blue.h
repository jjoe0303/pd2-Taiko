#ifndef BLUE_H
#define BLUE_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QKeyEvent>

class Blue:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Blue();
public slots:
    void move();
};
#endif // BLUE_H
