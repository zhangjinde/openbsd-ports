COMMENT=	interface to libstatgrab system statistics library

MODULES=	cpan
DISTNAME=	Unix-Statgrab-0.112
CATEGORIES=	sysutils

# Artistic
PERMIT_PACKAGE=	Yes

WANTLIB += c perl statgrab

LIB_DEPENDS=	sysutils/libstatgrab>=0.90

CONFIGURE_ARGS=	INC="-I${LOCALBASE}/include" \
		LIBS="-L${LOCALBASE}/lib -lstatgrab"

BUILD_DEPENDS=	devel/p5-Config-AutoConf
MAKE_ENV+=	TEST_POD=1

.include <bsd.port.mk>
