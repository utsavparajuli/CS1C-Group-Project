QT       += core gui
QT       += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    DrawingWidget.cpp \
    addupdateshape.cpp \
    circle.cpp \
    deleteshape.cpp \
    ellipse.cpp \
    line.cpp \
    main.cpp \
    mainwindow.cpp \
    parser.cpp \
    polygon.cpp \
    polyline.cpp \
    rectangle.cpp \
    saveFile.cpp \
    savetestimonial.cpp \
    shape.cpp \
    square.cpp \
    text.cpp

HEADERS += \
    DrawingWidget.h \
    addupdateshape.h \
    circle.h \
    deleteshape.h \
    ellipse.h \
    line.h \
    mainwindow.h \
    parser.h \
    polygon.h \
    polyline.h \
    rectangle.h \
    saveFile.h \
    savetestimonial.h \
    shape.h \
    square.h \
    text.h \
    vector.h

FORMS += \
    addupdateshape.ui \
    deleteshape.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    shapes.txt
