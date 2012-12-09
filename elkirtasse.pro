#! [0]
TEMPLATE    = subdirs
SUBDIRS	    = qbooks \
	      kirtassenetwork \
              kirtasserowat \
              kirtassecdrom
#! [0]

TRANSLATIONS    =usr/share/elkirtasse/translat/kirtasse_fr.ts \
                                   usr/share/elkirtasse/translat/kirtasse_en.ts \
                                   usr/share/elkirtasse/translat/kirtasse_pk.ts
CODECFORTR = UTF-8

 # install
    MKDIR = mkdir -p /usr/share/elkirtasse/data/images
    MKDIR = mkdir -p /usr/share/elkirtasse/translat
    MKDIR = mkdir -p /usr/share/icons/hicolor/scalable/apps
    MKDIR = mkdir -p /usr/share/icons/hicolor/48x48/apps

    data.path = /usr/share/elkirtasse/data/
    data.files = data/images*

ajzaa.path=/usr/share/elkirtasse/data/
ajzaa.files=usr/share/elkirtasse/data/ajzaa.xml

curan.path=/usr/share/elkirtasse/data/
curan.files=usr/share/elkirtasse/data/curan.xml

group.path=/usr/share/elkirtasse/data/
group.files=usr/share/elkirtasse/data/group.xml

help.path=/usr/share/elkirtasse/data/
help.files=usr/share/elkirtasse/data/help.html

    applications.path = /usr/share/applications
    applications.files = usr/share/applications/elkirtasse.desktop
    icon.path = /usr/share/icons/hicolor/scalable/apps
    icon.files = usr/share/icons/hicolor/scalable/apps/elkirtasse.png
    icon48.path = /usr/share/icons/hicolor/48x48/apps
    icon48.files = usr/share/icons/hicolor/48x48/apps/elkirtasse.png

translat_pk.path=/usr/share/elkirtasse/translat
translat_pk.files=usr/share/elkirtasse/translat/kirtasse_pk.qm
translat_en.path=/usr/share/elkirtasse/translat
translat_en.files=usr/share/elkirtasse/translat/kirtasse_en.qm
translat_fr.path=/usr/share/elkirtasse/translat
translat_fr.files=usr/share/elkirtasse/translat/kirtasse_fr.qm

    INSTALLS += data \
               icon \
        icon48 \
        applications \
ajzaa \
curan \
group \
help\
translat_pk\
translat_en\
translat_fr
