NULL=
HEADER_FILE = globalmenu-server.h

lib_LTLIBRARIES = libglobalmenu-server.la

libglobalmenu_server_includedir = $(includedir)/mate-globalmenu
libglobalmenu_server_include_HEADERS = globalmenu-server.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = globalmenu-server.pc

libglobalmenu_server_la_SOURCES = \
	globalmenubar.c \
	globalmenuitem.c \
	globalmenuadapter.c \
	adapter.c \
	enums.c \
	monitor.c \
	window.c \
	parser.c \
	serializer.c \
	interfaces/shell.c \
	interfaces/item.c \
	widgets/menu.c \
	widgets/menubar.c \
	widgets/menuitem.c \
	widgets/menubarbox.c \
	widgets/menulabel.c \
	utils/menushellutils.c \
	utils/keygrab.c \
	utils/mnemonickeys.c \
	$(HEADER_FILE) \
	ccode/keygrab-ccode.c \
	ccode/menushellutils-ccode.c 

libglobalmenu_server_la_CPPFLAGS = \
			 -I$(top_srcdir) \
			 $(GTK_CFLAGS) \
			 $(WNCK_CFLAGS) \
			 $(X11_CFLAGS) \
			 -DG_LOG_DOMAIN=\"GlobalMenu:Server\" \
			 -include $(CONFIG_HEADER) \
			 -include ../legacy-support/legacy-support.h

libglobalmenu_server_la_LIBADD = ../legacy-support/liblegacy-support.la

libglobalmenu_server_la_LDFLAGS = -version-info 3:0:0 -Wl,--as-needed

EXTRA_DIST = \
	globalmenu-server.pc.in

