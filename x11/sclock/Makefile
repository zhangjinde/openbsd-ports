COMMENT=	simple digital clock

DISTNAME=	sclock-0.6
REVISION=	3
CATEGORIES=	x11

# BSD
PERMIT_PACKAGE=	Yes

NO_TEST=	Yes
WANTLIB=	c X11

FAKE_FLAGS=	MANDIR=${PREFIX}/man/man

pre-configure:
	${SUBST_CMD} ${WRKSRC}/Makefile

.include <bsd.port.mk>
