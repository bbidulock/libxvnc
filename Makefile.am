# SUBDIRS = doc

ACLOCAL_AMFLAGS = -I m4

SUBDIRS = src man

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = xvnc.pc

MAINTAINERCLEANFILES = ChangeLog INSTALL

dist_noinst_SCRIPTS = autogen.sh

.PHONY: ChangeLog INSTALL

INSTALL:
	$(INSTALL_CMD)

ChangeLog:
	$(CHANGELOG_CMD)

dist-hook: ChangeLog INSTALL

if LINT
# Check source code with tools like lint & spares
lint:
	(cd src && $(MAKE) $(MFLAGS) lint)
endif LINT
