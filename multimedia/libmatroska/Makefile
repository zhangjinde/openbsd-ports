COMMENT=	extensible open standard audio/video container library

DISTNAME=	libmatroska-1.6.3
CATEGORIES=	multimedia
MASTER_SITES=	https://dl.matroska.org/downloads/libmatroska/
EXTRACT_SUFX=	.tar.xz

SHARED_LIBS=	matroska	5.1

HOMEPAGE=	https://www.matroska.org/

MAINTAINER=	Brad Smith <brad@comstyle.com>

# LGPLv2.1+
PERMIT_PACKAGE=	Yes

WANTLIB += ${COMPILER_LIBCXX} ebml m

COMPILER =	base-clang ports-gcc base-gcc

MODULES =	devel/cmake

CONFIGURE_ARGS+=	-DCMAKE_C_FLAGS="${CFLAGS} -I${LOCALBASE}/include" \
			-DCMAKE_CXX_FLAGS="${CXXFLAGS} -I${LOCALBASE}/include" \
			-DCMAKE_SHARED_LINKER_FLAGS="-L${LOCALBASE}/lib"

LIB_DEPENDS +=	textproc/libebml>=1.4.2

NO_TEST =	Yes

.include <bsd.port.mk>
