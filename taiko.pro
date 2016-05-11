#-------------------------------------------------
#
# Project created by QtCreator 2016-05-12T01:55:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = taiko
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    player.cpp \
    blue.cpp \
    red.cpp \
    game.cpp \
    mytimer.cpp \
    score.cpp

HEADERS  += mainwindow.h \
    blue.h \
    red.h \
    game.h \
    player.h \
    mytimer.h \
    score.h

FORMS    += mainwindow.ui

RESOURCES += \
    res.qrc
