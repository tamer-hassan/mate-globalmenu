NULL =
SUBDIRS = \
	legacy-support \
	libsettings \
	libserver \
	applet \
	globalmenu-plugin \
	globalmenu-mate-panel \
	tools \
	po \
	schemas \
	$(NULL)

DISTCHECK_CONFIGURE_FLAGS = --disable-schemas-install --disable-static

AM_CPPFLAGS = \
		$(NULL)

man_MANS = mate-globalmenu.1

EXTRA_DIST = \
	$(man_MANS) \
	$(doc_DATA) \
	intltool-extract.in \
	intltool-merge.in \
	intltool-update.in \
	$(NULL)

DISTCLEANFILES = \
	intltool-extract \
	intltool-merge \
	intltool-update \
	$(NULL)


CLEANFILES = 

BUILT_SOURCES =
include $(top_srcdir)/Makefile.configmake
include $(top_srcdir)/Makefile.config

doc_DATA = README COPYING ChangeLog AUTHORS INSTALL \
	README.MATE

include $(top_srcdir)/Makefile.sanity
