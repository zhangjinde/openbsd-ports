COMMENT =		modeling language for convex optimization problems

MODPY_EGG_VERSION =	1.0.25
DISTNAME =		cvxpy-${MODPY_EGG_VERSION}
PKGNAME =		py-${DISTNAME}
CATEGORIES =		math
REVISION =		5

MAINTAINER =		Paul Irofti <paul@irofti.net>

# Apache v2
PERMIT_PACKAGE =	Yes

WANTLIB += ${COMPILER_LIBCXX} m pthread

MODULES =		lang/python

FLAVORS =		python3
FLAVOR =		python3

RUN_DEPENDS =		math/py-numpy${MODPY_FLAVOR} \
			math/py-scipy${MODPY_FLAVOR} \
			math/py-osqp${MODPY_FLAVOR} \
			math/py-ecos${MODPY_FLAVOR} \
			math/py-scs${MODPY_FLAVOR} \
			devel/py-multiprocess${MODPY_FLAVOR} \
			devel/py-six${MODPY_FLAVOR}

BUILD_DEPENDS =         lang/cython${MODPY_FLAVOR} \
			${RUN_DEPENDS}

MODPY_PI =		Yes
MODPY_SETUPTOOLS =	Yes
MODPY_PYTEST =		Yes

.include <bsd.port.mk>
