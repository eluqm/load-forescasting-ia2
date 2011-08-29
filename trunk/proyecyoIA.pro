#-------------------------------------------------
#
# Project created by QtCreator 2011-08-19T09:42:33
#
#-------------------------------------------------

QT       += core gui
CONFIG += qwt2

TARGET = proyecyoIA
TEMPLATE = app





SOURCES += main.cpp\
        interfaze.cpp \
    plottab.cpp \
    dendrite.cpp \
    neuron.cpp \
    layer.cpp \
    network.cpp \
    utiles.cpp \
    data.cpp \
    cromosome.cpp \
    population.cpp

HEADERS  += interfaze.h \
    plottab.h \
    dendrite.h \
    neuron.h \
    layer.h \
    network.h \
    utiles.h \
    data.h \
    cromosome.h \
    population.h

FORMS    += interfaze.ui \
    plottab.ui
