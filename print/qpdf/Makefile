# XXX usually fails to build when an earlier version is installed

COMMENT=	PDF transformation and inspection utility

DISTNAME=	qpdf-10.6.3
REVISION=	0

SHARED_LIBS +=  qpdf                 9.4      # 34.3

CATEGORIES=	print graphics

HOMEPAGE=	http://qpdf.sourceforge.net/

MAINTAINER=	Antoine Jacoutot <ajacoutot@openbsd.org>

# Artistic License 2.0
PERMIT_PACKAGE=	Yes

WANTLIB += ${COMPILER_LIBCXX} c crypto gmp gnutls hogweed iconv
WANTLIB += idn2 intl jpeg m nettle p11-kit ssl tasn1 unistring
WANTLIB += z brotlidec brotlienc zstd

COMPILER=	base-clang ports-gcc base-gcc

MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=qpdf/}

USE_GMAKE=	Yes

LIB_DEPENDS=	graphics/jpeg \
		security/gnutls

CONFIGURE_STYLE=gnu

CONFIGURE_ENV=	CPPFLAGS="-I${LOCALBASE}/include" \
		LDFLAGS="-L${LOCALBASE}/lib" \
		ac_cv_prog_FOP= \
		ac_cv_prog_XSLTPROC= \
		ac_cv_prog_XMLLINT=

DEBUG_PACKAGES=	${BUILD_PACKAGES}

.include <bsd.port.mk>
