COMMENT=	aewm++ based pretty themable window manager

DISTNAME=	pekwm-${V}
V=		0.2.1
CATEGORIES=	x11

HOMEPAGE=	https://www.pekwm.se/

MAINTAINER=	Timo Myyra <timo.myyra@bittivirhe.fi>

# GPLv2
PERMIT_PACKAGE=	Yes

# uses pledge()
WANTLIB += ICE SM X11 Xext Xft Xinerama Xpm Xrandr c freetype jpeg m png
WANTLIB += ${COMPILER_LIBCXX}

COMPILER =	base-clang ports-gcc base-gcc

MASTER_SITES=	https://github.com/pekdon/pekwm/releases/download/release-${V}/
LIB_DEPENDS=	graphics/jpeg \
		graphics/png

MODULES=	devel/cmake

CONFIGURE_ARGS=	-DCMAKE_INSTALL_SYSCONFDIR=${SYSCONFDIR} \
		-DCMAKE_INSTALL_FULL_MANDIR=${PREFIX}/man \
		-DAWK=/usr/bin/awk \
		-DSED=/usr/bin/sed \
		-DSH=/bin/sh \
		-DTESTS=ON

post-install:
	@mv ${WRKINST}/etc/pekwm ${PREFIX}/share/examples

.include <bsd.port.mk>
