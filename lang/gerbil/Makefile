BROKEN=		segmentation fault with gambit 4.9.4
BROKEN-powerpc64=gsc spins during build

COMMENT =	dialect of Scheme designed for systems programming

GH_ACCOUNT =	vyzo
GH_PROJECT =	gerbil
GH_TAGNAME =	v0.16
REVISION =	0

CATEGORIES =	lang

HOMEPAGE =	https://cons.io/

MAINTAINER = 	Timo Myyra <timo.myyra@bittivirhe.fi>

# LGPLv2.1/Apache 2.0
PERMIT_PACKAGE =	Yes

WANTLIB += c m pthread util z
WANTLIB += crypto iconv lzma sqlite3 ssl xml2

BUILD_DEPENDS =	lang/gambit

LIB_DEPENDS =	databases/sqlite3 \
		textproc/libxml

RUN_DEPENDS =	devel/git \
		lang/gambit

COMPILER =	base-clang ports-gcc
COMPILER_LANGS =	c

MAKE_ENV +=	CPPFLAGS=-I${LOCALBASE}/include \
		LDFLAGS=-L${LOCALBASE}/lib \
		GERBIL_PATH=${WRKINST}${PREFIX}/gerbil \
		GAMBCOMP_VERBOSE=1

GERBIL_ROOT =	${PREFIX}/gerbil

do-build:
	cd ${WRKSRC}/src && ulimit -n 1024 && ${SETENV} ${MAKE_ENV} ./build.sh

do-install:
	${INSTALL_DATA_DIR} ${GERBIL_ROOT}
	cp -R ${WRKSRC}/{lib,bin,doc,src} ${GERBIL_ROOT}
	${INSTALL_DATA_DIR} ${PREFIX}/share/emacs/site-lisp
	${INSTALL_DATA} ${WRKSRC}/etc/gerbil.el ${PREFIX}/share/emacs/site-lisp
	${INSTALL_DATA} ${WRKSRC}/*.md ${GERBIL_ROOT}
	${INSTALL_DATA} ${WRKSRC}/*.txt ${GERBIL_ROOT}

do-test:
	${SETENV} ${MAKE_ENV} ${WRKSRC}/bin/gxi ${WRKSRC}/src/std/run-tests.ss

.include <bsd.port.mk>
