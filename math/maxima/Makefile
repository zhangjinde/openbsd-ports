COMMENT=		GPL computer algebra system based on DOE Macsyma

VERSION=		5.44.0
DISTNAME=		maxima-${VERSION}
CATEGORIES=		math

HOMEPAGE=		http://maxima.sourceforge.net/
MAINTAINER=		Ingo Feinerer <feinerer@logic.at>

# GPLv2+
PERMIT_PACKAGE=	Yes

WANTLIB += c ecl ffi gc gmp m pthread

MASTER_SITES=		${MASTER_SITE_SOURCEFORGE:=maxima/}

USE_GMAKE=		yes

# Python is not needed for building but configure fails without it.
# Instead of patching just add the lang/python dependency.
# http://sourceforge.net/p/maxima/mailman/message/34462954/
MODULES =		lang/python
MODPY_VERSION =	${MODPY_DEFAULT_VERSION_2}
MODPY_RUNDEP =		No

BUILD_DEPENDS =		print/texinfo
LIB_DEPENDS=		lang/ecl
RUN_DEPENDS =		devel/desktop-file-utils \
			misc/rlwrap \
			misc/shared-mime-info

SUBST_VARS=		VERSION

MAKE_FLAGS =		MAKEINFO="${LOCALBASE}/bin/gtexi2any" \
			TEXI2DVI="${LOCALBASE}/bin/gtexi2dvi"

CONFIGURE_ARGS+=	--enable-ecl
CONFIGURE_STYLE=	gnu

FLAVORS=		no_x11
FLAVOR?=

.if !${FLAVOR:Mno_x11}
MODULES+=		x11/tk
MODPY_VERSION =	${MODPY_DEFAULT_VERSION_2}
RUN_DEPENDS +=		${MODTK_RUN_DEPENDS} \
			math/gnuplot
BUILD_DEPENDS +=	${MODTK_BUILD_DEPENDS}
CONFIGURE_ARGS +=	--with-wish=${MODTK_BIN}
.endif

.include <bsd.port.mk>
