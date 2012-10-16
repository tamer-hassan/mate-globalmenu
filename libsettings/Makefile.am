NULL=

HEADER_FILE = globalmenu-settings.h

noinst_LTLIBRARIES = libsettings.la
libsettings_la_SOURCES = \
	settings.c \
	global-settings.c \
	local-settings.c \
	$(HEADER_FILE) \
	$(NULL)

libsettings_la_CPPFLAGS = \
			 -I$(top_srcdir) \
			 $(GTK_CFLAGS) \
			 $(X11_CFLAGS) \
			 -DG_LOG_DOMAIN=\"GlobalMenu:Settings\" \
			 -include $(CONFIG_HEADER) \
			 $(NULL)

libsettings_la_LDFLAGS = -version-info 0:0:0 -Wl,--as-needed
