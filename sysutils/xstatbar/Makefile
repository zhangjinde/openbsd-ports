ONLY_FOR_ARCHS=	${APM_ARCHS}

COMMENT=	simple system monitor bar

DISTNAME=	xstatbar-0.5
REVISION=	14
FIX_EXTRACT_PERMISSIONS=Yes

CATEGORIES=	sysutils x11

HOMEPAGE=	http://www.ryanflannery.net/hacking/xstatbar/

# ISC
PERMIT_PACKAGE=	Yes

WANTLIB += X11 Xau Xdmcp Xext Xrender c m sndio

# bad https redirect
#MASTER_SITES=	http://www.ryanflannery.net/hacking/xstatbar/files/
MASTER_SITES=	https://spacehopper.org/mirrors/

EXTRACT_SUFX=	.tgz

ALL_TARGET=	# empty
NO_TEST=	Yes

pre-configure:
	${SUBST_CMD} ${WRKSRC}/Makefile

.include <bsd.port.mk>
