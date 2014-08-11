
AM_CPPFLAGS = \
	-I$(top_srcdir)/include \
	-I$(top_srcdir)/include/X11 \
	-I$(top_srcdir)/include/X11/extensions

AM_CFLAGS = \
	$(XVNC_CFLAGS) \
	$(MALLOC_ZERO_CFLAGS) \
	$(CWARNFLAGS)

lib_LTLIBRARIES = libXvnc.la

libXvnc_la_LDFLAGS = -version-info 1:0:0 -no-undefined
libXvnc_la_LIBADD = $(XVNC_LIBS)
libXvnc_la_SOURCES = vncExt.c

libXvncincludedir=$(includedir)/X11/extensions
libXvncinclude_HEADERS = $(top_srcdir)/include/X11/extensions/Xvnc.h

if LINT
ALL_LINT_FLAGS = $(LINT_FLAGS) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) \
		 $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CFLAGS)

lint:
	$(LINT) $(ALL_LINT_FLAGS) $(libXvnc_la_SOURCES)
endif LINT

if MAKE_LINT_LIB
lintlibdir = $(libdir)

lintlib_DATA = $(LINTLIB)

$(LINTLIB): $(libXvnc_la_SOURCES)
	$(LINT) -y -oXvnc -x $(ALL_LINT_FLAGS) $(libXvnc_la_SOURCES)
endif MAKE_LINT_LIB

CLEANFILES = $(lintlib_DATA)
