# $OpenBSD: Makefile,v 1.1.1.1 2021/11/27 18:35:30 thfr Exp $

COMMENT =	Steam API wrapper for Hashlink

V =		1.0pl0
DISTNAME =	hlsteam-${V}
GH_ACCOUNT =	HeapsIO
GH_PROJECT =	hlsteam
GH_COMMIT =	24265f62c0499a0c4f37d42b33548c24061c2bd7
CATEGORIES =	games
MAINTAINER =	Thomas Frohwein <thfr@openbsd.org>

# MIT
PERMIT_PACKAGE =	Yes
WANTLIB += hl steam_api

FIX_CRLF_FILES =	Makefile \
			native/gameserver.cpp \
			native/steamwrap.h

LIB_DEPENDS =		games/goldberg_emulator \
			lang/hashlink
USE_GMAKE =		Yes
NO_TEST =		Yes
SUBST_VARS +=		CFLAGS LDFLAGS

do-gen:
	${SUBST_CMD} ${WRKSRC}/Makefile

do-install:
	${INSTALL_DATA} ${WRKSRC}/steam.hdll ${PREFIX}/lib/

.include <bsd.port.mk>