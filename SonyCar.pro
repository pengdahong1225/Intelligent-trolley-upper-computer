#-------------------------------------------------
#
# Project created by QtCreator 2021-10-22T14:49:36
#
#-------------------------------------------------

QT       += core gui
QT += sql
QT += network
QT += multimedia multimediawidgets
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
        source\imysql.cpp \
        source\login.cpp \
        source\main.cpp \
        source\sock.cpp \
        source\webwidget.cpp \
        source\widget.cpp \
        source\video.cpp

HEADERS += \
        header\imysql.h \
        header\login.h \
        header\sock.h \
        header\webwidget.h \
        header\widget.h \
        header\video.h

FORMS += \
        ui\login.ui \
        ui\widget.ui

# configuration of opencv
INCLUDEPATH += D:\opencv\opencv\mingw_build\install\include

LIBS += D:\opencv\opencv\mingw_build\lib\libopencv_*.a
LIBS += -LD:\opencv\opencv\mingw_build\install\x64\mingw\bin

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    qrc.qrc
