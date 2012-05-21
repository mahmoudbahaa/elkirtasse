#############################################################################
# Makefile for building: elkirtasse
# Generated by qmake (2.01a) (Qt 4.7.0) on: mer. nov. 16 20:34:51 2011
# Project:  elkirtasse.pro
# Template: subdirs
# Command: /usr/bin/qmake -o Makefile elkirtasse.pro
#############################################################################

first: make_default
MAKEFILE      = Makefile
QMAKE         = /usr/bin/qmake
DEL_FILE      = rm -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
COPY          = cp -f
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
INSTALL_FILE  = install -m 644 -p
INSTALL_PROGRAM = install -m 755 -p
INSTALL_DIR   = $(COPY_DIR)
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
SUBTARGETS    =  \
		sub-qbooks \
		sub-kirtassenetwork \
		sub-kirtasserowat \
		sub-kirtassecdrom

qbooks//$(MAKEFILE): 
	@$(CHK_DIR_EXISTS) qbooks/ || $(MKDIR) qbooks/ 
	cd qbooks/ && $(QMAKE) /home/ali/elkirtasse-group/elkirtasse_3.6/qbooks/qbooks.pro -o $(MAKEFILE)
sub-qbooks-qmake_all:  FORCE
	@$(CHK_DIR_EXISTS) qbooks/ || $(MKDIR) qbooks/ 
	cd qbooks/ && $(QMAKE) /home/ali/elkirtasse-group/elkirtasse_3.6/qbooks/qbooks.pro -o $(MAKEFILE)
sub-qbooks: qbooks//$(MAKEFILE) FORCE
	cd qbooks/ && $(MAKE) -f $(MAKEFILE)
sub-qbooks-make_default: qbooks//$(MAKEFILE) FORCE
	cd qbooks/ && $(MAKE) -f $(MAKEFILE) 
sub-qbooks-make_first: qbooks//$(MAKEFILE) FORCE
	cd qbooks/ && $(MAKE) -f $(MAKEFILE) first
sub-qbooks-all: qbooks//$(MAKEFILE) FORCE
	cd qbooks/ && $(MAKE) -f $(MAKEFILE) all
sub-qbooks-clean: qbooks//$(MAKEFILE) FORCE
	cd qbooks/ && $(MAKE) -f $(MAKEFILE) clean
sub-qbooks-distclean: qbooks//$(MAKEFILE) FORCE
	cd qbooks/ && $(MAKE) -f $(MAKEFILE) distclean
sub-qbooks-install_subtargets: qbooks//$(MAKEFILE) FORCE
	cd qbooks/ && $(MAKE) -f $(MAKEFILE) install
sub-qbooks-uninstall_subtargets: qbooks//$(MAKEFILE) FORCE
	cd qbooks/ && $(MAKE) -f $(MAKEFILE) uninstall
kirtassenetwork//$(MAKEFILE): 
	@$(CHK_DIR_EXISTS) kirtassenetwork/ || $(MKDIR) kirtassenetwork/ 
	cd kirtassenetwork/ && $(QMAKE) /home/ali/elkirtasse-group/elkirtasse_3.6/kirtassenetwork/kirtassenetwork.pro -o $(MAKEFILE)
sub-kirtassenetwork-qmake_all:  FORCE
	@$(CHK_DIR_EXISTS) kirtassenetwork/ || $(MKDIR) kirtassenetwork/ 
	cd kirtassenetwork/ && $(QMAKE) /home/ali/elkirtasse-group/elkirtasse_3.6/kirtassenetwork/kirtassenetwork.pro -o $(MAKEFILE)
sub-kirtassenetwork: kirtassenetwork//$(MAKEFILE) FORCE
	cd kirtassenetwork/ && $(MAKE) -f $(MAKEFILE)
sub-kirtassenetwork-make_default: kirtassenetwork//$(MAKEFILE) FORCE
	cd kirtassenetwork/ && $(MAKE) -f $(MAKEFILE) 
