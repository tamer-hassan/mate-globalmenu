libglobalmenu_mate_panel_LTLIBRARIES = libglobalmenu-mate-panel.la
libglobalmenu_mate_paneldir = $(GTK_MODULES_DIR)
libglobalmenu_mate_panel_la_SOURCES = module-main.c

libglobalmenu_mate_panel_la_LIBADD = \
		$(GLIB_LIBS) \
		$(GTK_LIBS) \
		$(top_builddir)/libserver/libglobalmenu-server.la \
		$(WNCK_LIBS)

libglobalmenu_mate_panel_la_LDFLAGS = \
		-g \
		-version-info 1:0:0 \
		-avoid-version \
		-no-undefined \
		-export-dynamic \
		-Wl,--as-needed \
		-module


libglobalmenu_mate_panel_la_CPPFLAGS = \
	  -I$(top_srcdir) $(GLIB_CFLAGS) $(GTK_CFLAGS) $(WNCK_CFLAGS) \
	  -I$(top_srcdir)/libserver \
	  -include $(CONFIG_HEADER) \
	  -DG_LOG_DOMAIN=\"GlobalMenu:MatePanel\"
	  -g

