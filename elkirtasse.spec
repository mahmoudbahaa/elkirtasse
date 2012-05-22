# norootforbuild

%if 0%{?suse_version}
     %define qmake /usr/bin/qmake
BuildRequires:	libqt4-devel >= 4.6
BuildRequires: update-desktop-files
BuildRequires: pkg-config
Requires: libqt4-x11 >= 4.6.2
%endif

%if 0%{?fedora_version} || 0%{?rhel_version} || 0%{?centos_version}
   %define qmake /usr/bin/qmake-qt4
BuildRequires:	qt-devel
BuildRequires:  qt4-devel

%endif

%if 0%{?mandriva_version}  || 0%{?mdkversion}
    %define qmake /usr/lib/qt4/bin/qmake
BuildRequires:	libqt4-devel >= 4.6

%endif

Name:		elkirtasse
Version:	3.6
Release:	76.1

License:	GPL3
Group:		libriry/office
Summary:	Elkirtasse librery for system x11
URL:		http://elkirtasse.22web.net/

Source0:        %{name}-%{version}.tar.gz

BuildRoot:      %{_tmppath}/%{name}-%{version}-build

 
BuildRequires: 	gcc-c++




%description
  Library elkietasse free program is open source foe all operating systems running Linux or Windows or Mac lets you view and edit books and you can add news books 
         http://sites.google.com/site/kirtase.
,http://www.elkirtasse.co.cc,http://www.elkirtasse.22web.net,

%prep
%setup -q -n %{name}-%{version}

%build
%{qmake}

make

%install
# Create desktop file
%__cat > %{name}.desktop << EOF
[Desktop Entry]
Name=elkirtasse
Name[ar]= 
Comment[ar]=    
Type=Application
Exec=elkirtasse
Icon=elkirtasse
Categories=Office;
EOF
# End of desktop file
# binary
#%{makeinstall} INSTALL_ROOT=%{buildroot}
install -D -m 644 -T %{name}.desktop $RPM_BUILD_ROOT%{_datadir}/applications/%{name}.desktop
%if 0%{?suse_version}
%suse_update_desktop_file -c %{name} "elkirtasse" "elkirtasse app" %{name} "%{name}.png" Office Dictionary


    mkdir -p $RPM_BUILD_ROOT%{_bindir}
    mkdir -p $RPM_BUILD_ROOT%_libdir/%{name}/plugins
    mkdir -p $RPM_BUILD_ROOT%{_datadir}/elkirtasse
    mkdir -p $RPM_BUILD_ROOT%{_datadir}/icons
 

	
        %__install -d -m 755 $RPM_BUILD_ROOT%{_datadir}/%{name}
	%__install -m 755 elkirtasse $RPM_BUILD_ROOT%{_datadir}/%{name}/elkirtasse
        
        cp -R data $RPM_BUILD_ROOT%{_datadir}/elkirtasse/
	
	cp -R usr/share/icons $RPM_BUILD_ROOT%{_datadir}
	cp -R usr/bin/%{name} $RPM_BUILD_ROOT%{_bindir}
        
        
	cp -f plugins/libkirtassecdrom.so $RPM_BUILD_ROOT%_libdir/%{name}/plugins/libkirtassecdrom.so
	cp -f plugins/libkirtassenet.so $RPM_BUILD_ROOT%_libdir/%{name}/plugins/libkirtassenet.so
	cp -f plugins/libkirtasserowat.so $RPM_BUILD_ROOT%_libdir/%{name}/plugins/libkirtasserowat.so
       
 %endif
     


        
%clean
%{__rm} -rf %{buildroot}


