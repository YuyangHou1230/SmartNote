QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

DEFINES += PRINT_DEBUG

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

include(Common/Helper/Helper.pri)

SOURCES += \
    main.cpp \
    mainform.cpp \
    mainwindow.cpp \
    todolistwidget.cpp \
    todowidget.cpp

HEADERS += \
    global.h \
    mainform.h \
    mainwindow.h \
    todolistwidget.h \
    todowidget.h

FORMS += \
    mainform.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resoure.qrc
