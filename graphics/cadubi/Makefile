COMMENT=	ASCII drawing utility

GH_ACCOUNT =	statico
GH_PROJECT =	cadubi
GH_TAGNAME =	v1.3.4

CATEGORIES=	graphics editors

# MIT
PERMIT_PACKAGE=	Yes

NO_BUILD=	Yes
NO_TEST=	Yes
PKG_ARCH=	*

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/cadubi ${PREFIX}/bin
	${INSTALL_DATA_DIR} ${PREFIX}/share/doc/cadubi
	${INSTALL_DATA} ${WRKSRC}/{help.txt,LICENSE} \
		${PREFIX}/share/doc/cadubi
	${INSTALL_MAN} ${WRKSRC}/cadubi.1 ${PREFIX}/man/man1

.include <bsd.port.mk>
