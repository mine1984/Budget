TEMPLATE = app
TARGET = name_of_the_app

QT = core gui
QT += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    main.cpp \
    window.cpp \
    person.cpp \
    goods.cpp \
    category.cpp \
    booking.cpp \
    report_by_person.cpp \
    report_by_category.cpp \
    dbmanager.cpp

HEADERS += \
    window.h \
    person.h \
    goods.h \
    category.h \
    booking.h \
    dbmanager.h
