COMMENT =	multiple states library for the lua language

GH_ACCOUNT =	keplerproject
GH_PROJECT =	rings
GH_TAGNAME =	v_1_3_0
PKGNAME =	luarings-1.3.0
CATEGORIES =	devel

HOMEPAGE =	http://keplerproject.github.io/rings/

# MIT
PERMIT_PACKAGE =	Yes

MODULES =	lang/lua

FLAVORS =	lua52
FLAVOR ?=

CFLAGS +=	-I${MODLUA_INCL_DIR}
COMPILE =	${CC} ${CFLAGS} -fPIC ${CFLAGS} -c
LINK =		${CC} ${CFLAGS} -fPIC -shared -L${LOCALBASE}/lib -o

REGRESS_FILES =	sample sample_state test

WRKDIST =	${WRKDIR}/${GH_PROJECT}-${GH_TAGNAME}

do-build:
	cd ${WRKDIST}/src && ${COMPILE} rings.c
	cd ${WRKDIST}/src && ${LINK} rings.so rings.o

do-install:
	${INSTALL_DATA_DIR} ${MODLUA_DATADIR} ${MODLUA_DOCDIR} ${MODLUA_LIBDIR}
	${INSTALL_DATA} ${WRKSRC}/src/stable.lua ${MODLUA_DATADIR}
	${INSTALL_DATA} ${WRKSRC}/src/*.so ${MODLUA_LIBDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/us/* ${MODLUA_DOCDIR}

do-test:
	cp ${WRKDIST}/src/*.so ${WRKDIST}/tests
	cp ${WRKDIST}/src/*.lua ${WRKDIST}/tests
.for r in ${REGRESS_FILES}
	cd ${WRKDIST}/tests && ${MODLUA_BIN} $r.lua
.endfor

.include <bsd.port.mk>
