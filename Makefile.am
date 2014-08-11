# SUBDIRS = doc

ACLOCAL_AMFLAGS = -I m4

lib_LTLIBRARIES = libXvnc.la

AM_CPPFLAGS = -I${top_srcdir}/include
AM_CFLAGS = \
	    $(XVNC_CFLAGS) \
	    $(CWARNFLAGS)

libXvnc_la_LDFLAGS = -version-number 7:0:0 -no-undefined
libXvnc_la_LIBADD = $(XVNC_LIBS)
libXvnc_la_SOURCES = \
	vncExt.c \
	vncExt.h

xvncincludedir=$(includedir)/X11/extensions

xvncinclude_HEADERS = \
	include/X11/extensions/Xvnc.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = xvnc.pc

MAINTAINERCLEANFILES = ChangeLog INSTALL

dist_noinst_SCRIPTS = autogen.sh

if LINT
ALL_LINT_FLAGS = $(LINT_FLAGS) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) \
		 $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CFLAGS)

lint:
	$(LINT) $(ALL_LINT_FLAGS) $(libXvnc_la_SOURCES) $(LIBS) $(XVNC_LIBS)
endif LINT

if MAKE_LINT_LIB
lintlibdir = $(libdir)

lintlib_DATA = $(LINTLIB)

$(LINTLIB): $(libXvnc_la_SOURCES)
	$(LINT) -y -oXvnc -x $(ALL_LINT_FLAGS) $(libXvnc_la_SOURCES)
endif MAKE_LINT_LIB

.PHONY: ChangeLog INSTALL

INSTALL:
	$(INSTALL_CMD)

ChangeLog:
	$(CHANGELOG_CMD)

dist-hook: ChangeLog INSTALL

CLEANFILES = $(lintlib_DATA)
