#-------------------------------------------------
#
# Project created by QtCreator 2018-09-17T19:23:11
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TaskBadger
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    project.cpp \
    dbmanager.cpp \
    projectdao.cpp \
    task.cpp \
    projectmodel.cpp \
    exception.cpp \
    taskdao.cpp \
    taskformlayout.cpp \
    dbobject.cpp \
    objectdao.cpp \
    objectmodel.cpp \
    taskmodel.cpp \
    formlayout.cpp \
    projectformlayout.cpp \
    list.cpp \
    listdao.cpp \
    listmodel.cpp \
    listformlayout.cpp \
    listitem.cpp \
    itemdao.cpp

HEADERS += \
        mainwindow.h \
    project.h \
    dbmanager.h \
    projectdao.h \
    task.h \
    projectmodel.h \
    exception.h \
    taskdao.h \
    taskformlayout.h \
    dbobject.h \
    objectdao.h \
    objectmodel.h \
    taskmodel.h \
    formlayout.h \
    projectformlayout.h \
    list.h \
    listdao.h \
    listmodel.h \
    listformlayout.h \
    listitem.h \
    itemdao.h

FORMS += \
        mainwindow.ui

RESOURCES += \
    myres.qrc
