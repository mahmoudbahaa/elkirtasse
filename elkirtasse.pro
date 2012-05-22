#! [0]
TEMPLATE    = subdirs
SUBDIRS	    = qbooks \
	      kirtassenetwork \
              kirtasserowat \
              kirtassecdrom
#! [0]

# install

 # install
    MKDIR = mkdir -p /usr/share/elkirtasse/data/images
    MKDIR = mkdir -p /usr/share/icons/hicolor/scalable/apps
    MKDIR = mkdir -p /usr/share/icons/hicolor/48x48/apps

    data.path = /usr/share/elkirtasse/data/
    data.files = data/images*

ajzaa.path=/usr/share/elkirtasse/data/
ajzaa.files=data/ajzaa.xml
curan.path=/usr/share/elkirtasse/data/
curan.files=data/curan.xml
group.path=/usr/share/elkirtasse/data/
group.files=data/group.xml
help.path=/usr/share/elkirtasse/data/
help.files=data/help.html

    applications.path = /usr/share/applications
    applications.files = usr/share/applications/elkirtasse.desktop
    icon.path = /usr/share/icons/hicolor/scalable/apps
    icon.files = usr/share/icons/hicolor/scalable/apps/elkirtasse.png
    icon48.path = /usr/share/icons/hicolor/48x48/apps
    icon48.files = usr/share/icons/hicolor/48x48/apps/elkirtasse.png
    bin.path = /usr/bin
   bin.files = -m 755  usr/bin/elkirtasse

   
    INSTALLS += data \
               icon \
        icon48 \
        bin \
        applications \
ajzaa \
curan \
group \
help
