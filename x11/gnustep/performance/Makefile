COMMENT =	GNUstep performance library

VERSION =	0.5.0
REVISION =	9
DISTNAME =	Performance-${VERSION}
PKGNAME =	gnustep-performance-${VERSION}
CATEGORIES =	devel
SHARED_LIBS +=  Performance               0.2

HOMEPAGE =	http://wiki.gnustep.org/index.php/Performance
MASTER_SITES =	${MASTER_SITE_GNUSTEP:=libs/}

MODULES =		x11/gnustep
WANTLIB =		pthread
MODGNUSTEP_IS_FRAMEWORK = Yes

MAKE_FLAGS +=	Performance_INTERFACE_VERSION=${LIBPerformance_VERSION}

.include <bsd.port.mk>
