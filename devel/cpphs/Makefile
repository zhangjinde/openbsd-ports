COMMENT =	liberalised reimplementation of cpp in Haskell

MODCABAL_STEM =		cpphs
MODCABAL_VERSION	= 1.20.9.1
MODCABAL_REVISION	= 1
MODCABAL_MANIFEST	= polyparse	1.13	4
REVISION =		1
CATEGORIES =		devel
MAINTAINER =		Matthias Kilian <kili@openbsd.org>

# LGPL2.1
PERMIT_PACKAGE =	Yes

MODULES =		devel/cabal

WANTLIB =		c charset ffi gmp m iconv pthread util

LIB_DEPENDS =		converters/libiconv \
			devel/gmp \
			devel/libffi

post-install:
	${INSTALL_MAN}     ${WRKSRC}/docs/cpphs.1 ${PREFIX}/man/man1

.include <bsd.port.mk>
