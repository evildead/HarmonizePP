#-------------------------------------------------
#
# Project created by QtCreator 2017-07-01T15:37:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HarmonizePP
TEMPLATE = app

include(externals/qmidi/src/QMidi.pri)
include(externals/dstd/src/dstdlib.pri)

SOURCES += main.cpp\
        ui/harmonizemainwindow.cpp \
    notes/interval.cpp \
    notes/note.cpp \
    notes/scale.cpp \
    notes/midinote.cpp

HEADERS  += ui/harmonizemainwindow.h \
    notes/interval.h \
    notes/note.h \
    notes/scale.h \
    notes/midinote.h

FORMS    += ui/harmonizemainwindow.ui
