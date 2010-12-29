#-------------------------------------------------
#
# Project created by QtCreator 2010-12-29T02:11:12
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = Hevelius-server
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    hevelius_server.cpp \
    hevelius_thread.cpp

HEADERS += \
    hevelius_server.h \
    hevelius_thread.h
