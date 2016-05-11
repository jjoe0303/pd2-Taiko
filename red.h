#ifndef RED_H
#define RED_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QKeyEvent>

class Red:public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Red();
public slots:
    void move();
};
#endif // RED_H
