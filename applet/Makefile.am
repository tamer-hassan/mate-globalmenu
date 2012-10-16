NULL = 

if WITH_MATE_PANEL
libexec_PROGRAMS = GlobalMenu.MatePanelApplet

serverdir = $(MATECOMPONENT_SERVER_DIR)
server_DATA = $(server_in_files:.server.in=.server)
else
noinst_DATA = $(server_in_files:.server.in=.server)
endif

server_in_in_files = GlobalMenu_MatePanelApplet.server.in.in
server_in_files = GlobalMenu_MatePanelApplet.server.in
@INTLTOOL_SERVER_RULE@

$(server_in_files): $(server_in_in_files) Makefile
	sed -e "s|@LOCATION@|$(libexecdir)|" $< > $@


GlobalMenu_MatePanelApplet_SOURCES = \
	application.c \
	applet.c \
	main.c \
	gtkextra-mateconfdialog.c \
	switcher.c \
	template.c \
	workspaceselector.c \
	x-utils-c.c \
	task-utils-c.c \
	$(NULL)

GlobalMenu_MatePanelApplet_LDFLAGS = \
		-g \
		-Wl,--as-needed \
		$(NULL)

GlobalMenu_MatePanelApplet_LDADD = \
		$(GTK_LIBS) \
		$(WNCK_LIBS) \
		$(MATE_PANEL_LIBS) \
		$(MATEMENU_LIBS) \
		$(top_builddir)/libserver/libglobalmenu-server.la \
		$(top_builddir)/libsettings/libsettings.la \
		$(NULL)

GlobalMenu_MatePanelApplet_CPPFLAGS = \
		$(WNCK_CFLAGS) \
		$(MATEMENU_CFLAGS) \
		$(MATE_PANEL_CFLAGS) \
		-I$(top_srcdir)/libserver \
		-I$(top_srcdir)/libsettings \
		-include $(CONFIG_HEADER) \
		-include glib/gi18n-lib.h \
		-include ../legacy-support/legacy-support.h \
		-g \
		$(NULL)

iconsdir = $(prefix)/share/pixmaps
icons_DATA = globalmenu.png


EXTRA_DIST = \
	$(server_in_in_files) \
	$(icons_DATA) \
	$(NULL)

DISTCLEANFILES = $(server_DATA) \
				 $(noinst_DATA) \
				$(server_in_files)

