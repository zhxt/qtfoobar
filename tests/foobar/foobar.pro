TEMPLATE = app
TARGET = tst_foobar 
DEPENDPATH += .
INCLUDEPATH += .

QT += gui core 
greaterThan(QT_MAJOR_VERSION,4): QT += widgets

INCLUDEPATH += ../../include 
LIBS += -L../../lib -lQt5Foobar

SOURCES += tst_foobar.cpp
