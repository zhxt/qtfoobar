TARGET = QtFoobar 

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

load(qt_build_config)

QMAKE_DOCS = $$PWD/doc/qtfoobar.qdocconf

load(qt_module)

DEPENDPATH += .
INCLUDEPATH += .

CONFIG += private


HEADERS += qfoobar.h
SOURCES += qfoobar.cpp
