COMMENT =	embeddable common-lisp
CATEGORIES =	lang

V =		21.2.1
DISTNAME =	ecl-$V
SHARED_LIBS +=	ecl	8.0

HOMEPAGE =	https://common-lisp.net/project/ecl/
MAINTAINER =	Timo Myyra <timo.myyra@bittivirhe.fi>

SUBST_VARS =	V
EXTRACT_SUFX =	.tgz

# GPLv2 or later
PERMIT_PACKAGE =	Yes

MASTER_SITES =		${HOMEPAGE}static/files/release/

COMPILER =		base-clang ports-gcc
USE_GMAKE =		Yes
CONFIGURE_STYLE =	gnu
TEST_TARGET =		check
CONFIGURE_ENV +=	CPPFLAGS=-I${LOCALBASE}/include \
			ECLLIB_VERSION=${LIBecl_VERSION} \
			ecldir=${LOCALBASE}/lib/ecl \
			MAKEINFO=${PREFIX}/bin/gmakeinfo

CONFIGURE_ARGS +=	--enable-boehm=system \
			--enable-libatomic=system \
			--with-system-gmp \
			--with-gmp-prefix=${LOCALBASE}

# etags gets picked up if it's installed, and dumps core while
# generating the tags. so override it for now untill etags is fixed.
CONFIGURE_ENV +=	ETAGS=/usr/bin/true

WANTLIB +=	atomic_ops c ffi gc gmp m pthread

BUILD_DEPENDS +=	print/texinfo

LIB_DEPENDS +=	devel/gmp \
		devel/boehm-gc,-main \
		devel/boehm-gc,-atomic \
		devel/libffi

TEST_DEPENDS =	${BASE_PKGPATH}
TEST_ENV =	"ECL=${WRKDIST}/build/bin/ecl" \
		"TEST_IMAGE=${WRKDIST}/build/bin/ecl"

.include <bsd.port.mk>
