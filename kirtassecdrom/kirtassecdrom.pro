TEMPLATE = lib
CONFIG += plugin
INCLUDEPATH += ../qbooks
TARGET = $$qtLibraryTarget(kirtassecdrom)
DESTDIR = ../plugins
HEADERS += \ 
    cdromshamila.h \
    dialog.h
   QT += xml
SOURCES += \ 
    cdromshamila.cpp \
    dialog.cpp
FORMS += \
    dialog.ui
    
# install
MKDIR = mkdir -p /usr/share/elkirtasse/plugins
target.path = /usr/share/elkirtasse/plugins

INSTALLS += target 
   








