COMMENT =	cross-platform IRC bot written in Python

MODPY_EGG_VERSION = 0.83.4.1
DISTNAME =	Supybot-${MODPY_EGG_VERSION}
PKGNAME =	${DISTNAME:L}
REVISION =	2
CATEGORIES =	net devel

HOMEPAGE =	http://supybot.com/

# BSD
PERMIT_PACKAGE =	Yes

MASTER_SITES =	${MASTER_SITE_SOURCEFORGE:=supybot/}

MODULES =	lang/python
MODPY_VERSION =	${MODPY_DEFAULT_VERSION_2}

NO_TEST =	Yes

post-install:
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/supybot
	${INSTALL_DATA} ${WRKSRC}/docs/[A-Z]* ${PREFIX}/share/doc/supybot
	${INSTALL_MAN} ${WRKSRC}/docs/man/* ${PREFIX}/man/man1

.include <bsd.port.mk>
