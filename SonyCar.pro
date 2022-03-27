#-------------------------------------------------
#
# Project created by QtCreator 2021-10-22T14:49:36
#
#-------------------------------------------------

QT       += core gui
QT += sql
QT += network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
RC_ICONS = Spresence.ico

TARGET = SonyCar
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

CONFIG += c++11

SOURCES += \
        imysql.cpp \
        login.cpp \
        main.cpp \
        sock.cpp \
        webwidget.cpp \
        widget.cpp

HEADERS += \
        imysql.h \
        login.h \
        sock.h \
        webwidget.h \
        widget.h \
        wke.h

FORMS += \
        login.ui \
        widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    qrc.qrc
