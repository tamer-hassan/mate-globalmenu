AC_INIT(mate-globalmenu, [0.7.10], [rainwoodman@gmail.com], [mate-globalmenu])

AC_CONFIG_MACRO_DIR([autotools])
AC_CONFIG_AUX_DIR([autotools])
AC_SUBST(ACLOCAL_AMFLAGS, "-I autotools")

AM_INIT_AUTOMAKE([1.9 tar-ustar dist-bzip2 subdir-objects])
AC_CONFIG_SRCDIR([Makefile.am])
AC_CONFIG_HEADERS(config.h)

# maintainer mode
AM_MAINTAINER_MODE


# Checks for programs.
AC_PROG_CC
AM_PROG_CC_C_O
AC_LIBTOOL_DLOPEN
AC_DISABLE_STATIC
AC_PROG_LIBTOOL
DOLT
AC_SUBST(CFLAGS)
AC_SUBST(CPPFLAGS)
AC_SUBST(LDFLAGS)

AM_MATECONF_SOURCE_2

AC_PATH_PROG(MATECONFTOOL, mateconftool-2)

# tests
#USE_TESTS=false
#AC_ARG_ENABLE(
#	[tests],
#	AC_HELP_STRING([--enable-tests], [enable tests, default is yes]),
#	[ test "x$enableval" == xno && USE_TESTS=false ],
#	[ USE_TESTS=true ])
AM_CONDITIONAL([ENABLE_TESTS], [test "x$USE_TESTS" == xtrue])

# misc defines
AC_DEFINE(WNCK_I_KNOW_THIS_IS_UNSTABLE, 1, [libwnck is happy with this])
AC_DEFINE(MATEMENU_I_KNOW_THIS_IS_UNSTABLE, 1,[libmate-menus is happy with this])
AC_DEFINE(GDataTestFunc, void*, [Workaround GDataTestFunc problem])

# intl
AM_GLIB_GNU_GETTEXT
# The following lines replaces glib-gettext with autopoint which doesn't work with MATE
#AM_GNU_GETTEXT(external)
#AM_GNU_GETTEXT_VERSION(0.14.5)
IT_PROG_INTLTOOL
GETTEXT_PACKAGE=mate-globalmenu
AC_DEFINE_UNQUOTED(GETTEXT_PACKAGE, ["$GETTEXT_PACKAGE"], [gettext package])
AC_SUBST(GETTEXT_PACKAGE)
if test "x$localedir" == x; then
localedir='${datadir}/locale'
AC_SUBST(localedir)
fi
# check for modules

GLIB_REQUIRED=2.10.0
GTK_REQUIRED=2.10.0

WNCK_REQUIRED=1.2.0
PANEL_REQUIRED=1.2.0
MATEMENU_REQUIRED=1.2.0
NOTIFY_REQUIRED=0.4.0
X11_REQUIRED=1.1.0

PKG_CHECK_MODULES(GLIB, glib-2.0 >= $GLIB_REQUIRED gobject-2.0 >= $GLIB_REQUIRED gmodule-2.0 >= $GLIB_REQUIRED)
AC_SUBST(GLIB_CFLAGS)
AC_SUBST(GLIB_LIBS)

PKG_CHECK_MODULES(GTK, gtk+-2.0 >= $GTK_REQUIRED)
AC_SUBST(GTK_CFLAGS)
AC_SUBST(GTK_LIBS)

PKG_CHECK_MODULES(WNCK, libwnck-1.0 >= $WNCK_REQUIRED)
AC_SUBST(WNCK_CFLAGS)
AC_SUBST(WNCK_LIBS)

PKG_CHECK_MODULES(MATEMENU, libmate-menu >= $MATEMENU_REQUIRED)
AC_SUBST(MATEMENU_CFLAGS)
AC_SUBST(MATEMENU_LIBS)

PKG_CHECK_MODULES(X11, x11 >= $X11_REQUIRED)
AC_SUBST(X11_CFLAGS)
AC_SUBST(X11_LIBS)

AC_ARG_WITH(
	[gir],
	AC_HELP_STRING([--with-gir], [enable building gir typelib]),
	[],
	[with_gir=no])
AS_IF([test "x$with_gir" != xno],
	[
	AC_PATH_PROG(GIRCOMPILER, [g-ir-compiler] )
	AS_IF([test -n "$GIRCOMPILER" ],
		[with_gir=true],
		AC_MSG_FAILURE(
			[test for g-ir-compiler failed. (--without-gir to disable).]
		)
	)
	AC_SUBST(GIRCOMPILER)
	GIRDIR=`$PKG_CONFIG --variable=girdir gobject-introspection-1.0`
	AC_SUBST(GIRDIR)
	TYPELIBDIR="$($PKG_CONFIG --variable=typelibdir gobject-introspection-1.0)"
	AC_SUBST(TYPELIBDIR)
	]
)
AM_CONDITIONAL(WITH_GIR, [test "x$with_gir" = xtrue ]) 
AC_ARG_WITH(
	[mate-panel],
	AC_HELP_STRING([--without-mate-panel], [disable mate panel applet]),
	[],
	[with_mate_panel=yes])
AS_IF([test "x$with_mate_panel" != xno],
	[PKG_CHECK_MODULES(MATE_PANEL, 
		[	libmatepanelapplet-2.0 >= $PANEL_REQUIRED, 
			libmatenotify >= $NOTIFY_REQUIRED
		],
		[
		with_mate_panel=true;
		AC_SUBST(MATE_PANEL_CFLAGS)
		AC_SUBST(MATE_PANEL_LIBS)
		MATECOMPONENT_SERVER_DIR="$($PKG_CONFIG --variable=libdir matecomponent-activation-2.0)/matecomponent/servers"
		AC_SUBST(MATECOMPONENT_SERVER_DIR)
		],
		[
		with_mate_panel=false;
		if test "x$with_mate_panel" != xcheck; then
			AC_MSG_FAILURE(
				[test for libmatepanelapplet-2.0 and libmatenotify failed. (--without-mate-panel to disable).])
		fi;]
	)])
AM_CONDITIONAL(WITH_MATE_PANEL, [test "x$with_mate_panel" = xtrue ]) 


GTK_MODULES_DIR="$($PKG_CONFIG --variable=libdir gtk+-2.0)/gtk-2.0/modules"
AC_SUBST(GTK_MODULES_DIR)

# svnversion
dnl AC_PATH_PROG(SVNVERSION_BIN, [svnversion])
dnl SVNVERSION=`$SVNVERSION_BIN|sed -e 's;:;_;g' -e 's;exported;;'`
dnl AC_SUBST(SVNVERSION)
dnl AC_DEFINE_UNQUOTED(SVNVERSION, "$SVNVERSION", [svn version if appropriate])

# old automake fix
AC_SUBST(abs_top_srcdir)
# output

AC_CONFIG_FILES(
	[Makefile
	legacy-support/Makefile
	libserver/Makefile
	libserver/globalmenu-server.pc
	libsettings/Makefile
	applet/Makefile
	globalmenu-plugin/Makefile
	globalmenu-mate-panel/Makefile
	tools/Makefile
	schemas/Makefile
	po/Makefile.in
	])

AC_OUTPUT
