COMMENT=		interface to the Fast Artificial Neural Network library

DISTNAME=		AI-FANN-0.10
REVISION=		6
CATEGORIES=		math

MODULES=		cpan

# perl
PERMIT_PACKAGE=	Yes

WANTLIB += c doublefann perl

LIB_DEPENDS =		math/fann

CONFIGURE_ARGS+=	FANN_LIB="${LOCALBASE}/lib" \
			FANN_INCLUDE"${LOCALBASE}/include"

MODCPAN_EXAMPLES=	Yes
MODCPAN_EXAMPLES_DIST=	samples

.include <bsd.port.mk>