%files
%defattr(-,root,root,-)
%{_bindir}
%{_bindir}/%{name}
%{_datadir}
%{_datadir}/applications
%{_datadir}/applications/%{name}.desktop
%{_datadir}/%{name}
%{_datadir}/%{name}/data
%{_datadir}/%{name}/data/ajzaa.xml
%{_datadir}/%{name}/data/curan.xml
%{_datadir}/%{name}/data/group.xml
%{_datadir}/%{name}/data/help.html
%{_datadir}/%{name}/data/images
%{_datadir}/%{name}/data/images/arabesque
%{_datadir}/%{name}/data/images/arabesque/bot.png
%{_datadir}/%{name}/data/images/arabesque/bot_left.png
%{_datadir}/%{name}/data/images/arabesque/bot_right.png
%{_datadir}/%{name}/data/images/arabesque/left.png
%{_datadir}/%{name}/data/images/arabesque/preview.png
%{_datadir}/%{name}/data/images/arabesque/right.png
%{_datadir}/%{name}/data/images/arabesque/top.png
%{_datadir}/%{name}/data/images/arabesque/top_left.png
%{_datadir}/%{name}/data/images/arabesque/top_right.png
%{_datadir}/%{name}/data/images/default
%{_datadir}/%{name}/data/images/default/bot.png
%{_datadir}/%{name}/data/images/default/bot_left.png
%{_datadir}/%{name}/data/images/default/bot_right.png
%{_datadir}/%{name}/data/images/default/left.png
%{_datadir}/%{name}/data/images/default/preview.png
%{_datadir}/%{name}/data/images/default/right.png
%{_datadir}/%{name}/data/images/default/top.png
%{_datadir}/%{name}/data/images/default/top_left.png
%{_datadir}/%{name}/data/images/default/top_right.png
%{_datadir}/%{name}/data/images/mashaf
%{_datadir}/%{name}/data/images/mashaf/bot.png
%{_datadir}/%{name}/data/images/mashaf/bot_left.png
%{_datadir}/%{name}/data/images/mashaf/bot_right.png
%{_datadir}/%{name}/data/images/mashaf/left.png
%{_datadir}/%{name}/data/images/mashaf/preview.png
%{_datadir}/%{name}/data/images/mashaf/right.png
%{_datadir}/%{name}/data/images/mashaf/top.png
%{_datadir}/%{name}/data/images/mashaf/top_left.png
%{_datadir}/%{name}/data/images/mashaf/top_right.png
%{_datadir}/%{name}/data/images/mashaf2
%{_datadir}/%{name}/data/images/mashaf2/bot.png
%{_datadir}/%{name}/data/images/mashaf2/bot_left.png
%{_datadir}/%{name}/data/images/mashaf2/bot_right.png
%{_datadir}/%{name}/data/images/mashaf2/left.png
%{_datadir}/%{name}/data/images/mashaf2/preview.png
%{_datadir}/%{name}/data/images/mashaf2/right.png
%{_datadir}/%{name}/data/images/mashaf2/top.png
%{_datadir}/%{name}/data/images/mashaf2/top_left.png
%{_datadir}/%{name}/data/images/mashaf2/top_right.png
%{_datadir}/%{name}/data/images/zakhrafa
%{_datadir}/%{name}/data/images/zakhrafa2
%{_datadir}/%{name}/data/images/zakhrafa2/bot.png
%{_datadir}/%{name}/data/images/zakhrafa2/bot_left.png
%{_datadir}/%{name}/data/images/zakhrafa2/bot_right.png
%{_datadir}/%{name}/data/images/zakhrafa2/left.png
%{_datadir}/%{name}/data/images/zakhrafa2/preview.png
%{_datadir}/%{name}/data/images/zakhrafa2/right.png
%{_datadir}/%{name}/data/images/zakhrafa2/top.png
%{_datadir}/%{name}/data/images/zakhrafa2/top_left.png
%{_datadir}/%{name}/data/images/zakhrafa2/top_right.png
%{_datadir}/%{name}/data/images/zakhrafa/bot.png
%{_datadir}/%{name}/data/images/zakhrafa/bot_left.png
%{_datadir}/%{name}/data/images/zakhrafa/bot_right.png
%{_datadir}/%{name}/data/images/zakhrafa/left.png
%{_datadir}/%{name}/data/images/zakhrafa/preview.png
%{_datadir}/%{name}/data/images/zakhrafa/right.png
%{_datadir}/%{name}/data/images/zakhrafa/top.png
%{_datadir}/%{name}/data/images/zakhrafa/top_left.png
%{_datadir}/%{name}/data/images/zakhrafa/top_right.png
%{_datadir}/%{name}/%{name}
%if 0%{?suse_version}
%_libdir 
%_libdir/%{name}
%_libdir/%{name}/plugins
%_libdir/%{name}/plugins/libkirtassecdrom.so
%_libdir/%{name}/plugins/libkirtassenet.so
%_libdir/%{name}/plugins/libkirtasserowat.so
%endif

%{_datadir}/icons
%{_datadir}/icons/hicolor
%{_datadir}/icons/hicolor/48x48
%{_datadir}/icons/hicolor/48x48/apps
%{_datadir}/icons/hicolor/48x48/apps/%{name}.png
%{_datadir}/icons/hicolor/scalable
%{_datadir}/icons/hicolor/scalable/apps
%{_datadir}/icons/hicolor/scalable/apps/%{name}.png