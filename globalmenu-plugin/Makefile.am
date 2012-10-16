NULL = 


libglobalmenu_plugindir = $(GTK_MODULES_DIR)
libglobalmenu_plugin_LTLIBRARIES = \
	libglobalmenu-plugin.la \
	$(NULL)

libglobalmenu_plugin_la_SOURCES= \
	superrider.c \
	patcher.c \
	gtk-menubar.c \
	gtk-widget.c \
	agent-factory.c \
	agent.c \
	module-main.c \
	serializer.c \
	locator.c \
	globalmenu-plugin.h \
	$(NULL)

libglobalmenu_plugin_la_LIBADD = \
		$(GLIB_LIBS) \
		$(GTK_LIBS) \
		$(top_builddir)/libsettings/libsettings.la \
		$(NULL)

libglobalmenu_plugin_la_LDFLAGS = \
		-g \
		-version-info 1:0:0 \
		-avoid-version \
		-no-undefined \
		-export-dynamic \
		-module

#		-Wl,--as-needed 
libglobalmenu_plugin_la_CPPFLAGS = \
	  -I$(top_srcdir) \
	  -I$(top_srcdir)/libsettings \
	  $(GLIB_CFLAGS) $(GTK_CFLAGS) \
	  -include $(CONFIG_HEADER) \
	  -DG_LOG_DOMAIN=\"GlobalMenu:Plugin\" \
	  -g

EXTRA_DIST = globalmenu-plugin.h \
	$(NULL)