sub-kirtassenetwork-make_first: kirtassenetwork//$(MAKEFILE) FORCE
	cd kirtassenetwork/ && $(MAKE) -f $(MAKEFILE) first
sub-kirtassenetwork-all: kirtassenetwork//$(MAKEFILE) FORCE
	cd kirtassenetwork/ && $(MAKE) -f $(MAKEFILE) all
sub-kirtassenetwork-clean: kirtassenetwork//$(MAKEFILE) FORCE
	cd kirtassenetwork/ && $(MAKE) -f $(MAKEFILE) clean
sub-kirtassenetwork-distclean: kirtassenetwork//$(MAKEFILE) FORCE
	cd kirtassenetwork/ && $(MAKE) -f $(MAKEFILE) distclean
sub-kirtassenetwork-install_subtargets: kirtassenetwork//$(MAKEFILE) FORCE
	cd kirtassenetwork/ && $(MAKE) -f $(MAKEFILE) install
sub-kirtassenetwork-uninstall_subtargets: kirtassenetwork//$(MAKEFILE) FORCE
	cd kirtassenetwork/ && $(MAKE) -f $(MAKEFILE) uninstall
kirtasserowat//$(MAKEFILE): 
	@$(CHK_DIR_EXISTS) kirtasserowat/ || $(MKDIR) kirtasserowat/ 
	cd kirtasserowat/ && $(QMAKE) /home/ali/elkirtasse-group/elkirtasse_3.6/kirtasserowat/kirtasserowat.pro -o $(MAKEFILE)
sub-kirtasserowat-qmake_all:  FORCE
	@$(CHK_DIR_EXISTS) kirtasserowat/ || $(MKDIR) kirtasserowat/ 
	cd kirtasserowat/ && $(QMAKE) /home/ali/elkirtasse-group/elkirtasse_3.6/kirtasserowat/kirtasserowat.pro -o $(MAKEFILE)
sub-kirtasserowat: kirtasserowat//$(MAKEFILE) FORCE
	cd kirtasserowat/ && $(MAKE) -f $(MAKEFILE)
sub-kirtasserowat-make_default: kirtasserowat//$(MAKEFILE) FORCE
	cd kirtasserowat/ && $(MAKE) -f $(MAKEFILE) 
sub-kirtasserowat-make_first: kirtasserowat//$(MAKEFILE) FORCE
	cd kirtasserowat/ && $(MAKE) -f $(MAKEFILE) first
sub-kirtasserowat-all: kirtasserowat//$(MAKEFILE) FORCE
	cd kirtasserowat/ && $(MAKE) -f $(MAKEFILE) all
sub-kirtasserowat-clean: kirtasserowat//$(MAKEFILE) FORCE
	cd kirtasserowat/ && $(MAKE) -f $(MAKEFILE) clean
sub-kirtasserowat-distclean: kirtasserowat//$(MAKEFILE) FORCE
	cd kirtasserowat/ && $(MAKE) -f $(MAKEFILE) distclean
sub-kirtasserowat-install_subtargets: kirtasserowat//$(MAKEFILE) FORCE
	cd kirtasserowat/ && $(MAKE) -f $(MAKEFILE) install
sub-kirtasserowat-uninstall_subtargets: kirtasserowat//$(MAKEFILE) FORCE
	cd kirtasserowat/ && $(MAKE) -f $(MAKEFILE) uninstall
kirtassecdrom//$(MAKEFILE): 
	@$(CHK_DIR_EXISTS) kirtassecdrom/ || $(MKDIR) kirtassecdrom/ 
	cd kirtassecdrom/ && $(QMAKE) /home/ali/elkirtasse-group/elkirtasse_3.6/kirtassecdrom/kirtassecdrom.pro -o $(MAKEFILE)
sub-kirtassecdrom-qmake_all:  FORCE
	@$(CHK_DIR_EXISTS) kirtassecdrom/ || $(MKDIR) kirtassecdrom/ 
	cd kirtassecdrom/ && $(QMAKE) /home/ali/elkirtasse-group/elkirtasse_3.6/kirtassecdrom/kirtassecdrom.pro -o $(MAKEFILE)
