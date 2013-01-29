TARGET = QtFoobar 

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

load(qt_build_config)
load(qt_module)

DEPENDPATH += .
INCLUDEPATH += .


HEADERS += qfoobar.h
SOURCES += qfoobar.cpp
