
libmandir = $(LIB_MAN_DIR)

libman_PRE =				\
	vncExt.man			\
	$(Xvnc_shadows:=.man)

Xvnc_shadows =				\
	XVncExtQueryExtension		\
	XVncExtSetParam			\
	XVncExtGetParam			\
	XVncExtGetParamDesc		\
	XVncExtListParams		\
	XVncExtFreeParamList		\
	XVncExtGetServerCutText		\
	XVncExtGetClientCutText		\
	XVncExtSelectInput		\
	XVncExtConnect			\
	XVncExtGetQueryConnect		\
	XVncExtApproveConnect

EXTRA_DIST = $(libman_PRE)
CLEANFILES = $(libman_DATA)

libman_DATA = $(libman_PRE:man=@LIB_MAN_SUFFIX@)

SUFFIXES = .$(LIB_MAN_SUFFIX) .man

# String replacements in MAN_SUBSTS now comp reom xorg-macros.m4 via configure
.man.$(LIB_MAN_SUFFIX):
	$(AM_V_GEN)$(SED) $(MAN_SUBSTS) < $< > $@