sub-kirtassecdrom: kirtassecdrom//$(MAKEFILE) FORCE
	cd kirtassecdrom/ && $(MAKE) -f $(MAKEFILE)
sub-kirtassecdrom-make_default: kirtassecdrom//$(MAKEFILE) FORCE
	cd kirtassecdrom/ && $(MAKE) -f $(MAKEFILE) 
sub-kirtassecdrom-make_first: kirtassecdrom//$(MAKEFILE) FORCE
	cd kirtassecdrom/ && $(MAKE) -f $(MAKEFILE) first
sub-kirtassecdrom-all: kirtassecdrom//$(MAKEFILE) FORCE
	cd kirtassecdrom/ && $(MAKE) -f $(MAKEFILE) all
sub-kirtassecdrom-clean: kirtassecdrom//$(MAKEFILE) FORCE
	cd kirtassecdrom/ && $(MAKE) -f $(MAKEFILE) clean
sub-kirtassecdrom-distclean: kirtassecdrom//$(MAKEFILE) FORCE
	cd kirtassecdrom/ && $(MAKE) -f $(MAKEFILE) distclean
sub-kirtassecdrom-install_subtargets: kirtassecdrom//$(MAKEFILE) FORCE
	cd kirtassecdrom/ && $(MAKE) -f $(MAKEFILE) install
sub-kirtassecdrom-uninstall_subtargets: kirtassecdrom//$(MAKEFILE) FORCE
	cd kirtassecdrom/ && $(MAKE) -f $(MAKEFILE) uninstall

Makefile: elkirtasse.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf
	$(QMAKE) -o Makefile elkirtasse.pro
/usr/share/qt4/mkspecs/common/g++.conf:
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/release.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
qmake: qmake_all FORCE
	@$(QMAKE) -o Makefile elkirtasse.pro

qmake_all: sub-qbooks-qmake_all sub-kirtassenetwork-qmake_all sub-kirtasserowat-qmake_all sub-kirtassecdrom-qmake_all FORCE

make_default: sub-qbooks-make_default sub-kirtassenetwork-make_default sub-kirtasserowat-make_default sub-kirtassecdrom-make_default FORCE
make_first: sub-qbooks-make_first sub-kirtassenetwork-make_first sub-kirtasserowat-make_first sub-kirtassecdrom-make_first FORCE
all: sub-qbooks-all sub-kirtassenetwork-all sub-kirtasserowat-all sub-kirtassecdrom-all FORCE
clean: sub-qbooks-clean sub-kirtassenetwork-clean sub-kirtasserowat-clean sub-kirtassecdrom-clean FORCE
distclean: sub-qbooks-distclean sub-kirtassenetwork-distclean sub-kirtasserowat-distclean sub-kirtassecdrom-distclean FORCE
	-$(DEL_FILE) Makefile
install_subtargets: sub-qbooks-install_subtargets sub-kirtassenetwork-install_subtargets sub-kirtasserowat-install_subtargets sub-kirtassecdrom-install_subtargets FORCE
uninstall_subtargets: sub-qbooks-uninstall_subtargets sub-kirtassenetwork-uninstall_subtargets sub-kirtasserowat-uninstall_subtargets sub-kirtassecdrom-uninstall_subtargets FORCE

sub-qbooks-check: qbooks/$(MAKEFILE)
	cd qbooks/ && $(MAKE) check
sub-kirtassenetwork-check: kirtassenetwork/$(MAKEFILE)
	cd kirtassenetwork/ && $(MAKE) check
sub-kirtasserowat-check: kirtasserowat/$(MAKEFILE)
	cd kirtasserowat/ && $(MAKE) check
sub-kirtassecdrom-check: kirtassecdrom/$(MAKEFILE)
	cd kirtassecdrom/ && $(MAKE) check
check: sub-qbooks-check sub-kirtassenetwork-check sub-kirtasserowat-check sub-kirtassecdrom-check

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all
install: install_subtargets  FORCE

uninstall:  uninstall_subtargets FORCE

FORCE:

