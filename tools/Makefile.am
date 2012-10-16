STAMPS = globalmenu-settings.c

bin_PROGRAMS = globalmenu-settings

SUFFIXES = .c

noinst_PROGRAMS = standalone-global-menu
standalone_global_menu_SOURCES = standalone.c
standalone_global_menu_LDADD = $(top_builddir)/libserver/libglobalmenu-server.la $(GTK_LIBS) $(WNCK_LIBS)
standalone_global_menu_CFLAGS = -I$(top_srcdir)/libserver $(GTK_CFLAGS) $(WNCK_CFLAGS)

AM_CPPFLAGS = \
	-I$(top_srcdir) \
	-I$(top_srcdir)/libsettings \
	$(GTK_CFLAGS) \
	$(GLIB_CFLAGS) \
	-include $(CONFIG_HEADER)

BUILT_SOURCES = $(STAMP)

LDADD = $(GTK_LIBS) \
	$(GLIB_LIBS) \
	$(top_builddir)/libsettings/libsettings.la 

EXTRA_DIST = $(STAMP) globalmenu-settings.c standalone.c
