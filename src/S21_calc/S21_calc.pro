QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../s21_calc.c \
    ../s21_helpers.c \
    ../s21_logic.c \
    ../s21_parser.c \
    ../s21_read_string.c \
    ../s21_stack.c \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    ../s21_smart.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

TRANSLATIONS += \
    S21_calc_ru_RU.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
