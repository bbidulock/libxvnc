
AC_PREREQ([2.69])
AC_INIT([libXvnc], [1.1.1], [https://github.com/bbidulock/libXvnc/issues], [libXvnc])
AC_REVISION([1.1.1])

AC_CONFIG_SRCDIR([vncExt.c])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_AUX_DIR([scripts])
AC_USE_SYSTEM_EXTENSIONS

DATE='2014-08-11'
AC_SUBST([DATE])

#AM_INIT_AUTOMAKE([gnits 1.14 dist-bzip2 no-dist-gzip std-options -Wall color-tests silent-rules tar-pax])
AM_INIT_AUTOMAKE([foreign 1.14 dist-bzip2 no-dist-gzip std-options -Wall color-tests silent-rules tar-pax])
AM_MAINTAINER_MODE

# Require xorg-macros minimum of 1.12 for DocBook external references
XORG_MACROS_VERSION(1.12)
XORG_DEFAULT_OPTIONS
XORG_ENABLE_DOCS
XORG_WITH_XMLTO(0.0.22)
XORG_WITH_FOP
XORG_WITH_XSLTPROC
XORG_CHECK_SGML_DOCTOOLS(1.8)

# Checks for programs.
AC_PROG_CXX
AC_PROG_AWK
AC_PROG_CC
AC_PROG_CPP
AC_PROG_INSTALL
AC_PROG_LN_S
AC_PROG_MAKE_SET
AM_PROG_AR
AC_PROG_MKDIR_P
LT_PATH_LD

AC_DISABLE_STATIC
LT_PREREQ([2.4.2])
LT_INIT([dlopen])
LT_LANG([C])
AC_SUBST([LIBTOOL_DEPS])

PKG_PROG_PKG_CONFIG

# Checks for libraries

# Checks for header files.
AC_PATH_X

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

# Obtain compiler/linker options for depedencies
PKG_CHECK_MODULES(XVNC, xproto)

# Allow checking code with lint, sparse, etc.
XORG_WITH_LINT
XORG_LINT_LIBRARY([Xvnc])

AC_CONFIG_FILES([Makefile
		xvnc.pc])
AC_OUTPUT
