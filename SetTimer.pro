#-------------------------------------------------
#
# Project created by QtCreator 2015-04-24T10:38:46
#
#-------------------------------------------------

QT       += core gui serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SetTimer
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    currenttime.cpp \
    stimer.cpp \
    serialcom.cpp

HEADERS  += widget.h \
    currenttime.h \
    stimer.h \
    serialcom.h

FORMS    += widget.ui
