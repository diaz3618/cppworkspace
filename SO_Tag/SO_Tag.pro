#-------------------------------------------------
#
# Project created by QtCreator 2018-10-06T04:49:37
#
#-------------------------------------------------

QT       += core gui widgets printsupport

TARGET = SO_Tag
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
        main.cpp \
        mainwindow.cpp \
    md5.cpp \
    md5_wrapper.cpp \
    store_order.cpp \
    special_order.cpp \
    csv_file.cpp \
    config.cpp \
    config_file.cpp \
    author.cpp

HEADERS += \
        mainwindow.h \
    csv_file.h \
    config.h \
    config.h \
    config_file.h \
    global_variables.h \
    author.h \
    md5.h \
    md5_wrapper.h

FORMS += \
        mainwindow.ui \
    config_file.ui \
    author.ui

RC_ICONS = icon.ico

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../build-SO_Tag-Desktop_Qt_5_12_0_MSVC2017_32bit-Release/release/store_info.conf

RESOURCES += \
    icons.qrc
